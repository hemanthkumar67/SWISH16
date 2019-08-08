#include<stdio.h>
int main()
{
int x,p,sum=0;
scanf("%d %d",&x,&p);
sum=x;
while(x>0)
{
x=x*(100-p)/100;
sum=sum+x;
}
printf("%d",sum);
return 0;
}
