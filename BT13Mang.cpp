#include<stdio.h>
void NhapSoNguyenDuong(int *n,char letter)
{
		printf("nhap so nguyen duong 1 <= %c <=50. %c= ",letter,letter);
		scanf("%d",n);
		while(*n > 50 || *n < 1)
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
void HienThi(float a[],int n)
{
	for(int i = 0 ; i < n ;i++)
	{
		printf(" %.1f ",a[i]);
	}
}

int main()
{
	int n;
	float str[50];
	NhapSoNguyenDuong(&n,'n');
	NhapMang(str,n);
	printf("mang vua nhap la:");
	HienThi(str,n);
	float min=str[0];
	int count=0;
	for(int i=0;i < n;i++)
	{ 
		if(min>str[i])
		{
			min=str[i];
			count=i+1;
		}
		
	}
	printf("\nso nho nhat trong mang la: %.1f ",min);
	printf("\nvi tri cua so nho nhat trong mang la: %d",count);
	float max=str[0];
	int count1=0;
	for(int i=0;i < n;i++)
	{ 
		if(max<str[i])
		{
			max=str[i];
			count1=i+1;
		}
		
	}
	printf("\nso nho nhat trong mang la: %.1f ",max);
	printf("\nvi tri cua so lon nhat trong mang la: %d",count1);
	float temp=0;
	temp=str[count-1];
	str[count-1]=str[count1-1];
	str[count1-1]=temp;
	printf("\nmang sau khi doi cho la");
	HienThi(str,n);
}








