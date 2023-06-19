#include<stdio.h>
int printodd(int n);
int main()
{
    int n;
    printf("Enter the number ");
    scanf("%d",&n);
    printodd(n);
}
int printodd(int n)
{
    if(n==0)
        return 0;
    printodd(n-1);
    printf("%d ",n*2-1);
}