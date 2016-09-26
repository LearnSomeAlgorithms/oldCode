/*
题目内容：
 写出一个程序，接受一个以N/D的形式输入的分数，其中N为分子，D为分母，输出它的小数形式。

本题中，0≤N≤65535，0<D≤65535，设运算结果小数点后最多保留100位。
输入描述
分别输入N D

输出描述
如果它的小数形式存在循环，则要将其循环节用括号括起来。例如：
1/3= 0.(3)

输入样例
1 7

输出样例
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
