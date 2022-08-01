#include <stdio.h>

int main() {
   int a,b,sum,mul,sub,mod;
   float div;
   
   printf("Enter the value of 1st number:");
   scanf("%d",&a);
   
   printf("Enter the value of second number:");
   scanf("%d",&b);
   
   sum=a+b;
   sub=a-b;
   mul=a*b;
   div=a/b;
   mod=a%b;
   printf("The sum of %d and %d is:%d \n",a,b,sum);
   printf("The difference of %d and %d is:%d \n",a,b,sub);
   printf("The multiplication of %d and %d is:%d \n",a,b,mul);
   printf("The division of %d and %d is:%f \n",a,b,div);
   printf("The modulus of %d and %d is:%d \n",a,b,mod);
  
   

    return 0;
}
