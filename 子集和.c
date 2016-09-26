#include<stdio.h>

int main(){
	int i,j,n,sum,num[39][390]={1};
	scanf("%d",&n);
	sum=n*(n+1)/2;
	if(sum%2==1){
		printf("%d",0);
		return 0;
	}
	else{
		for(i=1;i<=n;i++){
			for(j=1;j<=sum/2;j++){
				if(i<=j){
					num[i][j]=num[i-1][j]+num[i-1][j-i];
				}
				else
					num[i][j]=num[i-1][j];
			}
		}
		printf("%d\n",num[n][sum/2]);
	}
}
