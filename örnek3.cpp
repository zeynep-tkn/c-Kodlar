/*
örnek3
 klavyeden istenen sayının faktöriyelini bulan program
 */
 
#include<stdio.h>
int main()
{
	int a,i,faktoriyel=1;
	printf("lutfen faktöriyelini istediğiniz sayiyi girin");
	scanf("%d",&a);
	for(i=a;i>1;i--)
	{
		faktoriyel=faktoriyel*i;
	}
	printf("sonuc:%d",faktoriyel);
	return 0;
}

