#include <stdio.h>

int main(){
    
    printf("Enter your name: ");
    
    int i = 0, ch;
    char name[20];
    
    
    do{
        
        ch = getchar();
        name[i] = ch;
        i++;
        
    }while(ch != '\n');   
    
    if(name[0] == 'D'){
        
        printf("You are gay\n");
    }else{
        for (int j = 0; j < i; j++) {
            
            printf("Hello, %c!\n", name[j]);
        }
    }
    return 0;
}
