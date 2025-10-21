#include<stdio.h>
#include<math.h>
int main(){
    int n;
    printf("Enter the number:\n");
    scanf("%d",&n);
    int d=0,m,sum=0,r;
    m=n;
    while(n>0){
       n=n/10;
       d++;
}
n=m;
while(n>0){
    r=n%10;
    sum=sum+pow(r,d);
    n=n/10;
}
if(sum==m)
    printf("%d is an Armstrong number.\n",m);
else
    printf("%d is not an Armstrong number.\n",m);
return 0;
}