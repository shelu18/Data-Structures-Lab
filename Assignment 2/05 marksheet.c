#include <stdio.h>

int main() {
    char a[20];
    int roll,p,c,m,e,cs,total;
    float percent;

    printf("Enter name:");
    scanf("%s",&a);
    
    printf("Ennter Roll no.");
    scanf("%d",&roll);
    
    printf("Enter the marks of Physics:");
    scanf("%d",&p);
    
    printf("Enter the marks of Chemistry:");
    scanf("%d",&c);
    
    printf("Enter the marks of mathematics:");
    scanf("%d",&m);
    
    printf("Enter the marks of English:");
    scanf("%d",&e);
    
    printf("Enter the marks of Computer Science:");
    scanf("%d",&cs); 
    
    total=p+c+m+e+cs;
    
    percent=total*0.5;
    printf("\n\n\n\n\n__________________________________________________ \n");
    
    printf("Name of Student: %s \n",a);
    printf("Roll no. of student: %d \n",roll);
    printf("_______________________________________________ \n ");
    printf("S.No. \t \t \t Subject \t \t \t Marks \n");
    printf("   1. \t \t \t Physics \t \t \t  %d \n",p);
    printf("   2. \t \t \t Chemistry \t \t \t  %d \n",c);
    printf("   3. \t \t \t Maths	  \t \t \t  %d \n",m);
    printf("   4. \t \t \t English \t \t \t  %d \n",e);
    printf("   5. \t \t \t CS 	 \t \t \t  %d \n",cs);
    printf("_______________________________________________ \n ");
    printf("Total Marks: %d \n",total);
    printf("Percentage: %f \n",percent);
    printf("Result: ");
    

    return 0;
}
