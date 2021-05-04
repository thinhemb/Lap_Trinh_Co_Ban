#include<stdio.h>
#include<math.h>
void NhapSoThuc(float *x,char letter)
{
	printf("nhap so thuc %c = ",letter);
	scanf("%f",x);
	
}
void NhapSoNguyen(int *n,char letter)
{
	printf("nhap so nguyen %c = ",letter);
	scanf("%d",n);
}
float F1(int n ,float x)
{
	float F=1;
	for(int i = 1 ; i < n+1;i++)
	{
		F+=pow(-1,i)*pow(x,i);
	}
	printf(" gia tri bieu thuc la F1=%.3f",F);
}
void F2(int n, float x)
{
	float T=1;
	for(int i = 1;i < n+1;i++)
	{
		T+=pow(-1,i)*pow(x,i)/i;
	}
	printf("\n gia tri bieu thuc la F2=%.3f",T);
}
void F3(int n,float x)
{
	float F=1,GT=1;
	for(int i = 1; i < n+1 ;i++)
	{
		GT*=i;
		F+=(pow(x,i)+2*i)/GT;
	}
	printf("\n gia tri bieu thuc la F2=%.3f",F);
}
int main()
{
	int n;
	float x;
	
	NhapSoNguyen(&n,'n');
	NhapSoThuc(&x, 'x');
	if(n>0)
	{
		 F1(n,x);
	     F2(n,x);
	     F3(n,x);
	}
	else
	{
		printf("vi ban nhap n<0 nen ko tinh duoc ket qua");
	}
}
