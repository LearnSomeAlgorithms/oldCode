#include "stdio.h"
void main()
{
int sum,k,j,m;
scanf("%d",&m);
for(k=2;k<=m;k++)
{
sum=0;
for(j=1;j<k;j++)
if(k%j==0)
sum=sum+j;
if(sum==k)
if (k==6){
	printf("%d",k);
}
else
printf("\n%d",k);
}
}
