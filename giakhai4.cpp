#include<stdio.h>
int main()
{
	int a;
	float b;
	float c;
	float d;
	printf("moi nhap so luong: ");
	scanf("%d",&a);
	printf("moi nhap don gia: ");
	scanf("%f",&b);
	printf("moi nhap chi phi van chuyen: ");
	scanf("%f",&c);
	d=a*b-c;
	printf("doanh thu kiem duoc la: %.2f",d);	
}
