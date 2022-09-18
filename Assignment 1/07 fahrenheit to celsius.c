#include <stdio.h>

int main() {
    float c,f;
    
    printf("Enter the temperature in fahrenheit:");
    scanf("%f",&f);
    
    c=(f-32)/1.8;
    printf("The temperature in celsius is: %f",c);

    return 0;
}
