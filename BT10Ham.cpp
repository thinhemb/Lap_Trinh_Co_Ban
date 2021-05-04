#include<stdio.h>
#include<math.h>
int NhapSoTuNhien(int *x,char letter)
{
	do
	{
	printf("nhap so tu nhien %c = ");scanf("%d",x);
	}
	while(*x<0);
}
float TimSoFibinaci(int n)
{
    int x=1,y=1,temp=0;
	for(int i = 2;i < n+1;i++)
	{
		temp=y;
	    y=x+y;
	    x=temp;
	}
	return x;
}
void HienThiDaySoFi(int n)
{
	printf("day so fibilaci la: 1 ");
	int x=1,y=1,temp=0;
	for(int i = 2;i < n+1;i++)
	{
		temp=y;
	    y=x+y;
	    x=temp;
	    printf(" %d",x);
	}
}
int main()
{
	int n,kq=0;
	NhapSoTuNhien(&n,'n');
	if(n>0)
	{
	
		HienThiDaySoFi(n);
		if(n==1||n==2)
		{
			printf("\nf(%d) = 1",n);
		}
		else
		{
			kq=TimSoFibinaci(n);
			printf("\nf(%d)=%d",n,kq);
   		}
	}
	else
	{
		printf("day so khong co phan tu nao");
	}
}
