/*
��Ŀ���ݣ�
 д��һ�����򣬽���һ����N/D����ʽ����ķ���������NΪ���ӣ�DΪ��ĸ���������С����ʽ��

�����У�0��N��65535��0<D��65535����������С�������ౣ��100λ��
��������
�ֱ�����N D

�������
�������С����ʽ����ѭ������Ҫ����ѭ���������������������磺
1/3= 0.(3)

��������
1 7

�������
0.(142857)
*/
#include<stdio.h>
//-----------------------------------------------------
int res[101];
int count=1;
int ys[100];
//-----------------------------------------------------
  void show(){
    int i=1;
    printf("%d.",res[0]);
    if(count==101){
    	for(i;i<101 && res[1];i++)
      	printf("%d",res[i]);
    }
    else if(count<101 &&ys[count-1]!=0 ){
    	printf("(");
    	for(i;i<count-1;i++){
    		printf("%d",res[i]);
    	}
    	printf(")");
    }
    else{
    	for(i;i<count;i++){
    		printf("%d",res[i]);
    	}
    }
	
}

int check( int a){
	int i;
	for(i=1;i<count;i++){
		if(a==ys[i])
			return 0;
		else 
			return 1;
	}
}
void main(){
  int a,b,x,y;
  int tempa,tempb=-1;
  int flag=-1;
  scanf("%d%d",&a,&b);
  res[0]=a/b;
  x=a%b;
  ys[0]=x;
  y=b;
  while(count<101 && flag!=0 &&tempb!=0){
      tempa=x*10/y;
      tempb=x*10%y;
      res[count]=tempa;
      ys[count]=tempb;
      flag=check(tempb);
      count++;
      x=tempb;
      
      
  }
  show();
}
