/*
��Ŀ���ݣ�
ĳ��Ϊ�˷����й��ĵ���Ϯ�����з���һ�ֵ�������ϵͳ���������ֵ�������ϵͳ��һ��ȱ�ݣ���Ȼ���ĵ�һ���ڵ��ܹ���������ĸ߶ȣ������Ժ�ÿһ���ڵ������ܸ���ǰһ���ĸ߶ȡ�ĳ�죬�״ﲶ׽���й��ĵ�����Ϯ�����ڸ�ϵͳ�������ý׶Σ�����ֻ��һ��ϵͳ������п��ܲ����������еĵ�����
��������
�����ж���������ݡ�����ĵ�һ��Ϊ�����ĸ���n (0&lt;n&lt;10000)��������ÿ��Ϊ�������η����ĸ߶�h��������30000 ����������

�������
��ÿ���������ݣ����һ�У�Ϊ������صĵ���������

��������
6
5 3 2 4 1 3
3
3 3 3
0

�������
4
3
*/ 

#include<stdio.h>
#define Z 100

int check(int a[],int b[],int i,int end){
	int j,tem=a[i],pre=0,nex=0;
	for(j=i-1;j>=0;j--){
		if(a[j]>=tem){
			pre++;
			tem=a[j];
			b[j]=1;
		}
	}
	//printf("--%d",pre);
	tem=a[i];
	for(j=i+1;j<end;j++){
		if(a[j]<=tem){
			nex++;
			tem=a[j];
			b[j]=1;
		}
	}
	//printf("--%d\n",nex);
	return (pre+nex+1);
}

int main(){
	int n,i,res=0,tem=0,arr[Z],brr[Z]={0};
	while(1){
		scanf("%d",&n);
		if(n==0) break;
		else{
			res=0;
			//memset(brr,0,sizeof(brr));
			for(i=0;i<n;i++){
				brr[i]=0;
			}
			for(i=0;i<n;i++){
				scanf("%d",&arr[i]);
			}
			for(i=0;i<n;i++){
				if(brr[i]==0)
					tem=check(arr,brr,i,n);
				if(tem>res)
					res=tem;
			}	
			printf("%d\n",res);
		}		
	}
}
