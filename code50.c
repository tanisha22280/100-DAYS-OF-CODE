// Write a program to print the following pattern:
//*****
 //****
  //***
   //**
    //*
#include <stdio.h>

int main() {
    int i, j;
    int n = 5; 

    for (i = n; i >= 1; i--) {         
        
        for (j = 0; j < n - i; j++) {
            printf(" ");
        }
        
        for (j = 0; j < i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
