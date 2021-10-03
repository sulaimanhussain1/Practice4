complete.C


/* ARITHMETIC OPERATORS */

#include <stdio.h>
#include <conio.h>
void main()
{
    int first , second , sum ;
    clrscr();
    printf("Enter a first number " , first);
    scanf("%d" &first );
    printf("Enter a second number" , second);
    scanf("%d" &second );
    sum = first + second ;
    printf("YOUR TOTAL SUM IS %d", sum  );
    getch();
}