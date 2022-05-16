#include <stdio.h>
typedef struct Complex{
	float real;
	float imag;
}complex;

void addNumbers(complex c1, complex c2, complex *result);

int main(){
	complex c1, c2, result;
	
	printf("for first number\n");
	
	printf("enter real part:");
	scanf("%f", c1.real);
	
	printf("enter iamginary part:");
	scanf("%f", c1.imag);
	
	

	
	printf("for second number\n");
	
	printf("enter real part:");
	scanf("%f", c2.real);
	
	printf("enter iamginary part:");
	scanf("%f", c2.imag);
	
	
	addNumbers(c1, c2, &result);
	printf("result.real=%.1f", result.real);
	printf("result.imag=%.1f", result.imag);
	
	return 0;	

}

void addNumers(complex c1, complex c2, complex *result){
	result->real=c1.real+ c2.real;
	result->imag=c1.imag+ c2.imag;
}












