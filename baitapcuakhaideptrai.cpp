#include<stdio.h>
int inra(int n);
int sochan(int n);
int chiacho5(int n);
int sont(int n);
int tong(int n);
int tongle(int n);
int tongnt(int n);
int tbc(int n);
int tbcsnt(int n);
int ktsnt(int n);
int main()
{
	int n;
	int l;
	printf("moi nhap n ");
	scanf("%d",&n);
	if(n<1||n>99)
	{
	do
	{
		printf("sai roi nhap lai di: ");
		scanf("%d",&n);
	}
	while(n<1||n>99);
	};
	printf("\n 1) in ra gia tri tu 1 den n");
	printf("\n 2) in ra gia tri chan tu 2 den n");
	printf("\n 3) in ra gia tri tu 5 den n chia het cho 5");
	printf("\n 4) in ra so nguyen to nho hon n");
	printf("\n 5) in ra tong gia tri tu 1 den %d",n);
	printf("\n 6) in ra tong gia tri le tu 1 den n");
	printf("\n 7) in ra tong so nguyen to nho hon n");
	printf("\n 8) trung binh cong cac so le tu 1 den n");
	printf("\n 9) trung binh cong cac so nguyen to nho hon n");
	printf("\n xin moi nhap cau ");
	scanf("%d",&l);
	if(l==1)
	inra(n);
	if(l==2)
	sochan(n);
	if(l==3)
	chiacho5(n);
	if(l==4)
	sont(n);
	if(l==5)
	tong(n);
	if(l==6)
	tongle(n);
	if(l==7)
	tongnt(n);
	if(l==8)
	tbc(n);
	if(l==9)
	tbcsnt(n);
}
	int inra(int n)
	{
	int i;		
	for(i=1;i<=n;i++)
	{
		printf("\t%d",i);
	}
	}
	int sochan(int n)
	{
		int i;
		for(i=2;i%2==0&&i<=n;i=i+2)
		{
			printf("\t%d",i);
		}
	}
	int chiacho5(int n)
	{
		int i;
		for(i=5;i%5==0&&i<=n;i=i+5)
		{
			printf("\t%d",i);
		}
	}
	int sont(int n) 
	{
		int i;
		for(i=1;i<=n;i++)
		{
		if(ktsnt(i)==1)
		printf("\t%d",i);
		}
			
	}
	int tong(int n)
	{
		printf("\n%d",(n*(n+1))/2);
	}
	int tongle(int n)
	{
		int i,tong=1;
		for(i=3;i%2==1&&i<=n;i=i+2)
		{
			tong=tong+i;
		}
		printf("%d",tong);
	}
	int tongnt(int n)
	{
		int i,tong=0;
		for(i=1;i<=n;i++)
		{
			if(ktsnt(i)==1)
			tong=tong+i;
		}
		printf("tong cac so nguyen to la %d",tong);
	
	}
	int tbc(int n)
	{
		int tb=1,i,dem=1;
		for(i=3;i%2==1&&i<=n;i=i+2)
		{
		tb=tb+i;
		dem=dem+1;
		}
		printf("\ntrung binh so le la %d",tb/dem);
	}
	int tbcsnt(int n)
	{
		int i;
		float dem=1,tong=0;
		for(i=1;i<=n;i++)
		{
			if(ktsnt(i)==1)
			tong=tong+i;
			dem++;
		}
		printf("trung binh cong cac so nguyen to la %.1f",tong/dem);
	}
	int ktsnt(int n)
	{
		int dem=0,i;
		if(n<2)
		return 0;
		for(i=1;i<=n;i++)
		{
			if(n%i==0)
			dem++;
		}
		if(dem==2)
		return 1;
		return 0;
	}

	

