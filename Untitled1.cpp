#include<stdio.h>
char mssv[10];
char fullname[30];
char lop[10];
int ns;
int diemso;
int main()
{
	fflush(stdin);
	printf("moi nhap mssv ");
	gets(mssv);
	fflush(stdin);
	printf("moi nhap hoten ");
	gets(fullname);
	fflush(stdin);
	printf("moi nhap lop ");
	gets(lop);
	printf("moi nhap nam sinh ");
	scanf("%d",&ns);
	printf("moi nhap diem so ");
	scanf("%d",&diemso);
	printf("\nmssv ban la %s",mssv);
	printf("\nten ban la %s",fullname);
	printf("\nlop ban la %s",lop);
	printf("\nnam sinh %d",ns);
	printf("\ndiem cua ban la %d",diemso);
	
}
