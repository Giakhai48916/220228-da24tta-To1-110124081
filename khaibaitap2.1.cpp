#include<stdio.h>
int main()
{
	int n,i;
	printf("\nmoi nhap bang cuu chuong: ");
	scanf("%d",&n);
	if(n<2||n>9)
	{
	do
		{
			printf("\n nhap lai di ban e ");
			scanf("%d",&n);
		}
	while(n<2||n>9);
	}
	for(i=1;i<=10;i++)
	{
		printf("%d * %d = %d ",n ,i ,n*i);
		printf("\n");
	}
}
