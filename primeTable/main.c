//
//  main.c
//  m
//
//  Created by Brian on 11/2/25.
//

#include <stdio.h>
#include "primeTable.h"


int main(){
    
    int x;
    
    primeTable(100000);
    int t = 0;
    while (t != -1) {
        if (t == 0) scanf("%d",&t);
        if (isPrime(t)==1) printf("Prime\n");
        else printf("Not Prime\n");
        scanf("%d",&t);
    }
    killTable();
    
    return 0;
}


