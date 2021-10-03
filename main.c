#include <stdio.h>
#include <stdlib.h>

int main()
{/*
    int count = 0;
    while(count <= 255){
        printf("ASCII value of %c is %d\n\n\n" , count , count );
        count++;
    }
    return 0;
    */

    int i , s ;
    printf("SQUARE ROOT OF FIRST TWENTY NUMBERS.");
    for(i=0; i<=20; i++){
            s = i * i ;
        printf("\n\n\n%d %d" , i , s);
    }
}
