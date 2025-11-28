#include<stdio.h>
#include<math.h>
int amst_c(int);
int main(){
    int n,am;
    printf("Enter the number:\n");
    scanf("%d",&n);
    am=amst_c(n);
if(am==n)
    printf("%d is an Armstrong number.\n",n);
else
    printf("%d is not an Armstrong number.\n",n);
return 0;
}
int amst_c(int n){
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
return sum;
}
