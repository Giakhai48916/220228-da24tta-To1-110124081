#include<stdio.h>
struct PHAN_SO
{
	int tu;
	int mau;
};
void nhap(PHAN_SO *a);
void xuat(PHAN_SO a);
int rutgon(PHAN_SO *a);
int ucln(int a, int b);
int tong(int a,int b,int c, int d);
int hieu(int a,int b,int c, int d);
int tich(int a,int b,int c, int d);
int thuong(int a,int b,int c, int d);

int main()
{
	PHAN_SO a,b;
	printf("\nmoi nhap tu cua phan so thu nhat: ");
	nhap(&a);
	printf("\nmoi nhap tu cua phan so thu hai: ");
	nhap(&b);
	xuat(a);
	xuat(b);
	rutgon(&a);
	rutgon(&b);
	tong(a.tu,a.mau,b.tu,b.mau);
	hieu(a.tu,a.mau,b.tu,b.mau);
	tich(a.tu,a.mau,b.tu,b.mau);
	thuong(a.tu,a.mau,b.tu,b.mau);

}
int thuong(int a,int b,int c, int d)
{
	int tu,mau;
	//thuong co dang a/b chia c/d se la a/b * d/c
	tu=a*d;
	mau=b*c;
	tu=tu/ucln(tu,mau);
	mau=mau/ucln(tu,mau);
	printf("\nthuong 2 phan so la %d/%d",tu,mau);
}
int tich(int a,int b,int c, int d)
{
	int tu,mau;
	tu=a*c;
	mau=b*d;
	printf("\ntich 2 phan so la %d/%d",tu,mau);
}
int hieu(int a,int b,int c, int d)
{
	//thuong co dang a/b-c/d
	int tu,mau;
	a=a*d;
	c=c*b;
	b=b*d;
	tu=a-c;
	mau=b;
	//cuoi cung la rut gon
	tu=tu/ucln(tu,mau);
	mau=mau/ucln(tu,mau);
	printf("\nhieu cua 2 phan so la: %d/%d",tu,mau);
}
int tong(int a,int b,int c,int d)
{
	//tong co dang a/b+c/d
	int tu,mau;
	a=a*d;
	c=c*b;
	b=b*d;
	tu=a+c;
	mau=b;
	//cuoi cung la rut gon
	tu=tu/ucln(tu,mau);
	mau=mau/ucln(tu,mau);
	printf("\ntong cua 2 phan so la: %d/%d",tu,mau);
}
int rutgon(PHAN_SO *a)
{
	if(ucln(a->tu,a->mau)==1)
	printf("\nphan so da rut gon");
	else
	printf("\nphan so sau rut gon la %d/%d",a->tu/ucln(a->tu,a->mau),a->mau/ucln(a->tu,a->mau));	
}
void nhap(PHAN_SO *a)
{	
	scanf("%d",&a->tu);
	printf("\nmoi nhap mau cua phan so: ");
	scanf("%d",&a->mau);
	if(a->mau==0||a->mau<0)
	{
		printf("\nnhap lai de ban oi: ");
		scanf("%d",&a->mau);
	}
}

void xuat(PHAN_SO a)
{
	printf("\nphan so vua nhap la: %d/%d ",a.tu,a.mau);
}
int ucln(int a, int b)
{
	int uoc,i;
	if(a==0||b==0)
	return 0;
	for(i=1;i<=b;i++)
	{
		if(a%i==0&&b%i==0)
		uoc=i;
	}
	return uoc;
}
