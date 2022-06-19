#include <stdio.h>
#include <stdbool.h>
#include <string.h>

    char *strrev(char *str)
    {
          char *p1, *p2;
    
          if (! str || ! *str)
                return str;
          for (p1 = str, p2 = str + strlen(str) - 1; p2 > p1; ++p1, --p2)
          {
                *p1 ^= *p2;
                *p2 ^= *p1;
                *p1 ^= *p2;
          }
          return str;
    }
    
    int main(int argc, char const *argv[])
    {
        char str1[20], str2[20], str3[40]; // declaration of char array  
        printf("Kalimat 1 : ");  
        scanf("%s", str1);  
        printf("\nKalimat 2 :");  
        scanf("%s",str2);  
        strcpy(str3, str1);
        strcat(strcat(str3, " "),str2);
        printf("Gabungan 2 buah inputan kalimat : %s",str3);  
        printf("\nHasil membalik kalimat gabungan: %s ", strrev(str3));   
        printf("\nJumlah Huruf kalimat pertama  = %d\n", strlen(str1));
        printf("\nJumlah Huruf kalimat kedua = %d\n", strlen(str2));
        printf("\nTotal Jumlah huruf = %d\n", strlen(str1)+strlen(str2));
        printf("\nTotal Perkalian kalimat = %d\n", strlen(str1)*strlen(str2));
        return 0;
    }
