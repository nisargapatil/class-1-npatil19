#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>

int main(void){
	char* s = "asd";
	printf("%lu\n", sizeof(char));
	printf("%lu\n", sizeof(int));
	printf("%lu\n", sizeof(s));
	printf("%lu\n", sizeof(float));
	printf("%lu\n", sizeof(double));
}
