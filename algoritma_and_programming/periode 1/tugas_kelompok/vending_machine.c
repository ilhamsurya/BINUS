#include <stdio.h>
#include <stdlib.h>
#include <string.h>
  
#define MAX_SIZE 256
  
typedef struct {
    char minuman[50];
    char size[50];
    char penyajian[50];
	double harga;
} Minuman;
  
// Example line: Fri 2/12 6.00 AUS - USA 1-1 29534
int read_dataminuman(const char *filename, Minuman *minum) {
    FILE *fin = fopen("dataminuman.txt", "r");
  
    int i = 0;
    while (fscanf(fin,"%s, %s , %s , %d", 
             minum[i].minuman,
			 minum[i].size,
			 minum[i].penyajian,
			 &minum[i].harga) == 4)
        ++i;
    fclose(fin);
    return i;
}
  
void print_dataminuman(Minuman *minum, int size) {
    for (int i = 0; i < size; ++i) {
        Minuman *m = &minum[i];
        printf("%s,%s,%s,%2d\n",
            m->minuman,
			m->size,
			m->penyajian,
			m->harga);
    }
}

void pilih_minuman() {
	int pilihMinuman, pilihSize, pilihPenyajian, harga;
	char pilihan;
	char minuman[4][50] = {"Kopi","Teh","Cokelat","Soda"};
	char size[3][50] = {"Small","Medium","Large"};
	char penyajian[4][50] = {"Dingin","Panas","Hangat"};
	
	do {
		printf("Daftar Minuman: \n");
	    printf("1.Kopi \n");
	    printf("2.Teh \n");
	    printf("3.Cokelat \n");
	    printf("4.Soda \n");
	    printf("Pilih : "); scanf("%d", &pilihMinuman);	
	} while (pilihMinuman > 4);
	printf("\n");
	do {
		printf("Daftar Size: \n");
	    printf("1.Small \n");
	    printf("2.Medium \n");
	    printf("3.Large \n");
	    printf("Pilih : "); scanf("%d", &pilihSize);	
	} while (pilihMinuman > 3);
	printf("\n");
	do {
		printf("Daftar Penyajian: \n");
	    printf("1.Dingin \n");
	    printf("2.Panas \n");
	    printf("3.Hangat \n");
	    printf("Pilih : "); scanf("%d", &pilihPenyajian);	
	} while (pilihPenyajian > 3);
	printf("\n");
	
	harga = strlen(minuman[pilihSize-1]) * strlen(minuman[pilihMinuman-1]) * strlen(minuman[pilihPenyajian-1]) * 100;
	
	printf("Detail Pesanan: \n");
    printf("Nama: %s \n", minuman[pilihMinuman-1]);
	printf("Size: %s \n", size[pilihSize-1]);
	printf("Penyajian: %s \n", penyajian[pilihPenyajian-1]);
	printf("Harga: %d \n", harga);
	
	printf("Simpan Pesanan (y/n) \n"); scanf(" %c", &pilihan);
	
	 if(pilihan == 'y' || pilihan == 'Y'){
	    char *filename = "history.txt";
	
	    // open the file for writing
	    FILE *fp = fopen(filename, "w");
	    if (fp == NULL)
	    {
	        printf("Error opening the file %s", filename);
	    }
	    // write to the text file
		for (int i = 0; i < strlen(minuman[pilihMinuman-1]); i++){
			char ch = minuman[pilihMinuman-1][i];
			fputc(ch, fp);
		}
		fputc(',', fp);
		for (int i = 0; i < strlen(size[pilihSize-1]); i++){
			char ch = size[pilihSize-1][i];
			fputc(ch, fp);
		}
		fputc(',', fp);
		for (int i = 0; i < strlen(penyajian[pilihPenyajian-1]); i++){
			char ch = penyajian[pilihPenyajian-1][i];
			fputc(ch, fp);
		}
	    // close the file
	    fclose(fp);
	    printf("Pesanan Telah Disimpan \n");
	 }
}
  
int main() {
    Minuman minum[MAX_SIZE];
    char choice;
    int pilihMinuman;
    int size = read_dataminuman("history.txt", minum);
    print_dataminuman(minum, size);
    
	do {
		//create a "console menu":
		printf("\n");
		printf("+----------------------------------------------------------------+\n");
		printf("+-------------------------TOKO MINUMAN--------------------------+\n");
		printf("+----------------------------------------------------------------+\n");
	    printf("1.Input Data Minuman\n");
	    printf("2.Lihat History\n");
	    printf("3.Delete History\n");
	    printf("4.Exit\n");
		printf("Input pilihan : ");
		fflush(stdin); 
		//remove "enter" buttona
		choice = getchar();
		while (choice == '\n') {
			choice = getchar();
		}		
		switch (choice) {
		case '1':
			printf("\n");
			pilih_minuman();
			break;
		case '2':
			print_dataminuman(minum,size);
	        break;
	    case '3':

	        break;    
		} 
	} while (choice != '4');
	return 0;
}