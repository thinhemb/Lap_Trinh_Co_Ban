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
void NhapMang(int a[],int n)
{
	printf("nhap mang co %d phan tu ",n);
	for(int i = 0;i < n ;i++)
	{
		printf("a[%d]=",i);scanf("%d",&a[i]);
	}
}
void HienThiNguoc(int a[],int n)
{
	printf("day dc hien thi nguoc la");
	for(int i = n-1 ; i > -1; i--)
	{ 
	  printf(" %d ",a[i]);
	}
}
void HienThiMang(int a[],int n)
{
	for(int i=0; i<n;i++)
	{
		printf(" %d ",a[i]);
	}
}
void SapXep(int a[],int n)
{
	int temp;
	for(int i=0;i<n;i++)
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
	int n,str[50];
	NhapSoNguyenDuong(&n,'n');
	NhapMang(str,n);
	HienThiNguoc(str,n);
	SapXep(str,n);
	printf("\nday so sau khi sap xep la ");
	HienThiMang(str,n);

}

















