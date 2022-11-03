/*#############################################
# A C program to illustrate the size pointers #
# Author: Sudarshana K                        #
# Date: 03-11-2022                            #
###############################################
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{   // declaring a integer variable
    int a=100;
    //declaring a integer pointer variable
    int* pa;
    float* pf;
    double* pd;
    //initializing a pointer variable with address
    pa = &a;
    //print the size of the data type
    printf("\nThe size of integers is %d bytes", sizeof(int));
    printf("\nThe size of integer pointer is %d bytes\n", sizeof(pa));

    //print the size of the floating point data type
    printf("\nThe size of floating point data type is %d bytes", sizeof(float));
    printf("\nThe size of floating point pointer is %d bytes", sizeof(pf));

    //print the size of the floating point data type
    printf("\nThe size of double precision data type is %d bytes", sizeof(double));
    printf("\nThe size of double precision pointer is %d bytes", sizeof(double*));
    //print the size of the character data type
    printf("\nThe size of character data type is %d bytes", sizeof(char));
    printf("\nThe size of character pointer is %d bytes", sizeof(char*));
    //print the size of the generic data type
    printf("\nThe size of void data type is %d bytes", sizeof(void));
    printf("\nThe size of void pointer is %d bytes", sizeof(void*));
    return 0;
}
