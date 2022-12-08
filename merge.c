#include<stdio.h>
void main()
{
int a1[50],a2[50],a3[100],m,n,i,j,k=0;
printf("enter the first array : \n");
scanf("%d",&m);
printf("\n enter elements of first array(sorted order):\n");
for(i=0;i<m;i++)
{
scanf("%d",&a1[i]);
}
printf("enter the second array :\n");
scanf("%d",&n);
printf("\n enter elements of 2nd array(sorted order):\n");
for(i=0;i<n;i++)
{
scanf("%d",&a2[i]);
}
i=0;
j=0;
while(i<m&&j<n)
{
if(a1[i]<a2[j])
{
a3[k]=a1[i];
i++;
}
else
{
a3[k]=a2[j];
j++;
}
k++;
}
if(i>=m)
{
while(j<n)
{
a3[k]=a2[j];
j++;
k++;
}
}
if(j>=n)
{
while(i<m)
{
a3[k]=a1[i];
i++;
k++;
}
}

printf("the merged array elements in \n");
for(i=0;i<m+n;i++)
{
printf("\n%d",a3[i]);
}
}
