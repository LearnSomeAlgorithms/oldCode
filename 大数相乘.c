/*
题目内容：
 一个整型变量只能用来存贮较小的n!的值，当 n 较大时，可将阶乘值中的每一个数字放在一个一维数组的一个元素中。使用这方法，打印n!的值；

输入描述
整数n

输出描述
n!的值

输入样例
18

输出样例
6402373705728000
*/ 

#include<stdio.h>
#define M 100
int sum[M]={1};

void check(){
	int i=0;
	while(i<M ){
		if(sum[i]>=10){
			sum[i+1]=sum[i+1]+sum[i]/10;
			sum[i]=sum[i]%10;
		}
		i++;
	}
}

int main(){
	int i,j,n;
	scanf("%d",&n);
	for(j=1;j<=n;j++){
		for(i=0;i<M;i++){
			sum[i]=sum[i]*j;
		}
		check();
	}
	for(i=M-1;sum[i]==0;i--);
	for(;i>=0;i--){
		printf("%d",sum[i]);
	}
}
