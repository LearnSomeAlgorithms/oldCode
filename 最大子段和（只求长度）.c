#include<stdio.h>

int main(){
	int n,i,arr[100]={0};
	int tem=0,res=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n&&arr[i]<=0;i++);
	for(i;i<n;i++){
		tem+=arr[i];
		if(tem>res)
			res=tem;
		if(tem<0)
			tem=0;
	}
	printf("%d\n",res);
}
