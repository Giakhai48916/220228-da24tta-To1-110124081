#include<string.h>
#include<stdio.h>
#include<stdlib.h>
struct sinh_vien
{
	char mssv[10],hoten[30],gioitinh[4],diachi[50];	
};
struct ngay_thang
{
	int ngay,thang,nam;
};
int somon(int a[],int n);
struct monhoc
{
	char ma[15];
	int diem;
};
void nhapdanhsach(sinh_vien *a,int n);
void nhapday(ngay_thang *a,int n);
void nhapmon(monhoc *a,int l);
void xuatdanhsach(sinh_vien *a,int n);
void xuatday(ngay_thang *a,int n);
void xuatmon(monhoc *a,int l);
int kt(sinh_vien *list, int n, char *mssv );
int ktt8(ngay_thang *b,int n,sinh_vien *list);
int ktgioitinh(sinh_vien *list,int n, char *gioitinh);
int ktdiachi(sinh_vien *list,int n, char *diachi);

int main()
{
	int n=0,l,vt;
	char t[10],k[10];	
	sinh_vien *list;
	ngay_thang *b;
	monhoc *c;
	
	printf("\nmoi nhap so sinh vien can ghi: ");
	scanf("%d",&n);
	
	list = (sinh_vien*)malloc(n*sizeof(sinh_vien));	
	b = (ngay_thang*)malloc(n*sizeof(ngay_thang));
	c = (monhoc*)malloc(n*sizeof(monhoc));
	nhapdanhsach(list,n);
	
	printf("\nmoi nhap so mon thi dai hoc ");
	scanf("%d",&l);
	if(l<0||l>20)
	{
		do
		{
			printf("\nsai roi ban e, nhap lai de: ");
			scanf("%d",&l);
		}while(l<0||l>20);
	};
	nhapmon(c,l);
	nhapday(b,n);
	
	
	printf("\n\n\n\n\n\n");
	xuatdanhsach(list,n);
	xuatday(b,n);
	xuatmon(c,l);


	printf("\nmoi nhap mssv can kiem tra: ");
	fflush(stdin);
	scanf("%s", t);
	
	if(kt(list, n, t)==0)
		printf("\nmssv khong ton tai");
	else
		printf("\nmssv co ton tai");
			
	ktt8(b,n,list);
	
	printf("\nmoi nhap gioi tinh kiem tra ");
	fflush(stdin);
	scanf("%s",k);
	ktgioitinh(list,n,k);
	
	printf("\nmoi nhap dia chi kiem tra: ");
	fflush(stdin);
	scanf("%s",k);
	ktdiachi(list,n,k);
	
	
}
int ktdiachi(sinh_vien *list,int n, char *diachi)
{
	for(int i=0;i<n;i++)
	{
		if(strcmp((list+i)->diachi,diachi)==0)
		{
			printf("\nma so sinh vien %s\nten la %s\ngioi tinh %s\ndia chi hay song %s",(list+i)->mssv,(list+i)->hoten,(list+i)->gioitinh,(list+i)->diachi);
		}

		return 0;

	}
}
int ktgioitinh(sinh_vien *list,int n, char *gioitinh)
{
	for(int i=0;i<n;i++)
	{
		if(strcmp((list+i)->gioitinh,gioitinh)==0)
		{
			printf("\nma so sinh vien %s\nten la %s\ngioi tinh %s\ndia chi hay song %s",(list+i)->mssv,(list+i)->hoten,(list+i)->gioitinh,(list+i)->diachi);
		}

		return 0;

	}
}
int ktt8(ngay_thang *b,int n,sinh_vien *list)
{
	for(int i=0;i<n;i++)
	{
		if((b+i)->thang==8)
		{
			printf("\n\nma so sinh vien %s\nten la %s\ngioi tinh %s\ndia chi hay song %s",(list+i)->mssv,(list+i)->hoten,(list+i)->gioitinh,(list+i)->diachi);
		}
	}
}
int kt(sinh_vien *list,int n,char *mssv )
{
	for(int i=0;i<n;i++)
	{
		if(strcmp((list+i)->mssv,mssv)==0)
			return 1;
	}
	return 0;
}
void xuatmon(monhoc *a,int l)
{
	for(int i=0;i<l;i++)
	{
		printf("\nma mon hoc %s\tdiem so %d",(a+i)->ma,(a+i)->diem);
	}
}
void xuatday(ngay_thang *a,int n)
{
	for(int i=0;i<n;i++){
	printf("\nsinh ngay %d/%d/%d",(a+i)->ngay,(a+i)->thang,(a+i)->nam);}
}
void xuatdanhsach(sinh_vien *a,int n)
{
	for(int i=0;i<n;i++){
		printf("\nma so sinh vien %s\nten la %s\ngioi tinh %s\ndia chi hay song %s",(a+i)->mssv,(a+i)->hoten,(a+i)->gioitinh,(a+i)->diachi);
}}
void nhapdanhsach(sinh_vien *a,int n)
{
	for(int i=0;i<n;i++)
	{
		printf("\nmoi nhap ma so sinh vien: ");
		fflush(stdin);
		scanf("%s",(a+i)->mssv);
		
		printf("\nmoi nhap ho ten: ");
		fflush(stdin);
		gets((a+i)->hoten);
		
		printf("\nban la nam hay nu: ");
		fflush(stdin);
		scanf("%s",(a+i)->gioitinh);
		
		printf("\nmoi nhap cai dia chi: ");
		fflush(stdin);
		scanf("%s",(a+i)->diachi);
	}
}
void nhapmon(monhoc *c,int l)
{
	int i;
	for(i=0;i<l;i++)
	{
		printf("\nmoi nhap ma mon hoc thu %d: ",i+1);
		fflush(stdin);
		scanf("%s",c->ma);
		printf("\nmoi nhap diem so: ");
		scanf("%d",&c->diem);
		if(c->diem<0||c->diem>10)
		{
			do{
			printf("\ntroi oi nhap cai gi vay, nhap lai coi: ");
			scanf("%d",&c->diem);
			}while(c->diem<0||c->diem>10);
		}
	}
}
void nhapday(ngay_thang *a,int n)
{
	for(int i=0;i<n;i++)
	{
	printf("\nban sinh nam bao nhieu ");
	scanf("%d",&a->nam);
	printf("\nnhap thang sinh ");
	scanf("%d",&a->thang);
	if(a->thang<0||a->thang>12)
	{
		do{
			printf("\nnhap thang sinh ");
			scanf("%d",&a->thang);
		}while(a->thang<0||a->thang>12);
	}
	printf("\nnhap ngay sinh ");
	scanf("%d",&a->ngay);
	if(a->thang==1||a->thang==3||a->thang==7||a->thang==8||a->thang==10||a->thang==12)
	{
	if(a->ngay<0||a->ngay>31)
	{
		do{
			printf("\n xin moi nhap lai: ");
			scanf("%d",&a->ngay);
		}while(a->ngay<0||a->ngay>31);
	}
	}
	if(a->thang==4||a->thang==6||a->thang==9||a->thang==11)
	{
		if(a->ngay<0||a->ngay>30)
		{
			do{
				printf("\n xin moi nhap lai: ");
				scanf("%d",&a->ngay);
			}while(a->ngay<0||a->ngay>30);
		}
	}
	if(a->thang==2)
	{
		if(a->ngay<0||a->ngay>28)
		{
			do{
				printf("\n xin moi nhap lai: ");
				scanf("%d",&a->ngay);
			}while(a->ngay<0||a->ngay>28);
		}
	}
	}
}


