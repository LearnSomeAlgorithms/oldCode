/*
 题目内容：

如果有一正整数n，其真因数的总和等于n，则称之为完美数。
例如以下几个数都是完美数：
6=1+2+3
28=1+2+4+7+14
496=1+2+4+8+16+31+62+124+248
求小于n的所有完美数.
 

输入描述

输入一个正整数n


输出描述

输出小于n的完美数，按升序输出，每个数据占一行


输入样例

10


输出样例

6
*/


#include<stdio.h>
#include<math.h>

void check(int m){
	int i,sum=1,a[10000]={0},flag=0;

	int end;
	float end1;
	end1=sqrt((double)m);
	end=(int)end1;
	if(m/end==end && m%end==0){
		a[flag]=end;
		flag++;
	}
	else if(m%end==0){
		a[flag]=end;
		a[flag+1]=m/end;
		flag=flag+2;
	}
	for(i=2;i<end;i++){
		if(m%i==0){
			a[flag]=i;
			a[flag+1]=m/i;
			flag=flag+2;
		}
	}
	for(i=0;a[i]!=0;i++){
		sum=sum+a[i];
	}
	if(sum==m)
		printf("%d\n",m);
}

int main(){
	int i,n;
	scanf("%d",&n);
	if(n<6){
		printf("no result");
	}
	for(i=6;i<n;i++){
		check(i);
	}
}
