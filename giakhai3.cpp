#include<stdio.h>
int main()
{
	const float PI = 3.1415;
	int a=50;
	int b=23;
	int c=30;
	float d=12.56;
	float s;
	float conlai;
	s=(d*d)/(4*PI);
	conlai=(((a+b)/2)*c)-s;
	printf("\ndien tich con lai la: %f",conlai);
}
