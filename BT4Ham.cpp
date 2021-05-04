#include<stdio.h>
#include<math.h>
float g(float *x)
{
	float G;
	if(*x>100)
	{
		G = *x * sin(*x+2)+5;
	}
	else
	{
		G= sqrt(2*abs(*x)+3);
	}
	return G;
}
float f(float x ,float y )
{
	float F,G;
	F = fabs(G-abs(17))*(G+log10( fabs(G))+25)+y;
	return F;
}
int main()
{
	float x,y,G,F,K;
	printf("nhap so thuc x =");scanf("%f",&x);
	printf("\nnhap so thuc y =");scanf("%f",&y);
	G=g(&x);
	F=f(x,y);
	K=g(&y);
	printf("\ngia tri bieu thuc g(x)=%.3f",G);
	printf("\ngia tri bieu thuc f(x,y)=%.3f",F);
	printf("\ngia tri bieu thuc g(y)=%.3f",K);
}
