#include <stdio.h>

int main() {
    int r;
    float pi=3.14;
    float c,a;
    printf("Enter the radius of the circle: ");
    scanf("%d",&r);
    c=pi*r*r;
    a=2*pi*r;
    printf("The Area of the circle is: %f \n",a);
    printf("The Circumference of the circle is: %f",c);
    
    return 0;

}
