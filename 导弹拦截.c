/*
题目内容：
某国为了防御敌国的导弹袭击，研发出一种导弹拦截系统。但是这种导弹拦截系统有一个缺陷：虽然它的第一发炮弹能够到达任意的高度，但是以后每一发炮弹都不能高于前一发的高度。某天，雷达捕捉到敌国的导弹来袭。由于该系统还在试用阶段，所以只有一套系统，因此有可能不能拦截所有的导弹。
输入描述
本题有多组测试数据。输入的第一行为导弹的个数n (0&lt;n&lt;10000)。接下来每行为导弹依次飞来的高度h（不大于30000 的正整数）

输出描述
对每组输入数据，输出一行，为最多拦截的导弹个数。

输入样例
6
5 3 2 4 1 3
3
3 3 3
0

输出样例
4
3
*/ 

#include<stdio.h>
#define Z 100

int check(int a[],int b[],int i,int end){
	int j,tem=a[i],pre=0,nex=0;
	for(j=i-1;j>=0;j--){
		if(a[j]>=tem){
			pre++;
			tem=a[j];
			b[j]=1;
		}
	}
	//printf("--%d",pre);
	tem=a[i];
	for(j=i+1;j<end;j++){
		if(a[j]<=tem){
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
	while(1){
		scanf("%d",&n);
		if(n==0) break;
		else{
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
		}		
	}
}
