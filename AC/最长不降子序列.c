/*
��Ŀ���ݣ�
��ν�����У�������ԭ������ɾ�����ɸ�Ԫ�غ�ʣ�µ����У�
���ַ���"abcdefg"Ϊ���ӣ�ȥ��bde�õ�������"acfg"���ڵ������ǣ�
����һ���������У���Ҫ�������ĵ������������С�
��������
����������ݣ�ÿ��������ݵ�һ����n(1<=n<=10000)����ʾn�����ݣ�
��һ����n����10^9С��������

�������
����ÿ������������һ�У�ÿ����������ĵ�������������
�ĳ���

��������
5
1 2 4 8 16

5
1 10 4 9 7

9
0 0 0 1 1 1 5 5 5

�������
5
3
9
*/ 

#include<stdio.h>
#define Z 100

int check(int a[],int b[],int i,int end){
	int j,tem=a[i],pre=0,nex=0;
	for(j=i-1;j>=0;j--){
		if(a[j]<=tem){
			pre++;
			tem=a[j];
			b[j]=1;
		}
	}
	//printf("--%d",pre);
	tem=a[i];
	for(j=i+1;j<end;j++){
		if(a[j]>=tem){
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
	//while(1){
		scanf("%d",&n);
	//	if(n==0) break;
	//	else{
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
	//	}		
	//}
}
