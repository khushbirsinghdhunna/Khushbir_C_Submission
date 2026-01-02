#include <stdio.h>

int main() {
    int i, j;

    
    for(i = 1; i <= 7; i++) {
        
        
        for(j = 1; j <= 5; j++) {
            
            if(j == 1 || i + j == 6 || i - j == 2)
                printf("*");
            else
                printf(" ");
        }
        printf("\t"); 

        
        for(j = 1; j <= 5; j++) {
            if(j == 1 || j == 5 || i == 4)
                printf("*");
            else
                printf(" ");
        }
        printf("\t");

    
        for(j = 1; j <= 5; j++) {
            if(j == 1 || j == 5 || i == 7)
                printf("*");
            else
                printf(" ");
        }
        printf("\t");

        for(j = 1; j <= 5; j++) {
            if(i == 1 || i == 4 || i == 7 || (j == 1 && i < 4) || (j == 5 && i > 4))
                printf("*");
            else
                printf(" ");
        }
        printf("\t");

        for(j = 1; j <= 5; j++) {
            if(j == 1 || j == 5 || i == 4)
                printf("*");
            else
                printf(" ");
        }
        printf("\t");

        for(j = 1; j <= 5; j++) {
            if(j == 1 || (i == 1 || i == 4 || i == 7) && j < 5 || (j == 5 && (i != 1 && i != 4 && i != 7)))
                printf("*");
            else
                printf(" ");
        }
        printf("\t");

        for(j = 1; j <= 5; j++) {
            if(i == 1 || i == 7 || j == 3)
                printf("*");
            else
                printf(" ");
        }
        printf("\t");

        for(j = 1; j <= 5; j++) {
            if(j == 1 || (i == 1 || i == 4) && j < 5 || (j == 5 && (i == 2 || i == 3)) || (i > 4 && i - j == 2))
                printf("*");
            else
                printf(" ");
        }
        
        printf("\n"); 
    }

    return 0;
}