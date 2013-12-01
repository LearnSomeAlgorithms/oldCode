/*
 题目内容：

有一堆石子，A，B两人轮流从中取出石子，每次取出的石子数目只能为1，3，7或8，最后一枚石子谁取到就是输方。A,B两人都足够聪明，不会做出错误的判断。现给出一定数目的石子，A先取石子，计算A最终是输是赢，赢用1表示，输用0表示.

输入描述

第一行为一个整数n(0< n <=100),表示玩n局，接下来n行每行有一个整数，表示对应的局提供的石子数（不大于10000），


输出描述

编程输出A对应的n局是赢是输，赢输出1，输输出0.


输入样例

3
1
3
10


输出样例

0
0
1
*/

#include<stdio.h>

int main(){
	int a[1001];
	int i,num,b;
	a[1]=0;
	a[2]=1;
	a[3]=0;
	a[4]=1;
	a[5]=0;
	a[6]=1;
	a[7]=0;
	a[8]=1;
	for(i=9;i<=1000;i++){
		if(a[i-1]==0 || a[i-3]==0 || a[i-7]==0 ||a[i-8]==0)
			a[i]=1;
		else 
			a[i]=0;
	}
	scanf("%d",&num);
	for(i=0;i<num;i++){
		scanf("%d",&b);
                printf("%d\n",a[b]);
	}
}
