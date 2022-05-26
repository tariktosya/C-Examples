#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char charArray []= {"A computer is a machine that can be instructed to carry out sequences of arithmetic or logical operations automatically via computer programming.Modern computers have the ability to follow generalized sets of operations, called programs.These programs enable computers to perform an extremely wide range of tasks.A complete computer including the hardware, the operating system (main software), and peripheral equipment required and used for full operation can be referred to as a computer system.This term may as well be used for a group of computers that are connected and work together, in particular a computer network or computer cluster. Computers are used as control systems for a wide variety of industrial and consumer devices.This includes simple special purpose devices like microwave ovens and remote controls, factory devices such as industrial robots and computer-aided design, and also general purpose devices like personal computers and mobile devices such as smartphones.The Internet is run on computers and it connects hundreds of millions of other computers and their users.Early computers were only conceived as calculating devices.Since ancient times, simple manual devices like the abacus aided people in doing calculations.Early in the Industrial Revolution, some mechanical devices were built to automate long tedious tasks, such as guiding patterns for looms.More sophisticated electrical machines did specialized analog calculations in the early 20th century."};
    int i,karakter=0,z;
	int eleman = (sizeof charArray ); 
    for(i=0;i<eleman-1;i++){
    	if (charArray[i] != 32){
    		karakter +=1;
	    }	
    } 
    int enbSes=0,enb=0,deger,deger1,sesli=0,sessiz=0;
    for(i='A';i<='Z';i++){
    	for(z=0;z<eleman;z++){
    		if(charArray[z]==i || charArray[z]==(i+32)){
    	    	if(charArray[z]=='A' || charArray[z]=='a' || charArray[z]=='e' || charArray[z]=='E' || charArray[z]=='I' || charArray[z]=='i' || charArray[z]=='o' || charArray[z]=='O'|| charArray[z]=='Ö' || charArray[z]=='ö' || charArray[z]=='u' || charArray[z]=='U' || charArray[z]=='ü' ||charArray[z]=='Ü'){
    		        sesli +=1;
	    	    }
	    	    else{
	    	    	sessiz +=1;
				}
	     	}
	    }
		if(sesli>enbSes){
			enbSes=sesli;
			deger=i;
		}
		if(sessiz>enb){
			enb=sessiz;
			deger1=i;
		}
		sessiz=0;
		sesli=0;
	}	
    printf("Bosluksuz karakter sayisi = %d\n",karakter);
    printf("En cok tekrar eden sesli harf %d Kez %c\n",enbSes,deger);
    printf("En cok tekrar eden sessiz harf %d Kez %c\n",enb,deger1);
    
    char karakterim[1];
	int karaktersay=0;
	printf("Sayisini ogrenmek istediginiz harfi girin(Buyuk kucuk harf duyarliligi yoktur)=");
	scanf("%s",karakterim);
	printf("%c",karakterim);
	for(i=0;i<eleman;i++){
		if(charArray[i]==karakterim[0] || (charArray[i]+32)==karakterim[0] || (charArray[i]-32)==karakterim[0]){
			karaktersay+=1;
		}
	}
    printf("Girdiginiz %c Karakterinin takrar etme sayisi = %d",karakterim[0],karaktersay);
    
	return 0;
}
