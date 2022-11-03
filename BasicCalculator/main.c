#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
 {
 	char islem;
 	float dizi[100],son;
 	int i;
 	int elesay;
 	printf("Kac adet sayi gireceksiniz   ");
 	scanf("%d",&elesay);
 	for(i=1;i<=elesay;i+=1)
 	{
 		printf("%d.sayi  ",i);
 		scanf("%f",&dizi[i]);
	 }
 	printf("Islem giriniz   ");
    scanf("%s",&islem);
 	switch(islem)
 	{
 		case 't':
 			son=0;
 		    for(i=0;i<elesay;i+=1)
 		 {
			 	
			 	son=son+dizi[i];
			 }
 			printf("sonucunuz   %f",son);
 		break;
 		case 'e':
 			son=0;
 	             for(i=0;i<elesay;i+=1)
			 {
			 	son=son-dizi[i];
			 }
 		    printf("sonucunuz  %f",son);
 		break;
 		case 'c':
 			son=1;
 		          for(i=1;i<=elesay;i+=1)
			 {
			 	
			 	son=son*dizi[i];
			 }
 		      printf("sonucunuz   %f",son);
 		break;
 		case 'b':
 			son=1;
 		      for(i=1;i<=elesay;i+=1)
			 {
			 	son=son/dizi[i];
			 }
 		   printf("sonucunuz    %f",son);
 		break;
 		default:
 			printf("Hatali giris");
 			
 		      
	 }
 	
	return 0;
}
