/*
题目内容：
对于一个正整数n的划分，就是把n变成一系列正整数之和的表达式。注意，分划与顺序无关，例如6=5+1.跟6=1+5是同一种分划，另外，这个整数本身也是一种分划。
例如：，对于正整数n=5，可以划分为：
1+1+1+1+1
1+1+1+2
1+1+3
1+2+2
2+3
1+4
5
输入描述
输入一个正整数n

输出描述
输出n整数划分的总数k

输入样例
5

输出样例
7
*/ 

#include<stdio.h>
int a[100]={0};
int num=0;

void chaifen(int t){
        int i;
/*        for(i=1;i<t;i++){
                printf("%d+",a[i]);
        }
        //printf("%d\n",a[i]);
*/
        num++;
        int j=t;
        int m=a[j];
        for(i=a[j-1];i<=m/2;i++){
                a[j]=i;
                a[j+1]=m-i;
                            chaifen(j+1);
        }
        
}


int main(){
        int n,i;
        scanf("%d",&n);
//        for(i=1;i<=n/2;i++){
//                a[1]=i;
//                a[2]=n-i;
        a[0]=1;
        a[1]=n;
        chaifen(1);
//        }
        printf("%d",num-1);
        return 0;
}

