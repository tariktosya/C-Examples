#include <stdio.h>
#include <stdlib.h>

unsigned long long int fibon( unsigned int number );
int counter=0;
int main( void )
{
 unsigned int number,x;
 printf("Kacinci degeri ogrenmek istersiniz? = ");
 scanf("%u",&x);
 printf( "Serinin %u.'nci Elemaninin degeri:%llu\n", x, fibon(x));
 printf( "Serinin %u.'nci elemaninin hesaplanmasi icin fonksiyon cagirma sayisi: %u", x, counter );
 return 0; 
}

unsigned long long int fibon( unsigned int number )
{
	counter+=1;
 if( number == 0 || number == 1 )
        return number;
  return fibon( number - 1 ) + fibon( number - 2 );
  
}
