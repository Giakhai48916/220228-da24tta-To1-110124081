#include<stdio.h>
int main()
{
	int i=1,n;
	do
	{
	printf("moi nhap n ");
	scanf("%d",&n);
	}
	while(n<0||n>10);
	while(i<=n)
	{
		printf("\n%d",i);
		i=i+1;
	}
}
