/*
��Ŀ���ݣ�
�����������װ��ΪC, ��n����ƷҪ�Ž�������ÿ����Ʒ������Ϊw[1],w[2],...w[n],ÿ����Ʒ�ļ�ֵΪv[1],v[2],...v[n], ��ѡ����Ʒװ��������ʹ�ü�ֵ���CΪ������
��������
��һ��Ϊ�������n,�Լ���������C��
�ڶ���Ϊn��������ʵ�������ո����
������Ϊn����ֵ��ʵ�������ո����

�������
��һ��Ϊ���װ�ص��ܼ�ֵ
�ڶ���Ϊÿ����Ʒ�Ƿ�װ�أ�1��ʾװ��0��ʾ��װ���м��ÿո����
(���������ܱ�֤���Ž�Ψһ)

��������
5 10
2 2 6 5 4
6 3 5 4 6

�������
15
1 1 0 0 1
*/


#include<stdio.h>
#define N 100
int time[N],price[N];
int arr[N][N]={0};
int take[N]={0};

int max(int a,int b){
	if(a>b){
		return a;
	}
	else return b;
}

void check(int n,int t,int tt[],int pp[]){
	int i,j;
	for(i=1;i<=n;i++){
		for(j=0;j<=t;j++){
			if(j>=tt[i]){
				arr[i][j]=max(arr[i-1][j],arr[i-1][j-tt[i]]+pp[i]);
			}
			else{			
				arr[i][j]=arr[i-1][j];
			}
		}
	}
}

void show(int M,int T){
	int i=M,j=T;
	while(i>0 && j>0){
		if(arr[i][j]==arr[i-1][j-time[i]]+price[i]){
			take[i]=1;
			j=j-time[i];
		}
		i--;
	}
}



int main(){
	int i,T,M;
	scanf("%d %d",&M,&T);
	for(i=1;i<=M;i++){
		scanf("%d",&time[i]);
	}
	for(i=1;i<=M;i++){
		scanf("%d",&price[i]);
	}
	
	check(M,T,time,price);
	printf("%d\n",arr[M][T]);
	show(M,T);
	for(i=1;i<=M;i++)
		printf("%-2d",take[i]);
	return 0;
}
