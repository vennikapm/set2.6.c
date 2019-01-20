#include<stdio.h>
#include<conio.h>
void main()
{
int n,a,b,i,j,flag=0;
scanf("%d",&n);
while(n>0)
{
scanf("%d%d",&a,&b);
for(i=a;i<b;i++)
{
for(j=2;j<i/2;j++)
{
if(i%j==0)
{
flag=1;
}
}
if(flag==0)
{
printf("%d",i);
}
n--;
}
getch();
}
