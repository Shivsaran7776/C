
#include<stdio.h>
void main()
{
int i,n,ele,a[10],m,x;
printf("enter no of elements of array:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("enter element to search in array:");
scanf("%d",&m);
for(i=0;i<n;i++)
{
if(a[i]==m)
{
x=1;
}
}


if(x==1)

{

printf("found in %d position",i);


}
else
{
printf("not found");
}


}
