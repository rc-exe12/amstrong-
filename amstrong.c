#include<stdio.h>
int am_n(int,int);
int main()
{
    int n,m,c=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    m=n;
    while(n>1){
        n=n/10;
        c++;
    }
    n=m;
    m=am_n(n,c);
if(m==n)
    printf("The number %d is an Armstrong number",n);
else
    printf("The number %d is not an Armstrong number",n);
    
    return 0;
}
int am_n(int n,int c)
{
   if(n==0)
       return 0;
   else
       return (pow(n%10,c)+am_n(n/10,c));
}
