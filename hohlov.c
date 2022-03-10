#include <stdio.h>
#include <locale.h>
#include <stdlib.h>



double in(const char* t){
	
	setlocale(LC_ALL, "Rus");

	float r, s;

	float x;

	char a_s[999];

	do{
		if(scanf("%f", &x) != 1){
	
			printf("Wrong number\n");
			return -1;	
		}else{
	
			r = x / 2 / 3.14;
			s = 3.14 * r * r;

			printf("R of circle: %f\n", r);
			printf("S of circle: %f\n", s);
			printf("L of circle: %f\n", x);
		}
	}
}


int main(){
	
	in("Enter a number: ");	
}
