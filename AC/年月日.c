/*
��Ŀ���ݣ�
 ����ĳ��ĳ��ĳ�գ��ж���һ������һ��ĵڼ��죿
��������
�������������գ��м��ÿո��������
2012 6 10

�������
2012-6-10������ĵ�162��

��������
2012 6 10

�������
162
*/ 

#include<stdio.h>
int month[13]={29,31,28,31,30,31,30,31,31,30,31,30,31};

int check(int a){
	if((a%4==0) && (a%100!=0) || a%400==0){
		return 0;
	} 
	else 
		return 2;
}

int main(){
	int y,m,d,two,i,days=0;
	scanf("%d%d%d",&y,&m,&d);
	two=check(y);
	for(i=1;i<m;i++){
		if(i==2)
			days=days+month[two];
		else		
			days=days+month[i];
	}
	printf("%d",days+d);
}
