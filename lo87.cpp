#include<stdio.h>  //�s6
int main()
{
	int i,max,min;
	int dizi[5]={1,2,3,4,7};
	for(i=0;i<5;i++){
		printf("Bir sayi girin:");
		scanf("%d",&dizi[i]);
	}    
	max=dizi[0];
	min=dizi[0];
	for(i=0;i<5;i++){
		if (dizi[i>max]){
	   max=dizi[i];
		}
		if(dizi[i]<min)
		printf("max:%d  min:%d",max,min);
	}
	return 0;
}
