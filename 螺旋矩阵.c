/*
 题目内容：

 一个从里向外逆时针转出来的螺旋n*n的矩阵 输

输入描述

矩阵的规模，0~50，如5表示5行5列的矩阵


输出描述

矩阵的规模，0~50，如5表示5行5列的矩阵，每个数占5位


输入样例

5


输出样例

25    24   23   22    21
10     9    8    7    20
11     2    1    6    19
12     3    4    5    18
13    14   15   16    17
*/

#include<stdio.h>
int arr[100][100];

void check(int a,int n){
	int i=a,j=a;
	int num =n*n;
	for(;j<a+n;j++,num--){
		arr[i][j]=num;
	}
	j--;num++;
	for(;i<a+n;i++,num--){
		arr[i][j]=num;
	}
	i--;num++;
	for(;j>=a;j--,num--){
		arr[i][j]=num;
	}
	j++;num++;
	for(;i>a;i--,num--){
		arr[i][j]=num;
	}

}

int main(){
	int a[51][51];
	int m,n,n1,i,j,sta=1;
	scanf("%d",&m);
	if(m%2==0){
		n=m+1;
		sta=2;
	}
	else
		n=m;
	n1=n;
	
	for(i=1;i<=n/2+1;i++,n1=n1-2){
		check(i,n1);	
	}
	for(i=sta;i<=sta+m-1;i++){
		for(j=1;j<=m;j++)
			printf("%d\t",arr[i][j]);
			printf("\n");
	}
}


