//write a program to print binary of a decimal number
#include<stdio.h>
int printbinary(int n);
int main()
{
    int n;
    printf("Enter the number ");
    scanf("%d",&n);
    printbinary(n);
}

int printbinary(int n)
{
    if(n>=1)
    {
        printbinary(n/8);
        printf("%d",n%8);
    }
}

