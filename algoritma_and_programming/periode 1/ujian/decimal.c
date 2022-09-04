/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include<stdio.h>

int decimal(int n) {
    for (int i = 7; i >= 0; i--) {
        int k = n >> i; 
        if (k & 1) 
              printf("1");
        else printf("0");
    }
}

int main(){
    int n;
    while(n > 100){
        printf("Masukan bilangan decimal: \n");
        scanf("%d", &n);
    }
    printf("Bilangan binernya adalah: \n");
    decimal(n);
}


