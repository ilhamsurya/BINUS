/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main(){

int n;

int input_beras =0, input_mie=0, input_gula=0;

printf("input berapa kali jumlah pengiriman\n");

scanf("%d",&n);

for(int i=0; i<n; i++){

int beras,mie,gula;

printf("input berapa kilo beras\n");

scanf("%d",&beras);

printf("input berapa dus mie\n");

scanf("%d",&mie);

printf("input berapa kilo gula\n");

scanf("%d",&gula);

input_beras += beras;

input_mie += mie;

input_gula += gula;

}

int pengiriman;

input_beras = (input_beras/5);

if(input_beras % 5 != 0){

input_beras += 1;

}

input_mie= (input_mie/3);

input_gula= (input_gula/5);

pengiriman = input_beras + input_mie + input_gula;

printf("total jumlah pengiriman adalah: %d",pengiriman);

return 0;

}