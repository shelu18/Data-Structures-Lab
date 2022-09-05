#include <stdio.h>

int main() {
    int a,b,n,c;
    printf("The the first number:");
    scanf("%d",&a);
    printf("The the second number:");
    scanf("%d",&b);
    printf("Press 1 for addition \n");
    printf("Press 2 for subtraction \n");
    printf("Press 3 for multiplication \n");
    printf("Press 4 for division \n");
    scanf("%d",&n);
    switch (n)
    {
        case 1:
        c=a+b;
        printf("Sum is: %d",c);
        break;
        
        case 2:
        c=a-b;
        printf("Subtraction is: %d",c);
        break;
        
        case 3:
        c=a*b;
         printf("Multiplication is: %d",c);
        break;
        
        case 4:
        c=a/b;
         printf("Division is: %d",c);
        break;
        
        default:
        printf("Invalid Input");
    }


    return 0;
}
