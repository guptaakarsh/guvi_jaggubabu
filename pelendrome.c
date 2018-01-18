#include<stdio.h>
int main()
{
int a,b,m,c=0;
scanf("%d",&a);
m=a;
while(a!=0)
{
b=a%10;
c=c*10+b;
a=a/10;
}
if(c==m)
printf("Yes");
else
printf(" No");
} 
