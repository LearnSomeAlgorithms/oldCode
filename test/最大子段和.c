#include<stdio.h>
#define M 20

int check(int a[];int len){
	int tem=0;//包含i的最大字段和
	int sum=0;//总的最大字段和
	int i;
	for(i=0;i<len;i++){
		if(tem>0){
			tem=tem+a[i];
		}
		else{
			tem=a[i];
		}
		if(sum<tem)
			sum=tem;
	}
	return sum;
}

int main(){
	int arr[M],len,i;
	scanf("%d",&len);
	for(i=0;i<len;i++){
		scanf("%d",&arr[i]);
	}
	check(arr,len);
}
