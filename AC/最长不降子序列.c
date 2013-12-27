/*
题目内容：
所谓子序列，就是在原序列里删掉若干个元素后剩下的序列，
以字符串"abcdefg"为例子，去掉bde得到子序列"acfg"现在的问题是，
给你一个数字序列，你要求出它最长的单调不降子序列。
输入描述
多组测试数据，每组测试数据第一行是n(1<=n<=10000)，表示n个数据，
下一行是n个比10^9小的正整数

输出描述
对于每组测试数据输出一行，每行内容是最长的单调不降子序列
的长度

输入样例
5
1 2 4 8 16

5
1 10 4 9 7

9
0 0 0 1 1 1 5 5 5

输出样例
5
3
9
*/ 

#include<stdio.h>
#define Z 100

int check(int a[],int b[],int i,int end){
	int j,tem=a[i],pre=0,nex=0;
	for(j=i-1;j>=0;j--){
		if(a[j]<=tem){
			pre++;
			tem=a[j];
			b[j]=1;
		}
	}
	//printf("--%d",pre);
	tem=a[i];
	for(j=i+1;j<end;j++){
		if(a[j]>=tem){
			nex++;
			tem=a[j];
			b[j]=1;
		}
	}
	//printf("--%d\n",nex);
	return (pre+nex+1);
}

int main(){
	int n,i,res=0,tem=0,arr[Z],brr[Z]={0};
	//while(1){
		scanf("%d",&n);
	//	if(n==0) break;
	//	else{
			res=0;
			//memset(brr,0,sizeof(brr));
			for(i=0;i<n;i++){
				brr[i]=0;
			}
			for(i=0;i<n;i++){
				scanf("%d",&arr[i]);
			}
			for(i=0;i<n;i++){
				if(brr[i]==0)
					tem=check(arr,brr,i,n);
				if(tem>res)
					res=tem;
			}	
			printf("%d\n",res);
	//	}		
	//}
}
