/*
��Ŀ���ݣ�
 ʵ������a[1],a[2],...a[n], һ���Ӷ�ָһ��������������a[i],a[i+1],...a[j], ����1<=i<=j<=n. Ҫ������������͵��ӶΡ�Ҫ���㷨ʱ�临����Ϊo(n)��
��������
��һ������һ������n,��ʾԭ���й���n�����ݣ�
�ڶ�������n��ʵ�����ÿո������

�������
���͵��ӶΣ�ÿ������Ҳ�ÿո������
������Ĳ��������ܱ�֤���͵���һ���Ӷ���Ψһ�ģ�

��������
7
-1 3 -2 4 -1 6 -5

�������
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
