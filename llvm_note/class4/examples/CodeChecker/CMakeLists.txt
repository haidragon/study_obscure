add_llvm_library(CodeChecker MODULE CodeChecker.cpp PLUGIN_TOOL clang)

if(LLVM_ENABLE_PLUGINS AND (WIN32 OR CYGWIN))
  target_link_libraries(CodeChecker PRIVATE
    clangAST
    clangBasic
    clangFrontend
    clangLex
    LLVMSupport
    )
endif()
