#include <stdio.h>
int main()
{
    int i, num, temp; 
   for (num=1;num<=1000;num++){
     temp=0;  
    
    for (i = 2; i <= num/2; i++)
    {
        if (num % i == 0)
        {
            temp++;
            break;
        }
    } 
    if (temp == 0 )

    {
        printf("%d \t", num);
    }
   
    }

    return 0;

}
