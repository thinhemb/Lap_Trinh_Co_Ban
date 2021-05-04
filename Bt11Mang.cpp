#include<stdio.h>
#include<math.h>
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
	float str[50],T1=0,T2=0;
	NhapSoNguyenDuong(&n,'n');
	printf("nhap mang co %d phan tu ",n);
	NhapMang(str,n);
	printf("man vua nhap la :");
	HienThi(str,n);
	for(int i=0 ;i<n;i++)
	{ 
		T1=T1+pow(-1,i)*str[i];
	}
	printf("\nT1 = %.3f ",T1);
	for(int i=0 ;i<n;i++)
    {
    	if(str[i]==0)
    	{
    		return 0;
		}
	  T2=T2+pow(-1,i)/str[i];
	   
    }

	printf("\nT2 = %.3f ",T2);
	
}
