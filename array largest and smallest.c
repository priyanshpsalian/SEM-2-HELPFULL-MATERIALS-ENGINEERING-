#include<stdio.h>
int main()
{
int a[50],size,i,big,small;
printf("\nenter the size of array");
scanf("%d",&size);
printf("\n\nenter %d elements of array",size);
for(i=0;i<size;i++)
scanf("%d",&a[i]);
big=a[0];
for(i=1;i<size;i++)
{
if(big<a[i])
{
big=a[i];
}
}
printf("\nlargest number is %d",big);
small=a[0];
for(i=1;i<size;i++)
{
if(small>a[i])
{
small=a[i];
}
}
printf("\nsmallest number is %d",small);
return 0;
}
