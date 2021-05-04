#include<stdio.h>
#include<math.h>
void NhapDoDaiCanhTamGiac(float *a,float *b,float *c)
{
	do
	{
		printf("nhap chieu dai cac canh cua tam giac  ");
		printf("a=");scanf("%f",a);
		printf("\nb=");scanf("%f",b);
		printf("\nc=");scanf("%f",c);
	}
	while(*a < 0 || *b < 0 || *c < 0 || *a + *b < *c || *c + *b < *a || *a + *c < *b);
}
float DT(float *a, float *b, float *c)
{
	float p,S;
	p= (*a+*b+*c)/2;
	S=sqrt(p*(p- *a)*(p- *b)*(p- *c));
	return S;
}
void Hienthi(float x,char letter)
{
	printf("%c =%.3f",letter,x);
}
int main()
{
	float a,b,c,S=1;
	NhapDoDaiCanhTamGiac(&a,&b,&c);
	S=DT(&a,&b,&c);
	Hienthi(S,'S');
}
