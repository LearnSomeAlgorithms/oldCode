/*
��Ŀ���ݣ�
 ��д����ʵ�ֽ�һ�����¸�ʽ����ӡ��������ӡʱÿ�еĳ���Ϊ20���ַ���
���һ�е����һ�����ʳ����˱��е�20���ַ��ķ�Χ����Ӧ�����Ƶ���һ�С�
������ÿ������֮������һ���ո����һ������ǰ�������Ҫ���Ӷ���ո�
ʹÿ�е�ĩβ׼ȷ�ش��ڵ�20��λ�ô���
��������
����n�����ʣ��������룬ÿ�����ʲ��ܳ���20����ĸ�����ʼ��ÿո����������
Ҫ��Ϊת�У�Ҳ����˵�������ĵ��ʳ���һ��Ҳ��Ҫ��Enter��

�������
������n�����ʷ��д�ӡ��ÿ��20���ַ������һ��ֻ�ܷ�һ�������򵥴ʺ��ÿո���䣬
��һ�пɷŶ�����ʣ���ĩβ����Ϊ���ʣ���һ�����ʲ��ܿ��������

��������
The relationship between XML functional dependencies and XML keys are also discussed

�������
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
	for(i=0;i<strlen(in);i++){//������ת�浽out���飬ÿ��һ������ 
		if(in[i]==' '){
			j++;
			k=0;
		}
		else{
			out[j][k]=in[i];
			k++;
		}
	} 
	//���out����
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
