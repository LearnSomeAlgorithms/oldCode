/*
题目内容：
 编写程序实现将一段文章格式化打印出来。打印时每行的长度为20个字符。
如果一行的最后一个单词超过了本行的20个字符的范围，则应把它移到下一行。
另外在每个单词之间增加一个空格，最后一个单词前面可能需要增加多个空格，
使每行的末尾准确地处在第20个位置处。
输入描述
输入n个单词（连续输入，每个单词不能超过20个字母，单词间用空格隔开，但不
要人为转行，也就是说如果输入的单词超过一行也不要按Enter）

输出描述
将上面n个单词分行打印，每行20个字符，如果一行只能放一个单词则单词后用空格填充，
若一行可放多个单词，则末尾必须为单词，且一个单词不能跨行输出。

输入样例
The relationship between XML functional dependencies and XML keys are also discussed

输出样例
The     relationship
between          XML
functional
dependencies and XML
keys are        also
discussed
*/

#include<stdio.h>
#include<string.h>

int main(){
	char in[300]={0},out[15][21]={0};
	int cha=20,cha1,count=0;
	int i=0,j=0,k=0;
	gets(in);
	for(i=0;i<strlen(in);i++){//将数据转存到out数组，每行一个单词 
		if(in[i]==' '){
			j++;
			k=0;
		}
		else{
			out[j][k]=in[i];
			k++;
		}
	} 
	//输出out数组
	//for(i=0;i<=j;i++)
	//	puts(out[i]); 
	
	
	for(i=0;i<=j;i++){
			cha=cha-strlen(out[i]);
			if(strlen(out[i+1])<=cha &&strlen(out[i+1])!=0){
				for(k=0;k<strlen(out[i]);k++)
					printf("%c",out[i][k]);
				printf(" ");
				cha--; 
				count=1;
			}
			else if((strlen(out[i+1])>cha && count==1) ||strlen(out[i+1])==0 && count==1){
				for(k=0;k<cha;k++)
					printf(" ");
				puts(out[i]);
				cha=20;
				count=0;
			}
			else{
				puts(out[i]);
				cha=20;
				count=0;
			}
	} 
	
} 
