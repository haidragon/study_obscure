#include <stdlib.h>
#include <stdio.h>
int add (int a,int b){
    return a+b;
}

int main(int argc, char **argv)
{
    add(1,2);
    if (argc == 1) {
        printf("%d\n", argc);
        return 0;
    }
    return 0;
}
