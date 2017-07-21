/*
题目内容：
 在一个整数数组中，寻找第k大值所在位置。假设每个数值都不一样。要求算法时间复杂性通常情况下为线性。
输入描述
包括一个数组长度n,一个k, 以及紧接着的n个整数值。整数之间用空格隔开。

输出描述
第k大值所在位置编号。规定数组的第一个位置编号为0.

输入样例
7 3
1 4 3 9 8 7 2

输出样例
5
*/ 
#include<stdio.h>
#define M 20

int main(){
	int len,k;
	int arr[M],brr[M],i,temp,j;
	scanf("%d%d",&len,&k);
	for(i=0;i<len;i++){
		scanf("%d",&arr[i]);
		brr[i]=i;
	}
	//鎺掑簭,鍚屾椂brr鏁扮粍鍜宎rr涓€鏍风殑绉诲姩
	for(i=0;i<len;i++){
		for(j=i+1;j<len;j++){
			if(arr[i]<arr[j]){
				temp=brr[i];
				brr[i]=brr[j];
				brr[j]=temp;
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	printf("%d",brr[k-1]);
}
