//
//  main.c
//  prime_check
//
//  Created by Betz Peter on 19.05.16.
//  Copyright © 2016 allegro. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n;
    int c;
    
    printf("Enter a number to check if it is prime\n");
    scanf("%d ",&n);
    
 for ( c = 2 ; c <= (int)sqrt(n) ; c++ )
    {
        if ( c%n == 0)
            
        {
            printf("%d is not prime.\n", n);
            break;
        }
    }
    if ( c == n )
        printf("%d is prime.\n", n);
    printf("Hello, World!\n");
    return 0;
}
