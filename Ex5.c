#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int sonuc=1,toplam=0;
long int islem(int xdegeri,int ydegeri);
int main(int argc, char *argv[]) {
	int x,y,i;
	printf("f(x,y) x uzeri y fonksiyonu icin\nX = ");
	scanf("%d",&x);
	printf("Y = ");
	scanf("%d",&y);
		islem(x,y);
	printf("f(%i,%i) = %i \n",x,y,sonuc);
	toplam=sonuc+toplam;
	sonuc=1;
	 islem(y,x);
	 toplam=sonuc+toplam;
	printf("%d toplam",toplam);
	return 0;
}
long int islem(int xdegeri,int ydegeri){
	if((ydegeri)==0){
	 return sonuc;
	
	 }
	else{
	sonuc=sonuc*xdegeri;
	return islem(xdegeri,(ydegeri-1));
}
}
