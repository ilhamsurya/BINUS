/******************************************************************************

Buatlah program sederhana untuk mengganti huruf vokal dengan spasi dalam sebuah string!

(Petunjuk: string adalah array of character)



Contoh input:

Masukkan kalimat = Saya adalah mahasiswa Binus



Contoh output:

Hasil = S y  d l h m h s sw B n s

*******************************************************************************/
#include <stdio.h>
#include <string.h>

int main()
{
    char vokal[] = "aiueoAIUEO", kalimat[100];
    
    printf("Input kalimat \t");
    fgets(kalimat, 100, stdin);
    for(int i=0; i<strlen(kalimat); i++){
        for(int j=0; j<strlen(vokal); j++){
            if(kalimat[i] == vokal[j]){
                kalimat[i] = ' ';
            }
        }
    }
    printf("Output : %s", kalimat);
    return 0;
}
