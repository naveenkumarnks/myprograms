#include<stdio.h>
int main()
{
int a,b;
printf("enter two numbers:");
scanf("%d%d",&a,&b);
if(a>b)
{
printf("%d is maximum.",a);
}
else
{
printf("%d is maximum.",b);
}
return 0;
}