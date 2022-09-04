/******************************************************************************
recursive function
buat program dengan bahasa c untuk membuat program menampilkan bilangan prima yang 
kurang dari lima ratus. gunakan konsep recursive function untuk membuat program tersebut
*******************************************************************************/
#include <stdio.h>

void primeNumber(int n){
    int i,j;
    for(i=2;i<=n;i++){
        for(j=2;j<=i;j++){
            if(i%j==0){
                break;
            }
        }
        if(i==j){
            printf("%d\n",i);
        }
    }
}

int main() {
    int max = 500;
    printf("Daftar Bilangan Prima kurang dari 500:\n");
    primeNumber(max);
    return 0;
}
