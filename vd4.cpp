#include<stdio.h>
int main()
{
	int time;
	printf("\nmoi nhap gio hien tai cua ban ");
	scanf("%d",&time);
	if(time<0||time>24)
	do
	{printf("sai roi nhap lai di ");
	scanf("%d",&time);
	}
	while(time<0||time>24);
	if(time<18)
	printf("have a good day!");
	else
	printf("have a good night");
}
