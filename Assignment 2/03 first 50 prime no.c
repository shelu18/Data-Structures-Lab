#include<stdio.h>

int main()
{
	 
	 int count=1, temp, i=2, j;
	 
  printf("First 50 Prime Numbers are: \n");
	 while(count <= 50)
	 {
		  temp = 0;
		  for(j=2; j <= i/2; j++)
		  {
			   if(i%j==0)
			   {
				    temp=1;
				    break;
			   }
		  }
		  if(temp==0)
		  {
			   printf("%d\t",i);
			   count++;
		  }
		  i++;
	 }
	 return(0);
}
