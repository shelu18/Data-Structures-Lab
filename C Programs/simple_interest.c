#include <stdio.h>

int main() {
   int p,t;
   float r,s;
   printf("Enter the principle amount:");
   scanf("%d",&p);
   printf("Enter the Interest Rate:");
   scanf("%e",&r);
   printf("Enter the time:");
   scanf("%d",&t);
   s=p*r*t/100;
   printf("The simple interest is: %f", s);
   

    return 0;
}
