/******************************************************************************

Keliling lingkaran using macro
*******************************************************************************/
#include <stdio.h>
#define PI 3.14

int main()
{
    float r, keliling;
    
    printf("Masukkan jari-jari lingkaran: ");
    scanf("%f", &r);
    
    keliling = 2 * PI * r;
    printf("Keliling lingkaran adalah: %.2f",keliling);
    
    return 0;
}
