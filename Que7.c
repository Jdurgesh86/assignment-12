#include<stdio.h>
int printsq(int n);
int main()
{
    int n;
    printf("Enter the number ");
    scanf("%d",&n);
    printsq(n);
}

int printsq(int n)
{
    if(n>=1)
    {
    printsq(n-1);
    printf("%d ",n*n);
    }
}