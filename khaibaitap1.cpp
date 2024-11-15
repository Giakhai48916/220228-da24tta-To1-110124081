#include<stdio.h>
main ()
{
	int n,s=0,i,p=1;
	printf("moi nhap n: ");
	scanf("%d",&n);
	for(i=0;i<n+1;i++)
	{
		s=s+i;
	
	}
	for(i=1;i<n+1;i++)
	{
		p=p*i;
	}
	printf("tong so tu 1 den %d la %d ",n , s);
	printf("\ntich so tu 1 den %d la %d ",n , p);
}
