/* verilen bir sayı kadar asal sayıyı basınız. Örn 5 girilirse 2,3,5,7,11*/
#include<stdio.h>
#include<conio.h>
int main(){
	int k;
	printf("kac tane asal sayi istiyorsunuz");
	scanf("%d",&k);
	int sayac=0;
	int n=2;
	while(sayac<k){
		int asal =1;
		for(int i=2;i<n;i++){
			if (n%i==0)
			asal=0;
		}
		if (asal==1){
			printf("%d",n);
			sayac++;
		}
		n++;
	}
}
