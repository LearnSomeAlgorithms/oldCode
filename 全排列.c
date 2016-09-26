//全排列不去重复 
#include<stdio.h>
#include<string.h>
#define M 10
int count=0;

void swap(char *arr,int a,int b){
	char temp;
		temp=arr[a];
		arr[a]=arr[b];
		arr[b]=temp;
}

void fun(char *arr,int a,int b){
	int j;
	if(a==b){
		puts(arr);
		count++;
	}
	else{
		for(j=a;j<=b;j++){
			if(arr[a]!=arr[b]){
				swap(arr,a,j);
				fun(arr,a+1,b);
				swap(arr,a,j);
			}
		}
	}
}

int main(){
	char str[M];
	int len;
	gets(str);
	len=strlen(str);
	fun(str,0,len-1);
	printf("%d",count);
}
