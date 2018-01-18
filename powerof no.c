#include<stdio.h>
#include<math.h>
int main()
{
	int n,p,result;
	printf("enter 1st number");
	scanf("%d",&n);
	printf("number for power");
	scanf("%d",&p);
	result=pow(n,p);
	printf("%d",result);
}
