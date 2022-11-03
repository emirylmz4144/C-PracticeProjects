#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
 {
 	int i,j,en;
 	printf("Sayi giriniz  ");
 	scanf("%d",&en);
 	for(i=1;i<=en;i+=1)
 	 {
 	 	for(j=1;j<=i;j+=1)
 	      {
 	 		printf("*");
		  }
		  for(j=1;j<=en-i;j+=1)
		  {
		  	printf("  ");
		  }
		  for(j=1;j<=i;j+=1)
		  {
		  	printf("*");
		  }
		  printf("\n");
	 }
	 for(i=en;i>=1;i-=1)
	 
	 {
	 	for(j=i;j>=1;j-=1)
	 	{
	 		printf("*");
		 }
		 for(j=1;j<=en-i;j+=1)
		 {
		 	printf("  ");
		 }
		 for(j=i;j>=1;j-=1)
		 {
		 	printf("*");
		 }
		 printf("\n");
	 }
	return 0;
}
