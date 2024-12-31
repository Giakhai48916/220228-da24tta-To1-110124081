#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main()
{
	int may,player,dung;
	char nguoi[50];
	char a[4]= "keo";
	char b[4]= "bua";
	char c[4]= "bao";
	
	srand(time(NULL));
	do
	{
		may = rand() % 4;
    }while(may==0);
    
    do
	{
		printf("\nmoi nhap: keo, bua, bao\n");
		fflush(stdin);
		gets(nguoi);
		
		if(strcmp(a,nguoi)==0)
		{
			player=1;
			dung=0;
		}
		else
		{
			if(strcmp(b,nguoi)==0)
			{
				player=2;
				dung=0;
			}
			else
			{
				if(strcmp(c,nguoi)==0)
				{
					player=3;
					dung=0;
				}
				else
					dung=1;
			}
		}		
	}while(dung==1);

	if(may==1)
	{
		printf("\nmay tinh ra keo");
		if(player==1)
		printf("\nket qua hoa nhau");
		if(player==2)
		printf("\nket qua nguoi choi chien thang");
		if(player==3)
		printf("\nket qua nguoi choi da thua cuoc");
	}
	if(may==2)
	{
		printf("\nmay tinh ra bua");
		if(player==1)
		printf("\nban da thua cuoc, chuc ban may man lan sau");
		if(player==2)
		printf("\nket qua hoa nha");
		if(player==3)
		printf("\nban thang roi, game de qua de toi tang do kho len nhe");
	}
	if(may==3)
	{
		printf("\nmay tinh ra bao");
		if(player==1)
		printf("\nban thang roi,hen the");
		if(player==2)
		printf("\nden thoi ban oi, do la blue");
		if(player==3)
		printf("\nhen qua ket qua hoa roi");
	}
	
	return 0;
}
