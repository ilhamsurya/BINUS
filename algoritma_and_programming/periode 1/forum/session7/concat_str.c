/******************************************************************************

string pertama = "Binus Online Learning"

string kedua = "Cabang Syahdan"
buat program dengan bahasa c untuk melakukan proses copy dari string kedua ke string pertama. kata yang diambil dari string ke dua mulai dari "bang Syahdan"

*******************************************************************************/
#include <stdio.h>
#include <string.h>

int main(){

    char str[] = "Binus Online Learning";
    char str2[] = "Cabang Syahdan";
    strcat(str,str2+2);
    printf("%s\n", str);
    return 0;

}
