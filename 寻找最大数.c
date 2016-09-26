#include<stdio.h>
#include<string.h>
int main()
{
 char a[102],b[102];
 int i,j,p,k,N,n,m,max;
 scanf("%d",&N);
 while(N--)
 {
	scanf("%s %d",a,&m);
	n=strlen(a);
	for(i=p=k=0;i<n-m;i++,k++)
	{
		max=-1;
		for(j=p;j<=m+k;j++)
		{
			if(a[j]>max)
			{
				 max=a[j];
				 p=j+1;
			}
		}
		b[k]=max;
	}
	b[k]='\0';
	printf("%s\n",b);
 }
 return 0;
}
