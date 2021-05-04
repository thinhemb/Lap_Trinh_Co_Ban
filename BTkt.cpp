#include<stdio.h>
#include<math.h>
void nhapsothuc(float *x)
{
	printf("nhap so thu x = ");scanf("%f",x);
}
float BT(float x,int n)
{ 
float q=2018;
  if(n>0 ||x!=0)
	{
		for(int i=1;i<n+1;i++)
	    {
	    	q+=(n+pow(x,i))/2/x;
	    }
	}
	else
	{
		q=2018;
	}
	return q;
	
}
int main()
{
	int n;
	float x,q=0;
	nhapsothuc(&x);
	printf("\nnhap so nguyen n= ");scanf("%d",&n);
	q=BT(x,n);
	printf("gi tri bieu thuc Q =%.3f",q);
}



