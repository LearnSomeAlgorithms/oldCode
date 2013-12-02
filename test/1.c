#include<stdio.h>
#include<string.h>

int main(){
	char in[300]={0},out[15][21]={0};
	int cha=20,cha1,count=0;
	int i=0,j=0,k=0;
	gets(in);
	for(i=0;i<strlen(in);i++){//å°æ°æ®è½¬å­å°outæ°ç»ï¼æ¯è¡ä¸ä¸ªåè¯ 
		if(in[i]==' '){
			j++;
			k=0;
		}
		else{
			out[j][k]=in[i];
			k++;
		}
	} 
	//è¾åºoutæ°ç»
	for(i=0;i<=j;i++)
		puts(out[i]); 
	
	
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
