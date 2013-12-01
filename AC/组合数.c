/*
 题目内容：

 找出n个自然数（1,2···n）中取r个数的组合，例如当n=5，r=3时所有组合为
1 2 3 
1 2 4
1 2 5
1 3 4
1 3 5
1 4 5
2 3 4
2 3 5
2 4 5
3 4 5
此题只需求出组合数的个数

输入描述：

输入两个正整数n、r


输出描述：

计算出n个自然数中取r个数的组合数的个数


输入样例：

5 3
20 18


输出样例

10
190

*/


#include<stdio.h>

int main(){
	int i,n,r,a=1,b=1;
	scanf("%d %d",&n,&r);
	for(i=n;i>=r+1;i--){
		a=a*i;
	}
	for(i=1;i<=n-r;i++){
		b=b*i;
	}
	printf("%d",a/b);
}
