#include <stdio.h>
#include <stdlib.h>

enum Level
{
    LOW = 1,
    MEDIUM,
    HIGH
};

int num = 43;
int *numAdd = &num;

void myFunction(int *);
void readFile();

int main()
{
    int uN;
    int myNumbers[5] = {10, 20, 30, 40, 50};
    // uN++;
    printf("%d", uN);
    myFunction(&myNumbers[0]);
    readFile();

    enum Level myVar = HIGH;

    switch (myVar)
    {
    case LOW:
        printf("Low Level\n");
        break;
    case MEDIUM:
        printf("Medium level\n");
        break;
    case HIGH:
        printf("High level\n");
        break;
    }

    // *numAdd = 5;
    printf("Number is %d\n", numAdd);
    printf("Number is %p\n", numAdd);
    printf("Number is %d\n", sizeof(numAdd));
    printf("Number is %d\n", sizeof(*numAdd));

    int *myList;
    myList = malloc(32);

    (myList == NULL) ? printf("fail\n") : printf("success\n");

    free(myList);
    myList = malloc(16);

    (myList == NULL) ? printf("fail\n") : printf("success\n");

    myList = realloc(myList, 64);

    (myList == NULL) ? printf("fail\n") : printf("success\n");

    return 0;
}

void myFunction(int *myNumber)
{
    for (int i = 0; i < 4; i++)
    {
        printf("%d\n", myNumber[i]);
    }
}

void readFile()
{
    // FILE *fptr;
    // fptr = fopen("E:/Workspaces/c_ws/list.txt", "r");
    // char myString[100];
    // fgets(myString, 100, fptr);
    // fclose(fptr);
}
