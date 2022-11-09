#include<stdio.h>
void main()
{
int a[5],i;

printf("enter the numbers:");
for(i=0;i<5;i++)
{
scanf("%d",&a[i]);
}
printf("the array is: \n");
for(i=0;i<5;i++)
{
printf("%d",a[i]);
}
}
