#include <stdio.h>
#include <stdlib.h>
#define size 100

int main(int argc, char *argv[]) {
    int dongu=0 ;
	int sesli = 0 , sessiz = 0,sayac=0;
	char karakter[size];
	printf("**********Turkce karakter desteklememektedir.**********\nKarakter dizinizi girin : ");
	scanf("%[^\n]s",karakter);
	for(dongu=0;karakter[dongu]!=0;dongu++){
			if (karakter[dongu]=='a' || karakter[dongu]=='A' ||  karakter[dongu]=='e' || karakter[dongu]=='E' || karakter[dongu]=='I' || karakter[dongu]=='u' || karakter[dongu]=='U' || karakter[dongu]=='ü' || karakter[dongu]=='Ü' ){
		    	sesli +=1;
	       	}   
	        else if (karakter[dongu]>='a' && karakter[dongu]<='z' || karakter[dongu]>='A'&& karakter[dongu]<='Z') {
	        	sessiz+=1;
			}				    	
}	
	printf("%d -- Adet sesli harf bulunuyor\n",sesli);
	printf("%d -- Adet sessiz harf bulunuyor \n",sessiz);
	return 0;
}
