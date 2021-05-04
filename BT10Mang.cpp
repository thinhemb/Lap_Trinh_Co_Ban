#include<stdio.h>
void NhapSoNguyenDuong(int *n,char letter)
{
		printf("nhap so nguyen duong 1 <= %c <=50. %c= ",letter,letter);
		scanf("%d",n);
		while(*n > 30 || *n < 1)
		{
			printf("ban nhap gia tri %c khong thoa man de bai",letter);
			printf("\nnhap so nguyen duong 1 <= %c <=50. %c= ",letter,letter);
		    scanf("%d",n);
		}
}
void NhapMang(float a[],int n)
{
	for(int i = 0;i < n ;i++)
	{
		printf("\nnhap phan tu thu %d : ",i+1);
		scanf("%f",&a[i]);
	}
}
void HienThiNguoc(float a[],int n)
{
	for(int i =n-1;i >-1 ;i--)
	{
		printf(" %.1f ",a[i]);
	}
}
void HienThi(float a[],int n)
{
	for(int i = 0 ; i < n ;i++)
	{
		printf(" %.1f ",a[i]);
	}
}
void SapXep(float a[] ,int n)
{
	int temp;
	for(int i = 0 ; i < n ;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
}
int main()
{
	int n,count=0,dem=0;
	float str[50],duong[50],am[50];
	NhapSoNguyenDuong(&n,'n');
	printf("nhap mang co %d phan tu ",n);
	NhapMang(str,n);
	printf("mang vua nhap la :");
	HienThi(str,n);
	printf("\nmang dc in nguoc lai la :");
	HienThiNguoc(str,n);
	for(int i = 0 ; i < n ; i++)
	{
		if(str[i]<0)
		{
			am[dem]=str[i];
			dem++;
		}
		else
		{
			duong[count]=str[i];
			count++;
		}
	}
	SapXep(am,dem);
	printf("\nphan tu am lon nhat trong mang la %.1f ",am[dem-1]);
	SapXep(duong,count);
	printf("\n phan tu duong nho nhat  trong mang la %.1f ",duong[0]);
}






