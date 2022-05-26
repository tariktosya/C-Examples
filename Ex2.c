#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
    double calcMedian( double  array[] ,size_t doubleArray );
	double calcAverage( double  array[], size_t doubleArray );
    double calcStdDeviation( double array[], size_t doubleArray );
    double calcVariance( double array[], size_t doubleArray );
    double median;
    double Average;
    double StdDeviation;
    double Variance;
int main(int argc, char *argv[]) {
	double doubleArray [] = { 1.1, 2.2, 3.3, 4.4, 5.5, 6.6,7.7, 8.8, 9.9, 11.1, 22.2, 33.3, 44.4, 55.5, 66.6, 77.7, 88.8, 99.9 };
	calcAverage(doubleArray,18);
	calcMedian(doubleArray,18);
	calcStdDeviation(doubleArray,18);
	calcVariance(doubleArray,18);
	return 0;
}
double calcAverage(double array[], size_t doubleArray){
	int i;
	for (i = 0 ; i<doubleArray;i++){
		Average = array[i]+Average;
	}
	Average=Average/i;
	printf("Dizinin Ortalamasi = %f\n",Average);
	return Average;
}
double calcMedian( double  array[] ,size_t doubleArray ){
	if ((doubleArray%2)==0){
		median=((array[(doubleArray/2)-1])+(array[(doubleArray/2)]))/2;
	}
	else{
		median=array[(doubleArray+1)/2];
	}
	printf("Medyan Degerimiz = %f \n ",median); 
	return median;
}
double calcStdDeviation(double array[], size_t doubleArray){
	int i;
	int x=0;
	for(i=0;i<doubleArray;i++){
		x = ((array[i]-Average)*(array[i]-Average))+x;
	}
	StdDeviation=sqrt(x/(i-1));
	printf("Standart Sapma Degerimiz = %f \n",StdDeviation);
	return StdDeviation;
}
double calcVariance(double array[], size_t doubleArray){
	int i;
	int x=0;
	for(i=0;i<doubleArray;i++){
		x=((array[i]-Average)*(array[i]-Average))+x;
	}
	Variance = x/doubleArray;
	printf("Varyans Degerimiz = %f \n",Variance);
	return Variance;
}
