#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b;
	printf("nhap a,b:");
	scanf("%d%d",&a,&b);
	if(a==0)
 		{
		 	if(b==0)
		 		printf("phuong trinh vsn");
		 	else
		 		printf("phuong trinh vn");
		 }
	else
		printf("x=%.2f",-float(b)/a); 
}
