#include<stdio.h>
#include<conio.h>
int main(){
	int mesai;
	printf("mesai saatini giriniz");
	scanf("%d",&mesai);
	if(mesai<= 10){
		printf("ucret=%d", mesai*5);
	}
	else if (mesai>10 & mesai<=20){
		printf("ucret=%d",50+(mesai-10)*3);
	}
	else  { 		//(mesai>20) koyma
		printf("ucret=%d", 80+(mesai-20)*2);
	}	
	printf("\niyi calismalar");
}
