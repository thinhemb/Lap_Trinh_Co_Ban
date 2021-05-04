#include<stdio.h>
#include<math.h>
int main()
{
    int n;
	scanf("%d",&n);
	int a,b;
	int array[n+1];
	for(int i = 0;i<n;i++)
	{
		scanf("%d%d",&a,&b);
	    if(a==b)
	    {
	        array[i]=0;	
	    }
	    else 
	    { 
			a= abs(a-b);
	      	array[i]= a/5+ (a%5)/2 +((a%5)%2);
	    }
    }
    for ( int i=0;i<n;i++)
    {
    	printf("%d \n",array[i]);
	}
}
