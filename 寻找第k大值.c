/*
��Ŀ���ݣ�
 ��һ�����������У�Ѱ�ҵ�k��ֵ����λ�á�����ÿ����ֵ����һ����Ҫ���㷨ʱ�临����ͨ�������Ϊ���ԡ�
��������
����һ�����鳤��n,һ��k, �Լ������ŵ�n������ֵ������֮���ÿո������

�������
��k��ֵ����λ�ñ�š��涨����ĵ�һ��λ�ñ��Ϊ0.

��������
7 3
1 4 3 9 8 7 2

�������
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
	//排序,同时brr数组和arr一样的移动
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
