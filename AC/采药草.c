/*
【问题描述】

辰辰是个天资聪颖的孩子，他的梦想是成为世界上最伟大的医师。为此，他想拜附近最有威望的医师为师。医师为了判断他的资质，给他出了一个难题。医师把他带到一个到处都是草药的山洞里对他说：“孩子，这个山洞里有一些不同的草药，采每一株都需要一些时间，每一株也有它自身的价值。我会给你一段时间，在这段时间里，你可以采到一些草药。如果你是一个聪明的孩子，你应该可以让采到的草药的总价值最大。”

如果你是辰辰，你能完成这个任务吗？

【输入文件】

输入文件medic.in的第一行有两个整数T（1 <= T <= 1000）和M（1 <= M <= 100），用一个空格隔开，T代表总共能够用来采药的时间，M代表山洞里的草药的数目。接下来的M行每行包括两个在1到100之间（包括1和100）的整数，分别表示采摘某株草药的时间和这株草药的价值。

【输出文件】

输出文件medic.out包括一行，这一行只包含一个整数，表示在规定的时间内，可以采到的草药的最大总价值。

【输入样例】

70 3

71 100

69 1

1 2

【输出样例】

3

【数据规模】

对于30%的数据，M <= 10；

对于全部的数据，M <= 100。
*/


#include<stdio.h>
#define N 100
int time[N],price[N];
int arr[N][N]={0};
int take[M]={0}};

int max(int a,int b){
	if(a>b){
		return a;
	}
	else return b;
}

void check(int n,int t,int tt[],int pp[]){
	int i,j;
	for(i=1;i<=n;i++){
		for(j=0;j<=t;j++){
			if(j>=tt[i]){
				arr[i][j]=max(arr[i-1][j],arr[i-1][j-tt[i]]+pp[i]);
				if(arr[i][j]==arr[i-1][j-tt[i]]+pp[i])
					take[i]=1;
			}
			else
				arr[i][j]=arr[i-1][j];
		}
	}
}





int main(){
	int i,j,T,M;
	scanf("%d %d",&T,&M);
	for(i=1;i<=M;i++){
		scanf("%d%d",&time[i],&price[i]);
	}
	check(M,T,time,price);
	printf("%d",arr[M][T]);
	return 0;
}
