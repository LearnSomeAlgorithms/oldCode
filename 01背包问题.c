/*
题目内容：
背包最大允许装载为C, 有n个物品要放进背包，每个物品的重量为w[1],w[2],...w[n],每个物品的价值为v[1],v[2],...v[n], 请选择物品装进背包，使得价值最大。C为整数。
输入描述
第一行为物体个数n,以及背包容量C；
第二行为n个重量（实数），空格隔开
第三行为n个价值（实数），空格隔开

输出描述
第一行为最大装载的总价值
第二行为每个物品是否装载，1表示装，0表示不装，中间用空格隔开
(测试数据能保证最优解唯一)

输入样例
5 10
2 2 6 5 4
6 3 5 4 6

输出样例
15
1 1 0 0 1
*/


#include<stdio.h>
#define N 100
int time[N],price[N];
int arr[N][N]={0};
int take[N]={0};

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
			}
			else{			
				arr[i][j]=arr[i-1][j];
			}
		}
	}
}

void show(int M,int T){
	int i=M,j=T;
	while(i>0 && j>0){
		if(arr[i][j]==arr[i-1][j-time[i]]+price[i]){
			take[i]=1;
			j=j-time[i];
		}
		i--;
	}
}



int main(){
	int i,T,M;
	scanf("%d %d",&M,&T);
	for(i=1;i<=M;i++){
		scanf("%d",&time[i]);
	}
	for(i=1;i<=M;i++){
		scanf("%d",&price[i]);
	}
	
	check(M,T,time,price);
	printf("%d\n",arr[M][T]);
	show(M,T);
	for(i=1;i<=M;i++)
		printf("%-2d",take[i]);
	return 0;
}
