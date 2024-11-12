#include<stdio.h>
int main()
{
	int a,b;
	printf("moi nhap 2 so nguyen a va b ");
	scanf("%d",&a);
	scanf("%d",&b);
	if(a<b)
	printf("\n a la so be hon: %d",a);
	if(a>b)
	printf("\n b la so be hon: %d",b);
	if(a==b)
	printf("\n a va b bang nhau");
}
