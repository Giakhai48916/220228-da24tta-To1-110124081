#include<stdio.h>
#define size 100
void nhapmang (float a[], int n);
void xuatmang (float a[], int n);
int tong(float a[], int n);
int tongle(float a[],int n);
int dem(float a[], int n);
int sapxep(float a[],int n);
int insole(float a[],int n);
int insoko(float a[],int n);
int anhca(float a[],int n);
int daika(float a[],int n);
int vitrilon(float a[],int n);
int ktsoam(float a[],int n);


int main()
{
	float a[size];
	int n;
	printf("\nNhap vao so phan tu: ");
	scanf("%d",&n);
	if(n<=0)
	{
		do
		{
			printf("\nhe thong bi loi moi nhap lai n ");
			scanf("%d",&n);
			
		}while(n<=0);
	}
	nhapmang(a,n);
	printf("\nphan tu trong mang la ");
	xuatmang(a,n);
	tong(a,n);
	tongle(a,n);
	dem(a,n);
	sapxep(a,n);
	insole(a,n);
	insoko(a,n);
	anhca(a,n);
	daika(a,n);
	vitrilon(a,n);
	if (ktsoam(a,n)==1)
	printf("\nmang a toan la so am");
	else
	printf("\nmang a khong hoan toan la so am");
}
int ktsoam(float a[],int n)
{
	int dem=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]<0)
		dem++;
	}
	if(dem==0)
	return 0;
	return 1;
}
int vitrilon(float a[],int n)
{
	int i,j,k;
	float ongtrum=a[1];
	for(i=0;i<n;i++)
	{
		j=i+1;
		if(a[i]>a[j])
		{
		ongtrum=a[i];
		k=i;
		}
	}
	printf("\nvi tri co gia tri lon nhat trong mang a la: a[%d]",k);	
}
int daika(float a[],int n)
{
	int i,j,k;
	float ongtrum=a[1];
	for(i=0;i<n;i++)
	{
		j=i+1;
		if(a[i]>a[j])
		{
		ongtrum=a[i];
		k=i;
		}
	}
	printf("\nvi tri co gia tri lon nhat dau tien trong mang a la: a[%d]",k);
}
int anhca(float a[],int n)
{
	int i,j;
	float ongtrum=0;
	for(i=0;i<n;i++)
	{
		j=i+1;
		if(a[i]>a[j])
		ongtrum=a[i];
	}
	printf("\ngia tri lon nhat trong mang a la: %.2f",ongtrum);
}
int insoko(float a[],int n)
{
	int dem=0;
	printf("\ncac vi tri co gia tri khong la:");
	for(int i=0;i<n;i++)
	{
		if(a[i]==0)
		{
		printf("\ta[%d]",i);
		dem++;
		}
	}
	if(dem==0)
	printf("\nkhong co gia tri nao trong mang bang 0");
}
int insole(float a[],int n)
{
	printf("\ncac gia tri tai vi tri le la:");
	for(int i=0;i<n;i++)
	{
		if(i%2==1)
		printf("\t%.2f",a[i]);
	}
}
int sapxep(float a[],int n)
{
	int i,j;
	float nguoithu3;
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		if(a[i]>a[j])
		{
			nguoithu3=a[j];
			a[j]=a[i];
			a[i]=nguoithu3;
		}

	}
	printf("\ncac phan tu tang dan trong mang la:");
	for(i=0;i<n;i++)
	{
		printf("\t%.2f",a[i]);
	}
	
}
int dem(float a[], int n)
{
	int i,dem=0;
	for(i=0;i<n;i++)
	{
		if(a[i]>0)
		dem++;
	}	
	printf("\nco %d so phan tu duong trong mang",dem);
}
int tongle(float a[],int n)
{
	int i,dem=1;
	float tong=0;
	for(i=0;i<n;i++)
	{
		if(i%2==1)
		{
		tong=tong+a[i];
		dem++;
		}
	}
	printf("\ntong trung binh cong cac phan tu tai vi tri le trong mang la %.2f ",tong/dem);
}
int tong(float a[], int n)
{
	int i;
	float tong=0;
	for(i=0;i<n;i++)
	{
		tong=tong+a[i];
	}
	printf("\ntong cac phan tu trong mang la %.2f ",tong);
}
void xuatmang (float a[], int n)
{
	for(int i=0;i<n;i++)
	{
		printf("\t%.2f",a[i]);
	}
}
void nhapmang(float a[], int n)
{
	int i;
	i = 0;
	for(i;i<n;i++)
	{
		printf("\nNhap gia tri tai vi tri a[%d]: ", i);
		scanf("%f", &a[i]);
	}
}

