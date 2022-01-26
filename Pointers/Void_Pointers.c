#include <stdio.h>
#include <stdbool.h>

void display(void* ptr, int size);

int main()
{
    void* voidptr;

    int a=17;
    double height=78.321;
    float weight=76.8;
    char c='F';
    bool healthy = true;

    voidptr = &c; // voidptr pointing to char

//    printf("Information about the person you choosed: \n");
//    printf("%c\n", *((char*)voidptr) );
//
//    voidptr = &height; // voidptr pointing to double
//    printf("height: %g\n", *((double*)voidptr) );
//
//    voidptr = &weight;
//    printf("Weight: %g\n", *(float*)voidptr );
//
//    voidptr = &a;
//    printf("Age: %i\n", *((int*)voidptr) );
//
//    voidptr = &healthy;
//    printf("Healthy: %i", *((bool*)voidptr) );

    display(&c, sizeof(char));
    display(&a, sizeof(int));
    display(&height, sizeof(double));


    return 0;
}
void display(void* ptr, int size)
{
    switch (size)
    {
    case (sizeof(int)): printf("\nAge: %i", *((int*)ptr) ); break;
    case (sizeof(double)): printf("\nHeight: %g", *((double*)ptr) ); break;
    case (sizeof(char)): printf("\nName: %c", *((char*)ptr) ); break;

    default:
        printf("\n\n\aPlease Enter narmalniy variable and true data type !!\n\n");
        break;
    }

}
