#define SIZE 100
#include<stdio.h>
void nhapMang(int a[], int n);
void xuatMang(int a[], int n);
int tongMang(int a[], int n);
int tongduong(int a[], int n);
int tongle(int a[], int n);
void demam(int a[], int n);
void demle(int a[],int n);
int ktsnt(int n);
void demsnt(int a[],int n);
int sodautien(int a[],int n);
int insole(int a[],int n);
int ktsoam(int a[],int n);
int ktso(int a[],int n);

int main()
{
	int A[SIZE]	;
	int n,x;
	
	do
	{
		printf("\nNhap vao so phan tu: ");
		scanf("%d",&n);
	}while(n<=0||n>100);
	
	//Goi ham
	nhapMang(A,n);
	printf("\nCac phan tu trong mang la: ");
	xuatMang(A,n);
	printf("\nTong mang: %d", tongMang(A,n));
	printf("\ntong gia tri duong la: %d",tongduong(A,n));
	tongle(A,n);
	demam(A,n);
	demle(A,n);
	demsnt(A,n);
	printf("\nso nguyen to dau tien la %d",sodautien(A,n));
	insole(A,n);
	if(ktsoam(A,n)==1)
	printf("\nmang A co ton tai so am");
	else
	printf("\nmang A ko ton tai so am");
	if(ktso(A,n)==1)
	printf("\ngia tri X co ton tai trong mang A ");
	else
	printf("\ngia tri X ko ton tai trong mang A ");
	
	
	return 0;
}
int ktso(int a[],int n)
{
	int x;
	printf("\nmoi nhap X de tim kiem ");
	scanf("%d",&x);
	for(int i=0;i<n;i++)
	{
		if(a[i]==x)
		return 1;
	}
	return 0;
}
int ktsoam(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		if(a[i]<0)
		return 1;
		return 0;
	}
}
int insole(int a[],int n)
{
	printf("\nso le nguyen duong la ");
	for(int i=0;i<n;i++)
	{
		if(a[i]%2==1&&a[i]>0)
		printf("\t%d",a[i]);
	}
}
int sodautien(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		if(ktsnt(a[i])==1)
		return a[i];	
	}

}
void demsnt(int a[],int n)
{
	int dem=0;
	for(int i=0;i<n;i++)
	{
		if(ktsnt(a[i])==1)
		dem++;
	}
	printf("\nco %d so nguyen to trong mang A",dem);
}
int ktsnt(int n)
{
	int dem=0;int i;
	if(n<2)
	return 0;
	for (i=1;i<=n;i++)
	{
		if(n%i==0)
		dem++;
	}
	if(dem==2)
	return 1;
	return 0;
}
void demle(int a[],int n)
{
	int i,dem=0;
	for(i=0;i<n;i=i+1)
	{
		if(a[i]%2==1)
		dem++;
	}
	printf("\nco %d phan tu le trong mang A",dem);
}
void demam(int a[], int n)
{
	int i,dem=0;
	for(i=0;i<n;i++)
	{
		if(a[i]<0)
		dem++;
	}
	printf("\nco %d phan tu am trong mang A",dem);
}
int tongle(int a[], int n)
{
	int i,tong=0;
	for(i=0;i<n;i=i+1)
	{
		if(i%2==1)
		tong=tong+a[i];
	}
	printf("\ntong cai phan tu tai vi tri le la: %d",tong);
}
int tongduong(int a[], int n)
{
	int i,tong=0;
	for(i=0;i<n;i=i+1)
	{
		if(a[i]>0)
		tong=tong+a[i];
	}
	
	return tong;
}
int tongMang(int a[], int n)
{
	int tong = 0;
	int i = 0;
	do
	{
		tong = tong + a[i];
		i++;
	}while(i<=n-1);
	
	return tong;
}
void xuatMang(int a[], int n)
{
	int i;
	for(i=0; i<=n-1; i++)
	{
		printf("%8d", a[i]);//*(a+i)
	}
}

void nhapMang(int a[], int n)
{
	int i;
	i = 0;
	while(i<=n-1)
	{
		printf("\nNhap gia tri tai vi tri %d: ", i);
		scanf("%d", &a[i]);//a + i
		i++;
	}
}


