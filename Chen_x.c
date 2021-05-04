#include<stdio.h>
int nhap()
{
	int n;
	do{
		printf("nhap so phan tu mang: ");
		scanf("%d",&n);
	}
	while(n<=0||n>30);
	return n;
}
void NhapMang(int a[], int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("a[%d]= ",i);
		scanf("%d", &a[i]);
	}
}
void XuatMang(int a[], int n)
{
	int i;
	printf("\nMang: ");
	for(i=0;i<n;i++)
	{
		printf("\t%d", a[i]);
	}
}
void Chen(int a[], int &n , int VT, int sochen)
{
	int i;
	for(i=n;i>=VT;i--)
	{
		a[i]=a[i-1];
	}
	a[VT]=sochen;
	n++;
}
void ChenX(int a[], int &n)
{
	int x,VT;
	printf("\nnhap so x: ");
	scanf("%d",&x);	
	int i,dem;
	for(i=0;i<n;i++)
	{
		if(a[i]>x)
		{
			dem++;
			VT=i;
			break;
		}
	}
	if(dem==0)
	{
		VT=n;
		Chen(a,n,VT,x);
		for(i=0;i<n;i++)
		{
			printf("\t%d", a[i]);
		}
	}
	else
	{
		Chen(a,n,VT,x);
		for(i=0;i<n;i++)
		{
			printf("\t%d", a[i]);	
		}
	}
}
int main()
{
	int n,k;
	int a[100];
	n=nhap();
	NhapMang(a,n);
	XuatMang(a,n);
	ChenX(a,n);
	return 0;
}
	

