/*
题目内容：
给你足够多的1，2，5面值的钱币，输入一个钱数n，设计一个程序使能够计算出所有的组合！
输入描述
钱数N

输出描述
所有的组合数的个数

输入样例
20

输出样例
29
*/ 

#include<stdio.h>

int main(){
	int coin,i,j,count=0;
	scanf("%d",&coin);
	for(i=0;i<=coin/5;i++){
		for(j=0;j<=(coin-i*5)/2;j++){
		
			//printf("%d,%d,%d\n",i,j,coin-5*i-2*j);
			count++;
		}
	}
	printf("%d",count);
}
