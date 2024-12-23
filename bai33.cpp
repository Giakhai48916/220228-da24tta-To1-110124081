#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct PHAN_SO
{
	int tu;
	int mau;
	float sotp;
}PS;
void nhap(PHAN_SO *a);
void nhapNPS(PHAN_SO *a,int n);
void xuat(PHAN_SO *a);
void xuatNPS(PHAN_SO *a,int n);
int rutgon(PHAN_SO *a,int n);
int ucln(PHAN_SO *a);
int sonho(PHAN_SO *a,int n);
void sapxep(PHAN_SO *a,int n);

int main()
{
	
	PHAN_SO *a;
	FILE *b;
	char dan[50];
	int n;
	
	printf("\nBan can nhap bao nhieu phan so? Moi nhap so luong: ");
	scanf("%d",&n);
	
	a= (PHAN_SO*)malloc(sizeof(PHAN_SO)*n);//Chua danh sach phan so nhap vao tu ban phim
	PS* list = (PHAN_SO*)malloc(sizeof(PHAN_SO)*n);//Chua ket qua doc len
	
	//NHap cac phan so
	nhapNPS(a,n);
	xuatNPS(a,n);
	rutgon(a,n);
	sonho(a,n);
	sapxep(a,n);
	//D:\giakhai\data
	printf("\nmoi nhap duong dan: ");
	fflush(stdin);
	gets(dan);
	
	b=fopen(dan,"w+b");//mo de doc va ghi
	
	if(b==NULL)
		printf("\nloi duong dan ");
	else
	{
		fwrite(a,sizeof(PS),n,b);//Ghi xuong fil danh sach a
			
		fseek(b,0,0);//Dich chuyen con tro file ve dau file
	
		fread(list,sizeof(PS),n,b);
		
		fclose(b);
	}
	printf("\nDanh sach ket qua doc file:\n");
	xuatNPS(list,n);
	

	return 0;
}
void sapxep(PHAN_SO *a,int n)
{
	int i,j;
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n-1;j++)
		{
			if( (a+i)->sotp > ((a+j)->sotp) )
			{
				PHAN_SO t=*(a+i);
				*(a+i)=*(a+j);
				*(a+j)=t;
			}
		}
	}
	xuatNPS(a,n);
}
int sonho(PHAN_SO *a,int n)
{
	int i,j,min=0,dem=0,k=0;
	for(i=0;i<n-1;i++)
	{
		j=i+1;
		if((a+i)->sotp>(a+j)->sotp)
		{
			k=j;
		}
	
	}
	printf("\nphan so nho nhat la: %d/%d ",(a+k)->tu,(a+k)->mau);
	for(i=0;i<n;i++)
	{
		if( (a+k)->tu/(a+k)->mau == (a+i)->sotp )
		{
		dem++;
		}
	}
	printf("\nco %d so nho nhat: ",dem);
}
int ucln(PHAN_SO *a)
{
	int uoc=1,i;
	if(a->tu==0||a->mau==0)
	return 0;
	for(i=1;i<=a->mau;i++)
	{
		if(a->tu%i==0&&a->mau%i==0)
		uoc=i;
	}
	return uoc;
}
int rutgon(PHAN_SO *a,int n)
{
	for(int i=0;i<n;i++)
	{
		if(ucln(a+i)==1)
		printf("\nphan so da rut gon");
		else
		printf("\nphan so rut gon thu %d la %d/%d",i+1,(a+i)->tu/ucln(a+i),(a+i)->mau/ucln(a+i));
	}

}
void xuat(PHAN_SO *a)
{
	printf("\n%d/%d ",a->tu,a->mau);
}
void xuatNPS(PHAN_SO *a,int n)
{
	for(int i=0;i<n;i++)
	{
		xuat(a+i);
		printf("\n");
	}
}
void nhap(PHAN_SO *a)
{	
	printf("\nmoi nhap tu so: ");
	scanf("%d",&a->tu);
	printf("\nmoi nhap mau so: ");
	scanf("%d",&a->mau);
	
	if(a->mau==0||a->mau<0)
	{
		printf("\nnhap lai de ban oi: ");
		scanf("%d",&a->mau);
	}
	a->sotp=a->tu/a->mau;
}
void nhapNPS(PHAN_SO *a,int n)
{
	for(int i=0;i<n;i++)
	{
		printf("\nmoi nhap phan so thu %d: ",i+1);
		nhap(a+i);
	}
}
