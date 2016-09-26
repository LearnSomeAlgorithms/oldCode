/*
	 Description

	 把M个同样的苹果放在N个同样的盘子里，允许有的盘子空着不放，问共有多少种不同的分法？（用K表示）5，1，1和1，5，1 是同一种分法。
	 Input

	 第一行是测试数据的数目t（0 <= t <= 20）。以下每行均包含二个整数M和N，以空格分开。1<=M，N<=10。
	 Output

	 对输入的每组数据M和N，用一行输出相应的K。
	 Sample Input

	 1
	 7 3
	 Sample Output

	 8
	 Source
 *
 * */

#include<stdio.h>
int count[20]={0};

void apple(int a,int b,int c){
	if(b==1) {
		count[c]++;
	}
	else if(a==0){
		count[c]++;
	}
	else if(a<b){
		apple(a,a,c);
	}
	else{
		apple(a,b-1,c);
		apple(a-b,b,c);
		
	}
}



int main(){
	int i,t,M[20],N[20];
	scanf("%d",&t);
	for(i=0;i<t;i++){
		scanf("%d%d",&M[i],&N[i]);
	}
	for(i=0;i<t;i++){
		apple(M[i],N[i],i);
	}

	for(i=0;i<t;i++){
		printf("%d\n",count[i]);
	}
}
