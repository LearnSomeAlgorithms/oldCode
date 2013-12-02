/*
题目内容：
 输入某年某月某日，判断这一天是这一年的第几天？
输入描述
依次输入年月日，中间用空格隔开，如
2012 6 10

输出描述
2012-6-10是这年的第162天

输入样例
2012 6 10

输出样例
162
*/ 

#include<stdio.h>
int month[13]={29,31,28,31,30,31,30,31,31,30,31,30,31};

int check(int a){
	if((a%4==0) && (a%100!=0) || a%400==0){
		return 0;
	} 
	else 
		return 2;
}

int main(){
	int y,m,d,two,i,days=0;
	scanf("%d%d%d",&y,&m,&d);
	two=check(y);
	for(i=1;i<m;i++){
		if(i==2)
			days=days+month[two];
		else		
			days=days+month[i];
	}
	printf("%d",days+d);
}
