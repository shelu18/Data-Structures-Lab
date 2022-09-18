#include <stdio.h>

int fact(int);
void main(){
    int n,f;
    printf("Enter a number:");
    scanf("%d",&n);
    f=fact(n);
    printf("%d",f);
}
int fact(int x){
    if (x==1){
        return 1;
    }
    else{
        return x*fact(x-1);
    }
}
