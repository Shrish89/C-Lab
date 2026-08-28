#include <stdio.h>

int globalVar = 10;

int main()
{
    int localVar = 20;
    static int staticVar = 30;

    printf("Inside main():\n");
    printf("Global variable = %d\n", globalVar);
    printf("Local variable = %d\n", localVar);
    printf("Static variable = %d\n", staticVar);

    globalVar = globalVar + 10;
    localVar = localVar + 10;
    staticVar = staticVar + 10;

    printf("\nAfter changing values in main():\n");
    printf("Global variable = %d\n", globalVar);
    printf("Local variable = %d\n", localVar);
    printf("Static variable = %d\n", staticVar);

    {
        int blockVar = 40;

        printf("\nInside block:\n");
        printf("Global variable = %d\n", globalVar);
        printf("Local variable = %d\n", localVar);
        printf("Static variable = %d\n", staticVar);
        printf("Block variable = %d\n", blockVar);

        globalVar = globalVar + 10;
        localVar = localVar + 10;
        staticVar = staticVar + 10;
        blockVar = blockVar + 10;

        printf("\nAfter changing values inside block:\n");
        printf("Global variable = %d\n", globalVar);
        printf("Local variable = %d\n", localVar);
        printf("Static variable = %d\n", staticVar);
        printf("Block variable = %d\n", blockVar);
    }

    printf("\nAfter leaving block:\n");
    printf("Global variable = %d\n", globalVar);
    printf("Local variable = %d\n", localVar);
    printf("Static variable = %d\n", staticVar);

    return 0;
}