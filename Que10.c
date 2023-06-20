#include<stdio.h>
int reverse(int n);
int rem,reversenum=0;
int main()
{
    int n,ans;
    printf("Enter the number ");
    scanf("%d",&n);
    ans=reverse(n);
    printf("The reverse number is %d",ans);
}

int reverse(int n)
{
   if(n>=1)
   {
        rem=n%10;
        reversenum=reversenum*10+rem;
        reverse(n/10);
   }
   else return reversenum;
}
