#include <iostream>
#include "clang/AST/AST.h"
#include "clang/AST/ASTConsumer.h"
#include "clang/AST/RecursiveASTVisitor.h"
#include "clang/Frontend/CompilerInstance.h"
#include "clang/Frontend/FrontendPluginRegistry.h"
using namespace clang;
using namespace std;
using namespace llvm;
namespace MyPlugin
{
    class MyASTVisitor: public
    RecursiveASTVisitor < MyASTVisitor >
    {
private:
        ASTContext *context;
public:
        void setContext(ASTContext &context)
        {
            this->context = &context;
        }

        bool VisitDecl(Decl *decl)
        {
            cout << "-------- VisitDecl: haidragon"<<endl;
            if (isa < ObjCInterfaceDecl > (decl)) {
                ObjCInterfaceDecl *interDecl = (ObjCInterfaceDecl *)decl;
                if (interDecl->getSuperClass()) {
                    string interName = interDecl->getNameAsString();
                    string superClassName = interDecl->getSuperClass()->getNameAsString();

                    cout << "-------- ClassName:" << interName << " superClassName:" << superClassName << endl;
                }
            }

            return true;
        }
    };
    
    class MyASTConsumer: public ASTConsumer
    {
private:
        MyASTVisitor visitor;
        void HandleTranslationUnit(ASTContext &context)
        {
            visitor.setContext(context);
            visitor.TraverseDecl(context.getTranslationUnitDecl());
        }
    };
    class MyASTAction: public PluginASTAction
    {
public:
        unique_ptr < ASTConsumer > CreateASTConsumer(CompilerInstance & Compiler, StringRef InFile) {
            return unique_ptr < MyASTConsumer > (new MyASTConsumer);
        }
        bool ParseArgs(const CompilerInstance &CI, const std::vector < std::string >& args)
        {
            return true;
        }
    };
}
static clang::FrontendPluginRegistry::Add
< MyPlugin::MyASTAction > X("MyPlugin",
                            "MyPlugin desc");

