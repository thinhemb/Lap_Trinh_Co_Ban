#include<stdio.h>
void NhapSoNguyenDuong(int *n,char letter)
{
	
		printf("nhap so nguyen duong 1 <= %c= ",letter);
		scanf("%d",n);
		while( *n < 1)
		{
			printf("ban nhap gia tri %c khong thoa man de bai",letter);
			printf("\nnhap so nguyen duong 1 <= %c =  ",letter);
		    scanf("%d",n);
		}
	
}
void NhapMang(int a[],int n)
{
	printf("nhap mang la ");
	for(int i = 0;i < n ;i++)
	{
		printf(" a[%d] = ",i);scanf("%d",&a[i]);
	}
}
void HienThiMangNguoc(int a[],int n)
{
	printf("mang can hien thi la ");
	for(int i=n-1;i>-1;i--)
	{
		printf(" %d ",a[i]);
	}
}
int main()
{
	float x;
	int n,str[50],count[50],dem=0,j=0,k;
	NhapSoNguyenDuong(&n,'n');
	printf("nhap so thuc x=");scanf("%f",&x);
	NhapMang(str,n);
	HienThiMangNguoc(str,n);
	for(int i = 0;i < n;i++)
	{
		if(x==str[i])
		{
			count[j]=i+1;
			dem++;
			j++;
		}	
	}
	if(dem!=0)
	{
		printf("\nso %.1f co xuat hien trong mang  ",x);HienThiMangNguoc(count,dem);
		printf("\nso lan xuat hien trong mang la: %d ",dem);
	}
	else
	{
		printf("\nso %.1f khong xuat hien trong mang ",x);
	}
   do
   {
   	printf("nhap vi tri can xoa trong mang 1 <= k <= %d. k=",n);scanf("%d",&k);
   }
   while(k < 1 || k > n);
   	for(int i = k ; i < n ; i++)
   	{   
   	     str[i-1]=str[i];
	}
	n=n-1;
	printf("mang sau khi xoa la");
	for(int i =0;i<n;i++)
	printf(" %d",str[i]);
}







