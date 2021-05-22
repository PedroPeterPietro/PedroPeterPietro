/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int temp1, temp2, x, n = 2;
    scanf("%d %d", &temp1, &temp2);
    
    
    if (n > 0){
        if ( temp1 < 0 && temp2 > 100) {
            x = 1;
            n-= 1;
            printf("%d, %d: %d", temp1, temp2, x);
        }
        
       if(temp2 < 0 && temp1 > 100 ){
        x = 1;
        n-= 1;
            printf("%d, %d: %d", temp1, temp2, x);
}
        if ( n > 1)
        {
         x = 0;
            printf("%d, %d: %d", temp1, temp2, x);
        
        }
    }
        
            


    return 0;
}
