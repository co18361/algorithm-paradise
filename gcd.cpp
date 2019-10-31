#include<stdio.h>
int main()
{
int a,b,c,d,i=0;
printf("enter your numbers");
scanf("%d",&a,&b);
for(i=1;i<a&&i<b;i++)
{
c=a/i;
d=b/i;
if(c==d)
{
printf("greatest common divisor is %d",c)
}
}
return 0;
}
