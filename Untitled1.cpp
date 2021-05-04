#include<stdio.h>
#include<math.h>
void HienThiMang(int a[],int n)
{
    for (int i = 0; i < n; i++)
    {
       printf(" %d ",a[i]); 
    }
    
}
void NhapMang(int a[],int n)
{
    for (int i = 0; i < n; i++)
    {
       printf("nhap phan tu thu %d la: ",i+1);scanf("%d",&a[i]); 
    }
    
}
int KTSNT(int n)
{
    if(n<2) return 0;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if(n%i==0) return 0;
    }
    return 1;
    
}
void KTMin(int a[],int n)
{
    int min=a[0];
    for (int i = 1; i < n; i++)
    {
        if(min>a[i]) min =a[i];
    }
    if(KTSNT(min)==1)printf("\n phan tu min trong mang la so NT ");
    else printf("\n phan tu min trong mang khong la so NT ");
}
int main()
{
    int n,a[50];
    printf("nhap so nguyen n=");scanf("%d",&n);
    printf("\nnhap mang co %d phan tu ",n);
    NhapMang(a,n);
    printf("\nmang vua nhap la:");
    HienThiMang(a,n);
    KTMin(a,n);
    return 0;
}
