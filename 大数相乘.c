/*
��Ŀ���ݣ�
 һ�����ͱ���ֻ������������С��n!��ֵ���� n �ϴ�ʱ���ɽ��׳�ֵ�е�ÿһ�����ַ���һ��һά�����һ��Ԫ���С�ʹ���ⷽ������ӡn!��ֵ��

��������
����n

�������
n!��ֵ

��������
18

�������
6402373705728000
*/ 

#include<stdio.h>
#define M 100
int sum[M]={1};

void check(){
	int i=0;
	while(i<M ){
		if(sum[i]>=10){
			sum[i+1]=sum[i+1]+sum[i]/10;
			sum[i]=sum[i]%10;
		}
		i++;
	}
}

int main(){
	int i,j,n;
	scanf("%d",&n);
	for(j=1;j<=n;j++){
		for(i=0;i<M;i++){
			sum[i]=sum[i]*j;
		}
		check();
	}
	for(i=M-1;sum[i]==0;i--);
	for(;i>=0;i--){
		printf("%d",sum[i]);
	}
}
