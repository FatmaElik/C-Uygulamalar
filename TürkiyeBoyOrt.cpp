#include<stdio.h>
#include<conio.h>

/*K�z ve erkek �ocuklar�n anne ve baba boyuna g�re ortalamas� al�n�r.Hedef boyun T�rkiye ortalamas�na g�re k�yaslamas� yap�l�r.

K�z �ocuk boy=(anne boy+ baba boy-13)/2
Erkek �ocuk boy=(anne boy+baba boy-13)/2 
T�rkiye Boy Ortalamas� K�z �ocuk i�in 163cm Erkek �ocuk i�in 175cm  */

int main() {
	int bababoy;
	int anneboy;
	float hedefboy;
	char cinsiyet;
	printf ("Cocugun cinsiyetini giriniz (e,E/k,K): ");
	scanf("\n %c" , &cinsiyet);
	switch(cinsiyet)
	{
		case'e':
		case'E':
			printf("Babasinin Boyunu Giriniz : ");
			scanf("%d",&bababoy);
			printf("Annesinin Boyunu Giriniz : ");
			scanf("%d",&anneboy);
			hedefboy=(anneboy+bababoy+13)/2.0;
			printf("Hedef Boy : %.2f", hedefboy);
			if (hedefboy>175)
			printf("Turkiye Ortalamasindan Uzun");
			else if (hedefboy<175)
			printf("Turkiye Ortalamasindan Kisa");
			else
			printf("Turkiye Ortalamasina Esit");
			
			break;
				
		case'k':
		case'K':
			printf("Babasinin Boyunu Giriniz : ");
			scanf("%d",&bababoy);
			printf("Annesinin Boyunu Giriniz : ");
			scanf("%d",&anneboy);
			hedefboy=(anneboy+bababoy-13)/2.0;
			printf("Hedef Boy : %.2f", hedefboy);
			if (hedefboy>163)
			printf("Turkiye Ortalamasindan Uzun");
			else if (hedefboy<163)
			printf("Turkiye Ortalamasindan Kisa");
			else
			printf("Turkiye Ortalamasina Esit");
			
			break;
			default:
			printf("Yanlis Secim Yaptiniz!!");
	}
	
	
}
