#include<stdio.h>
#include<stdlib.h>
void nhapmang(int *a,int n,int m);
void xuatmang(int *a,int n,int m);
int main()
{
	int *a,n,m;
	FILE *b;
	char dan[50];
	int *c;
	
	printf("\nmoi nhap so hang can ghi vao file: ");
	scanf("%d",&n);
	if(n<1)
	{
		do
		{
		printf("\ncai gi vay troi, nhap lai so hang di: ");
		scanf("%d",&n);
		}while(n<1);
	};
	printf("\nmoi nhap so cot can ghi file: ");
	scanf("%d",&m);
	if(m<1)
	{
		do
		{
		printf("\nban gion mat voi tui ha? ,nhap lai so cot di troi: ");
		scanf("%d",&m);
		}while(m<1);
	};
	a=(int*)calloc(n*m,sizeof(int));
	nhapmang(a,n,m);

	
	
	printf("\nmoi nhap duong dan: ");
	fflush(stdin);
	gets(dan);
	
	//G:\baikhai.txt
	b=fopen(dan,"w+t");
	if(b==NULL)
		printf("\nloi duong dan ");
	else
	{
		fprintf (b,"%d\n",n);
		fprintf (b,"%d\n",m);
		for (int i=0; i<n; i++)
		{
			for (int j=0; j<m; j++)
				fprintf (b,"%d ",*(a+i*m+j));
			fprintf (b,"\n");
		}
		fseek(b,0,0);
		fscanf(b,"%d",&n);
		fscanf(b,"%d",&m);
		c=(int*) malloc(n*m*sizeof(int));
		while (!feof(b))
		{
			for (int i=0; i<n*m; i++)
				fscanf(b,"%d",c+i);
		}
		printf ("\nDanh sach ket qua doc file:\n");
		xuatmang(c,n,m);
		fclose(b);
	}
	return 0;
}
void xuatmang(int *a,int n,int m)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			printf("%3d",*(a+i*m+j));
		}
		printf("\n");
	}
}
void nhapmang(int *a,int n,int m)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			printf("\nmoi nhap gia tri o thu A[%d][%d]: ",i,j);
			scanf("%d",a+i*m+j);
		}	
	}
}
