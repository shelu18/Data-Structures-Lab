#include <stdio.h>

int main() {
   float r,a,p;
   printf("Enetr the radius of a circle:");
   scanf("%f",&r);
   p=2*3.14*r;
   a=r*r*3.14;
   printf("The Circumference of a circle is: %f \n",p);
   printf("The Area of a circle is: %f",a);

    return 0;
}
