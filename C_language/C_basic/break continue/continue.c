#include <stdio.h>
 
int main(void) 
{
    printf("Loop:\n");
    for (int i = 0; i < 10; i++) {
        if (i != 5) continue;
        printf("%d ", i);       //this statement is skipped each time i!=5
    }
 
    printf("\n\nLoop2:\n");
 
    for (int j = 0; j < 2; j++) {
        for (int k = 0; k < 5; k++) { //only this loop is affected by continue
            if (k == 3) continue;
            printf("j=%d,k=%d\n", j, k);    //this statement is skipped each time k==3
        }
    }
}
