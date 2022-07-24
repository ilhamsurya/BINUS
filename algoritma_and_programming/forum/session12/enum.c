/******************************************************************************

buat program bahasa c untuk input bilangan dimana setiap bilangan yang merupakan bilangan prima akan muncul pesan dan selain itu muncul pesan bukan bilangan prima


*******************************************************************************/
#include <stdio.h>

enum isPrime {
    true,
    false
};

int main(){
    int n, i, c = 0;
    enum isPrime prime;
    printf("Masukan bilangan bulat positif ");
    scanf("%d", &n);
    
    for (i = 1; i <= n; i++) {
        if (n % i == 0) {
            c++;
        }
    }

    if (c == 2){
        prime = true;
    }else{
        prime = false;
    }

    if(prime == true){
        printf("Bilangan %d merupakan prima", n);
    }else{
        printf("Bilangan %d bukan prima", n);
    }

    return 0;
}
