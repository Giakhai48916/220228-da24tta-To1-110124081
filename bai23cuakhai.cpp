#include<stdio.h>
struct CONNGUOI{
	char hoten[30], diachi[100],gioitinh[4];
	int tuoi;
	float thunhap;
};

void nhap(CONNGUOI *a,int n);//Truyen tham bien
void xuat(CONNGUOI a,int n);//Truyen tham tri

int main()
{
	int n;
	printf("\n moi nhap so con nguoi ma ban muon nhap thong tin: ");
	scanf("%d",&n);
	CONNGUOI a, b;
	//Nhap thong tin
	nhap(&a,n);//Truyen dia chi tham so thuc
	
	//Xuat thong tin
	printf("\nThong tin vua nhap la:");
	xuat(a,n);
	
	return 0;
}
void xuat(CONNGUOI a,int n)
{
	for(int i=0;i<n;i++)
	{
	printf("\nnguoi thu %d\n",i+1);
	printf("%s\t%d\tgioi tinh %s\nsong o %s\nco thu nhap %.2f trieu/thang", a.hoten,a.tuoi,a.gioitinh,a.diachi,a.thunhap);
	}
}
void nhap(CONNGUOI *a,int n)
{
	for(int i=0;i<n;i++)
	{
	printf("\nNhap vao ho ten nguoi thu %d: ",i+1);
	fflush(stdin);
	gets(a->hoten);
		
	printf("\nNhap vao tuoi: ");
	scanf("%d", &a->tuoi);
	
	printf("\nmoi nhap gioi tinh: ");
	fflush(stdin);
	gets(a->gioitinh);
	
	printf("\nmoi nhap dia chi: ");
	fflush(stdin);
	gets(a->diachi);
	
	printf("\nmoi nhap thu nhap: ");
	scanf("%f",&a->thunhap);
	}
}
