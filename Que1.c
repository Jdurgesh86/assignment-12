#include<stdio.h>
int printn(int n);
int main()
{
    int n;
    printf("Enter the number by which you want to print numbers ");
    scanf("%d",&n);
    printn(n);
}

int printn(int n)
{
    if(n==0)
        return 0;
    printn(n-1);
    printf("%d ",n);
}