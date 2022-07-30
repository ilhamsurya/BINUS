/******************************************************************************

pointer to function
buat program bahasa c untuk menghitung luas dan keliling persegi panjang dan segitiga sama kaki. gunakan konsep pointer to function


*******************************************************************************/
#include <stdio.h>
#include <math.h>

void luasPersegiPanjang(int panjang, int lebar){
    int luas;
    luas = panjang * lebar;
    printf("luas persegi panjang adalah = %d",luas);
}

void kelilingPersegiPanjang(int panjang, int lebar){
    int keliling;
    keliling = 2 * (panjang + lebar);
    printf("keliling persegi panjang adalah = %d",keliling);
}

void luasSegitiga(int alas, int tinggi){
    float luas;
    luas = (alas*tinggi)/2;
    printf("luas segitiga adalah = %.2f",luas);
}
void kelilingSegitiga(int alas, int tinggi){
    float keliling;
    keliling = (float)(sqrt(pow(alas,2)+pow(tinggi,2))) +alas + tinggi;
    printf("keliling segitiga adalah = %.2f",keliling);
}

int main()
{
    int bangunDatar,pilihan,alas,tinggi,panjang,lebar;
    
    reset:
    printf("Masukan bangun datar:\n");
    printf("1.Segitiga\n");
    printf("2.Persegi Panjang\n");
    scanf("%d",&bangunDatar);
    
    if(bangunDatar == 1){
        resetInput:
        printf("Masukan alas dan tinggi segitiga:");
        scanf("%d %d",&alas,&tinggi);
        if(alas == 0 || tinggi == 0){
            printf("Input tidak valid, ulangi:\n");
            goto resetInput;
        }else{
            resetInput2:
            printf("Masukan operasi:\n");
            printf("1.Mencari Luas\n");
            printf("2.Mencari Keliling\n");
            scanf("%d",&pilihan);
            if(pilihan == 1){
                void (*hitungLuasSegitiga)(int, int);
                hitungLuasSegitiga = &luasSegitiga;
                (*hitungLuasSegitiga)(alas, tinggi);
            }else if (pilihan == 2){
                void (*hitungKelilingsSegitiga)(int, int);
                hitungKelilingsSegitiga = &kelilingSegitiga;
                (*hitungKelilingsSegitiga)(alas, tinggi);
            }else{
                printf("Input tidak valid, ulangi:\n");
                goto resetInput2;
            }
        }
    }else if(bangunDatar == 2){
        resetInput3:
        printf("Masukan panjang dan lebar persegi panjang:");
        scanf("%d %d",&panjang,&lebar);
        if(panjang == 0 || lebar == 0){
            printf("Input tidak valid, ulangi:\n");
            goto resetInput3;
        }else{
            resetInput4:
            printf("Masukan operasi:\n");
            printf("1.Mencari Luas\n");
            printf("2.Mencari Keliling\n");
            scanf("%d",&pilihan);
            if(pilihan == 1){
                void (*hitungLuasPersegiPanjang)(int, int);
                hitungLuasPersegiPanjang = &luasPersegiPanjang;
                (*hitungLuasPersegiPanjang)(panjang, lebar);
            }else if (pilihan == 2){
                void (*hitungKelilingPersegiPanjang)(int, int);
                hitungKelilingPersegiPanjang = &kelilingPersegiPanjang;
                (*hitungKelilingPersegiPanjang)(panjang, lebar);
            }else{
                printf("Input tidak valid, ulangi:\n");
                goto resetInput4;
            }
        }
    } else{
        printf("Input tidak valid, ulangi:\n");
        goto reset;
    }
    return 0;
}
