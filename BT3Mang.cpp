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
void HienThiMang(int a[],int n)
{
	printf("Mang can hien thi la ");
	for(int i=0; i<n;i++)
	{
		printf(" %d ",a[i]);
	}
}

int main()
{
	int n,str[50];
    NhapSoNguyenDuong(&n,'n');
    int count=0,So=3,k=1;
	   str[0]=2;
	while(count !=n)
	{
		int j=0;
		for(int i=2;i<So/2;i++)
		{
			int count1=0;
			if(So%i==0)
			{
			  count1++;	
			}
			j=count1;
			
		}
		if(j == 0)
		{
			str[k]=So;
		    
		    count++;
		    k++;
	    }
	    So+=2;
    }
    HienThiMang(str,count);
}










