#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    
    
    srand(time(NULL));

    int size;
    
    int i, j, k, c;
    
    printf("Enter the size code: ");
    scanf("%d", &size);

    int pass[size];
    
    int code[size];
    
    int key[size];
    
    for (int i = 0; i < size; i++) {
        printf("Enter %d number: ", i);
        scanf("%d", &code[i]);
    }
    
    int ex;
    
    do{
        
        for (int i = 0; i < size; i++) {
    
            printf("\n");
            
            int num = rand() % 10;

            pass[i] = num;
        }
        
        
        for (int i = 0; i < size; i++) {
            
            for (int j = 1; j < size; j++) {
                if(pass[i] == code[i]) {
                    
                    pass[i] == key[i];
                    printf("%d\n", pass[i]);
                    ex = 1;
                    
                }else{
                
                    for (int i = 0; i < size; i++) {
            

                        int num = rand() % 10;
        
                        pass[i] = num;
                    }

            }
                    
            }
            

        }
        
            
        for (int i = 0; i < size; i++) {
        
            printf("%d", pass[i]);
        }
        
        

    }while(ex != 1);
    

    

    return 0;
}