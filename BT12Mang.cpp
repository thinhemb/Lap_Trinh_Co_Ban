#include<stdio.h>
#include<math.h>
void NhapSoNguyenDuong(int *n,char letter)
{
		printf("nhap so nguyen duong 15 <= %c <=100. %c= ",letter,letter);
		scanf("%d",n);
		while(*n > 100 || *n < 15)
		{
			printf("ban nhap gia tri %c khong thoa man de bai",letter);
			printf("\nnhap so nguyen duong 15 <= %c <=100. %c = ",letter,letter);
		    scanf("%d",n);
		}
}
void HienThi(float a[],int n)
{
	for(int i = 0 ; i < n ;i++)
	{
		printf(" %.3f ",a[i]);
	}
}
int main()
{
	int n,count=0,dem=0,j=0,i=1;
	float A[150],A1[150];
	NhapSoNguyenDuong(&n,'n');
	while(count < n)
	{
		A[count]= pow(i,-2) + 1;
		count++;
		i+=2;
	}
	printf("\nmang vua duoc tao ra la :");
	HienThi(A,n);
	while(dem < n)
	{ 
	   A1[dem]= pow(j,2) + 2 ;
	   j+=2;
	   dem++;
	}
	printf("\nmang vua duoc tao ra la :");
	HienThi(A1,n);
}
