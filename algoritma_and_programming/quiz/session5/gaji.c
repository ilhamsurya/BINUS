/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main () {
    int gajiTotal, gajiPokok = 2000000, tunjanganJabatan, tunjanganPendidikan=0, tunjanganLembur;
    char nama[50],pendidikan[5];
    int jam,jabatan, pend=4;
    
    printf("-------------------------------- \n");
    printf("== PROGRAM HITUNG GAJI KARYAWAN == \n");
    printf("-------------------------------- \n");
    
    printf("Nama Karyawan \t");
    fgets(nama, 50, stdin);
    
    printf("Golongan Jabatan \t");
    scanf("%d", &jabatan);
    
    while(jabatan > 3){
        printf("Jabatan tidak terdata, harap masukkan kembali ");
        scanf("%d", &jabatan);
    }
    switch(jabatan){
        case 1: 
            tunjanganJabatan = gajiPokok * 0.05;
            break;
        case 2: 
            tunjanganJabatan = gajiPokok * 0.1;
            break;
        case 3: 
            tunjanganJabatan = gajiPokok * 0.15;
            break;
    }
    printf("Pendidikan: \t");
    scanf("%s", pendidikan);
    while(pend > 3){
        if(strcmp(pendidikan, "SMA") == 0 || strcmp(pendidikan, "sma") == 0){
            pend--;
            tunjanganPendidikan = gajiPokok * 0.0025;
        } else if(strcmp(pendidikan, "D3") == 0 || strcmp(pendidikan, "d3") == 0){
            pend--;
            tunjanganPendidikan = gajiPokok * 0.05;
        } else if(strcmp(pendidikan, "S1") == 0 || strcmp(pendidikan, "s1") == 0){
            pend--;
            tunjanganPendidikan = gajiPokok * 0.1;
        } else{
            printf("Pendidikan tidak terdata, harap masukkan kembali ");
            scanf("%s", pendidikan);
        }
    }
    
    printf("Jumlah Jam Kerja \t");
    scanf("%d", &jam);
    
    if(jam > 8){
        jam = jam - 8;
        tunjanganLembur = jam * 3000;
    }
    
    gajiTotal = gajiPokok + tunjanganJabatan + tunjanganPendidikan + tunjanganLembur;
    
    printf("Nama Karyawan : %s \n", nama);
    printf("  Tunjangan Jabatan Rp. %d \n", tunjanganJabatan);
    printf("  Tunjangan Pendidikan Rp. %d \n", tunjanganPendidikan);
    printf("  Honor Lembur Rp. %d \n", tunjanganLembur);
    printf("Total Gaji : %d \n", gajiTotal);
    return 0;
}



