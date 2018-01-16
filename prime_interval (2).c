#include<stdio.h>
void main()
{
	int n,k,a,c,i;
	printf("Enter no.");
	scanf("%d%d",&n,&k);
	for(a=n+1;a<=k;a++)
	{
	c=0;
	for(i=2;i<a;i++)
	{
	if(a%i==0){
		c=1	;
		break;
	}
	}
	if(c==0)
	{printf("%d",a);
	}
}
}
