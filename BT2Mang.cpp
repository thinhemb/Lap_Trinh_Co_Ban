#include<stdio.h>
void NhapSoNguyenDuong(int *n,char letter)
{
	
		printf("nhap so nguyen duong 1 <= %c <=30 ",letter);
		printf("\n n=");scanf("%d",n);
		while(*n > 30 || *n < 1)
		{
			printf("ban nhap gia tri %c khong thoa man de bai",letter);
			printf("\nnhap so nguyen duong 1 <= %c <=30 ",letter);
		    printf("\n %c=",letter);scanf("%d",n);
		}
	
}
void NhapMang(int a[],int n)
{
	printf("nhap mang co %d phan tu ",n);
	for(int i = 0;i < n ;i++)
	{
		printf("a[%d]=",i);scanf("%d",&a[i]);6
		
	}
}
void HienThiMang(int a[],int n)
{
	printf("Mang can hien thi la ");
	for(int i=0; i<n;i++)
	{
		printf(" %d ",a[i]);
	}
}
void Max(int a[], int n)
{
	int max=a[0],count=0;
	for(int i = 0 ; i < n;i++)
	{
		if(max<a[i])
		{
			max = a[i];
			count=i;
		}
	}
	printf("\nso lon nhat trong mang la a[%d]= %d ",count ,max);
}
int main()
{
	int n,TongChan=0,count=0;
	float TBCChan=0;
	int str[50];
	NhapSoNguyenDuong(&n,'n');
	NhapMang(str,n);
	HienThiMang(str,n);
	Max(str,n);
	for(int i=0; i < n ;i++)
	{
		if(str[i] % 2 ==0)
		{
			TongChan+=str[i];
			count++;
			
		}
	}
	TBCChan=TongChan/float(count);
	printf("\ntrong mang co %d so chan",count);
	printf("\nTong Chan = %d",TongChan);
	printf("\nTBC Chan = %.3f ",TBCChan);
}









