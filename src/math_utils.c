#include "math_utils.h"

double mean(int *range, int n){
	int i;
	double media = 0.0;
	for(i = 0; i < n; i++){
		media += range[i];
	}
	return (media*1.0)/(n*1.0);
}

double std_deviation(int *range, int n){
	int i;
	double desvio = 0.0;
	double media = mean(range, n);
	for(i = 0; i < n; i++){
		desvio += pow((media - range[i]),2);
	}
	return sqrt(desvio/((n*1.0)-1));
}