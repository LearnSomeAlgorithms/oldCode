/*
题目内容：
 实数序列a[1],a[2],...a[n], 一个子段指一段连续的子序列a[i],a[i+1],...a[j], 其中1<=i<=j<=n. 要求给出具有最大和的子段。要求算法时间复杂性为o(n)。
输入描述
第一行输入一个整数n,表示原序列共有n个数据；
第二行输入n个实数，用空格隔开。

输出描述
最大和的子段，每个数据也用空格隔开。
（本题的测试数据能保证最大和的那一个子段是唯一的）

输入样例
7
-1 3 -2 4 -1 6 -5

输出样例
3 -2 4 -1 6
*/

#include<stdio.h>

int main(){
	int n,i,beg,end,tbeg=0,tend,arr[100]={0};
	int tem=0,res=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n&&arr[i]<=0;i++);
	tbeg=i;
	for(i;i<n;i++){
		tem+=arr[i];
		tend=i;
		if(tem>res){
			res=tem;
			beg=tbeg;
			end=tend;
		}
		if(tem<0){
			tem=0;
			tbeg=i+1;
		}
	}
	for(i=beg;i<=end;i++)
		printf("%d ",arr[i]);
}
