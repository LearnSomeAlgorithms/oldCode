/*
题目内容：
 "编写一个程序，当输入不超过６０个字符组成的英文文字时，计算机将这个句子中的字母按英文字典字母顺序重新排列，排列后的单词的长度要与原始句子中的长度相同。
并且要求只对Ａ到Ｚ的字母重新排列，其它字符保持原来的状态。"
输入描述
一个字符串，包括大写英文字母，以及其他字符

输出描述
字符串的重新排列，只是大写字母按字典顺序，其他字母保持原位

输入样例
ＴＨＥ ＰＲＩＣＥ ＯＦＢＲＥＡＤ ＩＳ ￥１ ２５ ＰＥＲ ＰＯＵＮＤ

输出样例
ＡＢＣ ＤＤＥＥＥ ＥＦＨＩＩＮＯ ＯＰ ￥１ ２５ ＰＰＲ ＲＲＳＴＵ
*/ 

#include<stdio.h>
#include<string.h>

int main(){
	char arr[60];
	char temp;
	int i,j,len;
	gets(arr);
	len=strlen(arr);
	for(i=0;i<len;i++){
		if(arr[i]>='A' && arr[i]<='Z')
			for(j=i+1;j<len;j++){
				if(arr[j]>='A' && arr[j]<='Z'){
					if(arr[i]>arr[j]){
						temp=arr[i];
						arr[i]=arr[j];
						arr[j]=temp;
					}
				}
			}
	}
	puts(arr);
}
