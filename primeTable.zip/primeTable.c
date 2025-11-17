//
//  primeTable.c
//  m
//
//  Created by Brian on 11/13/25.
//

#include "primeTable.h"
#include <stdlib.h>

int* table = 0; // size까지의 소수 여부 저장

void primeTable(int size) {
    
    table = calloc(size+1, sizeof(int));
    for(int i=2;i<size;i++){
        if(table[i]==0){
            for(int k=2;k*i<=size;k++) table[k*i] = 1;
        }
    }
    
}

int isPrime(int n) {

    if(n<2){
        return -1;
    }
    if(table[n]==0){
        return 1;
    }else{
        return 0;
    }
}

void killTable(){
    free(table);
}
