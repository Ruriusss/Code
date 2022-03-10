#include <stdio.h>
#include <locale.h>
#include <stdlib.h>


// int charToInt(char num){
    
//     int convert;
    
//     convert = num - '0';
//     // convert = (int)num  - 48;
    
//     return convert;
// }


// double in(const char* t){
	
// 	setlocale(LC_ALL, "Rus");

// 	float r, s;

// 	float x;

// 	char num[999];

// 	do{
// 		if(scanf("%f", &x) != 1){
	
// 			printf("Wrong number\n");
// 			return -1;	
// 		}else{
	
// 			r = x / 2 / 3.14;
// 			s = 3.14 * r * r;

// 			printf("R of circle: %f\n", r);
// 			printf("S of circle: %f\n", s);
// 			printf("L of circle: %f\n", x);
// 		}while(1>0);
// 	}
// }


int main(){
	
// 	in("Enter a number: ");	
    
    int i = 0, ch;
    char num[10];
    
    while(ch !='\n'){
        
        ch = getchar();
        num[i] = ch;
        i++;
    }
    
    for (int j = 0; j < i; j++) {
        
        if(num[j] == ','){
            
            num[j] = '.';
        }   
    }
    
    int conv[999];
    
    for (int k = 0; k < i; k++) {
        
        conv[k] = num[k] - '0';
    }
    
    for (int c = 0; c < i; c++) {
        
        printf("%ls", conv[c]);
    }
}

