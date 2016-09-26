/*
题目内容：
YF不爱名利，所以他既不喜欢6，也不喜欢8。他的幸运数字是4和7。如果一个数字中只包含4和7，他就认为这个数字是他的幸运数。
现在给你两个正整数a,b，要求返回a,b之间的幸运数的个数，包括a,b本身。
输入描述
第一行输入数目n,表示后面有n组ab
第2行开始，每行一组a b, 空格隔开。

输出描述
每行输出一个数，即a,b之间的幸运数的个数。

输入样例
3
11 20
4 7
1 10

输出样例
0
2
2
*/

#include<stdio.h>

int check(int a){
	int yu;
	while(a>0){
		yu=a%10;
		if(yu!=4 &&yu!=7){
			return 0;
		}
		a=a/10;
	}
	return 1;
}

int main(){
	int a,b,i,count,n;
	scanf("%d",&n);
	while(n--){
			scanf("%d%d",&a,&b);
			count=0;
			for(i=a;i<=b;i++){
				if(check(i))
					count++;
			}
			printf("%d\n",count);
	}
	return 0;
}
