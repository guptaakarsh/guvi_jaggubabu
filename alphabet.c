#include<stdio.h>
main()
{
    char a;
    scanf("%c",&a);
    if(a>='a'&&a<='z'||a>='A'&&a<='Z')
    printf("it is alphabet");
    else
    printf("not alphabet");
}
