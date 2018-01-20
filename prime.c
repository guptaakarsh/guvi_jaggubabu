#include<stdio.h>
int main()
{


int sum=0,i,n;
scanf("%d",&n);
for(i=2;i<n;i++)
{
	if(n%i==0)
	
	{
		sum=1;
		break;
	}
	
}
 	if(sum==0)
 	{
 		printf(" prime");
 		
	}
	else
	{
		printf("not prime");
	}
}
