/*
��Ŀ���ݣ�
�����㹻���1��2��5��ֵ��Ǯ�ң�����һ��Ǯ��n�����һ������ʹ�ܹ���������е���ϣ�
��������
Ǯ��N

�������
���е�������ĸ���

��������
20

�������
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
