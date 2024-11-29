
#include<stdio.h>
#define size 100
void nhapmang(int a[size][size],int m,int n);
void xuatmang(int a[size][size],int m, int n);
int tongmang(int a[size][size],int m, int n);
int tongdong(int a[size][size],int m, int n);
int tongcot(int a[size][size],int m, int n);
int ktdongam(int a[size][size],int m, int n);
int ktcotam(int a[size][size],int m ,int n);
int sapxep(int a[size][size],int m, int n);
int ktsnt(int x);
int snttrongcot(int a[size][size],int m, int n);
int ktsole(int a[size][size],int m, int n);
int kttontai(int a[size][size],int m, int n);
int ktvitri(int a[size][size],int m, int n);

int main()
{
	int a[size][size];
	int m,n;
	printf("moi nhap so dong cua mang ");
	scanf("%d",&m);
	if(m<=0)
	{
		do
		{
			printf("nhap sai r nhap lai di ");
			scanf("%d",&m);
		}while(m<=0);
	}
	printf("moi nhap so cot cua mang ");
	scanf("%d",&n);
	if(n<=0)
	{
		do
		{
			printf("nhap sai r nhap lai di ");
			scanf("%d",&n);
		}while(n<=0);
	}
	nhapmang(a,m,n);
	xuatmang(a,m,n);
	tongmang(a,m,n);
	tongdong(a,m,n);
	tongcot(a,m,n);
	ktdongam(a,m,n);
	ktcotam(a,m,n);	
	sapxep(a,m,n);
	snttrongcot(a,m,n);
	ktsole(a,m,n);
	kttontai(a,m,n);
	ktvitri(a,m,n);
}
int ktvitri(int a[size][size],int m, int n)
{
	int x,dem=0,j,i,k,h;
	printf("\nmoi nhap so de kiem tra vi tri: ");
	scanf("%d",&x);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i][j]==x)
			{
			k=i;
			h=j;
			dem++;
			}
		}
	}
	if(dem==0)
	printf("\n%d khong ton tai trong mang A",x);
	else
	printf("\n%d co ton tai trong mang A tai vi tri A[%d][%d]",x,k,h);
}
int kttontai(int a[size][size],int m, int n)
{
	int x,dem=0,j,i;
	printf("\nmoi nhap so de kiem tra su ton tai: ");
	scanf("%d",&x);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i][j]==x)
			dem++;
		}
	}
	if(dem==0)
	printf("\n%d khong ton tai trong mang A",x);
	else
	printf("\n%d co ton tai trong mang A",x);
}
int ktsole(int a[size][size],int m, int n)
{
	int k,i,j,dem=0;
	printf("\nmoi nhap so cot can kiem tra so le: ");
	scanf("%d",&k);
	if(k<=0||k>n)
	{
		do
		{
			printf("\nsao m ngu vay,m co mat ko,nhap lai coi ");
			scanf("%d",&k);
		}while(k<=0||k>n);
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(j==k-1)
			{
				if(a[i][j]%2==0)
				{
					dem++;
				}
			}
		}
	}
	if(dem==0)
	printf("\ncot %d toan la so le",k);
	else
	printf("\ncot %d khong hoan toan la so le",k);
	
}
int snttrongcot(int a[size][size],int m, int n)
{
	int k,i,j,dem=0;
	printf("\nmoi nhap so cot can kiem tra so nguyen to: ");
	scanf("%d",&k);
	if(k<=0||k>n)
	{
		do
		{
			printf("\nsao m ngu vay,m co mat ko,nhap lai coi ");
			scanf("%d",&k);
		}while(k<=0||k>n);
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(j==k-1)
			{
				if(ktsnt(a[i][j])==1)	
				dem=dem+1;
			}
		}
	}
	if(dem==0)
	printf("\ncot %d khong ton tai so nguyen to",k);	
	else
	printf("\ncot %d co ton tai so nguyen to",k);
}
int ktsnt(int x)
{
	if(x<2)
	return 0;
	int dem=0,i;
	for(i=1;i<=x;i++)
	{
		if(x%i==0)
		dem++;
	}
	if(dem==2)
	return 1;
	return 0;
}
int sapxep(int a[size][size],int m, int n)
{
	int i,j,k,x,nguoidensau;
	printf("\nmoi nhap so dong can sap xep: ");
	scanf("%d",&k);
	if(k<=0||k>m)
	{
		do
		{
			printf("\nsao m ngu vay,m co mat ko,nhap lai coi ");
			scanf("%d",&k);
		}while(k<=0||k>m);
	}
	for(i=0;i<m;i++)
	{
		if(i==k-1)
		{
			for(j=0;j<n-1;j++)
			{
				for(x=j+1;x<n;x++)
				{
					if(a[i][j]<a[i][x])
					{
						nguoidensau=a[i][j];
						a[i][j]=a[i][x];
						a[i][x]=nguoidensau;
					}
				}
			}
		}
	}
	printf("\ngia tri dong %d sau khi sap xep la: ",k);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==k-1)
			printf("\t%d",a[i][j]);
		}
	}
}
int ktcotam(int a[size][size],int m ,int n)
{
	int k,i,j,dem=0;
	printf("\nmoi nhap so cot can kiem tra so am: ");
	scanf("%d",&k);
	if(k<=0||k>n)
	{
		do
		{
			printf("\nsao m ngu vay,m co mat ko,nhap lai coi ");
			scanf("%d",&k);
		}while(k<=0||k>n);
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(j==k-1)
			{
				if(a[i][j]<0)			
				dem=dem+1;
			}
		}
	}
	if(dem==0)
	printf("cot %d toan la so duong",k);
	else
	printf("cot %d co ton tai so am",k);

}
int ktdongam(int a[size][size],int m, int n)
{
	int k,i,j,dem=0;
	printf("\nmoi nhap so dong can kiem tra so am: ");
	scanf("%d",&k);
	if(k<=0||k>m)
	{
		do
		{
			printf("\nsao m ngu vay,m co mat ko,nhap lai coi ");
			scanf("%d",&k);
		}while(k<=0||k>m);
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==k-1)
			{
				if(a[i][j]<0)			
				dem=dem+1;
			}
		}
	}
	if(dem==0)
	printf("dong %d toan la so duong",k);
	else
	printf("dong %d co ton tai so am",k);

}
int tongcot(int a[size][size],int m, int n)
{
	int k,i,j,tong=0;
	printf("\nmoi nhap so cot can tinh tong: ");
	scanf("%d",&k);
	if(k<=0||k>n)
	{
		do
		{
			printf("\nsao m ngu vay,m co mat ko,nhap lai coi ");
			scanf("%d",&k);
		}while(k<=0||k>n);
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(j==k-1)
			tong=tong+a[i][j];
		}
	}
	printf("\ntong cot %d la %d",k,tong);
}
int tongdong(int a[size][size],int m, int n)
{
	int k,i,j,tong=0;
	printf("\nmoi nhap so dong can tinh tong: ");
	scanf("%d",&k);
	if(k<=0||k>m)
	{
		do
		{
			printf("\nsao m ngu vay,m co mat ko,nhap lai coi ");
			scanf("%d",&k);
		}while(k<=0||k>m);
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==k-1)
			tong=tong+a[i][j];
		}
	}
	printf("\ntong dong %d la %d",k,tong);
}
int tongmang(int a[size][size],int m, int n)
{
	int i,j,tong=0;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			tong=tong+a[i][j];
		}
	}
	printf("\ntong gia tri trong mang la: %d",tong);
}
void nhapmang(int a[size][size],int m,int n)
{
	int i,j;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("moi nhap gia tri a[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
	}
}
void xuatmang(int a[size][size],int m,int n)
{
	int i,j;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
		printf("\t%d",a[i][j]);
		}
		printf("\n");
	}
}


