/*
 题目内容：

没有买到奥运会的门票让YF伤心不已，为了使自己开心起来，他去找周围的人聊天，每找一个人聊天，他就会耗费一定的体力，但他会得到一定量的快乐。YF试图使自己尽可能的高兴，但一旦体力耗尽了(为零或为负)，他也就挂了，就一点快乐都没有了。现在Yk初始有100点体力，他最多可以获得多少快乐？

输入描述

数据分多组，对于每组数据：第一行为n，表示有YK的n(0<n<21)个朋友。第二行表示和每个人聊天耗费的体力，第三行表示每个人所能提供的快乐值。输入以一个0结束。


输出描述

对于每组输出，输出一个值，YK可以获得的最大的快乐值。


输入样例

3
1 21 79
20 30 25
4
100 100 100 100
1 2 3 4
0


输出样例

50
0

*/

#include<stdio.h>
#define N 11
#define M 100
int T[N],K[N];
int arr[N][M];

int max(int a,int b){
	if(a>b)
		return a;
	else 
		return b;
}

void check(int num){
	int i,j;
	for(i=1;i<=num;i++){
		for(j=1;j<=M;j++){
			if(j>=T[i])
				arr[i][j]=max(arr[i-1][j],arr[i-1][j-T[i]]+K[i]);
			else
				arr[i][j]=arr[i-1][j];

		}
	}
}

int main(){
	int i,f_num;
	while(1){
		scanf("%d",&f_num);
		if(f_num==0) break;
		for(i=1;i<=f_num;i++){
			scanf("%d",&T[i]);
		}
		for(i=1;i<=f_num;i++){
			scanf("%d",&K[i]);
		}
		check(f_num);
		printf("%d",arr[f_num][M-1]);

	}
	
	
}
