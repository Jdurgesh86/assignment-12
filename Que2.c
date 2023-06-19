#include<stdio.h>
int printreverse(int n);
int main()
{
    int n;
    printf("Enter the number ");
    scanf("%d",&n);
    printreverse(n);
}
int printreverse(int n)
{
    if(n==0)
        return 0;
    printf("%d ",n);
    printreverse(n-1);
}

