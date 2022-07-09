/******************************************************************************

array of pointer
buat program dengan bahasa c untuk menampilkan output bilangan satu sampai lima ratus. gunakan konsep array of pointer


*******************************************************************************/
#include <stdio.h>

const int MAX = 500;
 
int main () {

   int var[MAX], arr[MAX];
   int i;
 
   for (i = 0; i < MAX; i++) {
        arr[i] = i+1;
        var[i] = arr[i];
        printf("Nilai dari arr[%d] = %d\n", i, var[i] );
   }
   
   return 0;
}