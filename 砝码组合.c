/*
题目内容：
用天平称重时，我们希望用尽可能少的砝码组合称出尽可能多的重量。
如果只有5个砝码，重量分别是1，3，9，27，81。
则它们可以组合称出1到121之间任意整数重量（砝码允许放在左右两个盘中）。
本题目要求编程实现：对用户输入的重量(1~121)，
给出砝码组合方案（用加减式表示，减代表砝码放在物品盘）。
例如：
输入：
5
输出：
9-3-1

输入：
19
输出：
27-9+1

要求程序输出的组合总是大数在前小数在后。
输入描述
用户输入的重量(1~121)，

输出描述
给出砝码组合方案（用加减式表示，减代表砝码放在物品盘）。

输入样例
19

输出样例
27-9+1
*/


#include<stdio.h>
int res[10]={5};
int fama[5]={1,3,9,27,81};

void search(int num,int b){  //num涓洪渶瑕佸垎鏋愮殑鏁帮紝b涓哄湪鏁扮粍涓�鐨勪綅缃�
	int cha;
	int a;
	if(num>=0)
		a=num;
	else
		a=0-num;
	if(a==0) ;
	else {
		if(a==1){
			res[b]=fama[0];
		}
		else if(a>1 && a<=4){
			res[b]=fama[1];
		}
		else if(a>4 && a<=13){
			res[b]=fama[2];
		}
		else if(a>13 && a<=40){
			res[b]=fama[3];
		}
		else if(a>40 && a<=121){
			res[b]=fama[4];
		}
		
		cha=a-res[b];
	
		if(num<0){
			res[b]=0-res[b];
			cha=0-cha;
		}
		res[b+1]=cha;
		search(cha,b+1);
	}
}




int main(){
	int a,i;
	scanf("%d",&a);
	search(a,0);
	for(i=0;res[i]!=0;i++){
		if(res[i]>0){
			if(i==0)
				printf("%d",res[i]);
			else
				printf("+%d",res[i]);
		}
		else {
			printf("-%d",0-res[i]);
		}
	}
}
