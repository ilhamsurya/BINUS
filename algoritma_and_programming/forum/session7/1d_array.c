/******************************************************************************

one dimension array
buat program dengan bahasa c untuk menampilkan bilangan dari nol sampai bilangan dua ratus lima puluh dengan menggunkana konsep one dimensional array



*******************************************************************************/
#include <stdio.h>

const int MAX = 250;
 
int main () {

   int arr[MAX];
   int i;
 
   for (i = 0; i <= MAX; i++) {
        arr[i] = i;
        printf("Nilai dari arr[%d] = %d\n", i, arr[i] );
   }
   
   return 0;
}