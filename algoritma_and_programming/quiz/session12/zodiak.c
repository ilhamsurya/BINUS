/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>

char nama[50];
char bulan[10];
int tanggal=0;
char *bintang;

void cariBintang();

int main () {
	char pilihan = 'y';
	do {
        printf("----------------------------------- \n");
        printf("== PROGRAM BINTANG TANGGAL LAHIR == \n");
        printf("----------------------------------- \n");
		printf("Masukkan Nama: "); scanf("%s", nama);
		printf("Masukkan Tanggal Lahir:"); scanf("%d %s", &tanggal, bulan);
		cariBintang(tanggal, bulan);
		
		printf("\nApakah mau mengulang?\n");
	    printf("Jawab (y/t): ");
	    scanf(" %c", &pilihan);
		printf("\n");	
		
	} while (pilihan == 'y');
	
	return 0;	
}

void errorHandling(int tanggal, char bulan[50]) {
    printf("Tidak ada tanggal %d pada bulan %s\n", tanggal, bulan);
}

void cariBintang() {
	if ((strcmp(bulan, "Januari") == 0) || (strcmp(bulan, "januari") == 0))  {
		if (tanggal >= 1 && tanggal < 20) {
			bintang = "Carpicron";	
		} else if (tanggal >= 20 && tanggal <= 31) {
			bintang = "Aquarius";
		} else {
			errorHandling(tanggal,"Januari");
			bintang = "-";
		}
	} else if ((strcmp(bulan, "Februari") == 0) || (strcmp(bulan, "februari") == 0)) {
		if (tanggal > 0 && tanggal < 19) {
			bintang = "Aquarius";	
		} else if (tanggal > 18 && tanggal < 29) {
			bintang = "Pisces";
		} else {
			errorHandling(tanggal,"Februari");
			bintang = "-";
		}
	} else if ((strcmp(bulan, "Maret") == 0) || (strcmp(bulan, "maret") == 0))  {
		if (tanggal > 0 && tanggal < 21) {
			bintang = "Pisces";	
		} else if (tanggal > 20 && tanggal < 31) {
			bintang = "Aries";
		} else {
			errorHandling(tanggal,"Maret");
			bintang = "-";
		}
	} else if ((strcmp(bulan, "April") == 0) || (strcmp(bulan, "april") == 0)) {
		if (tanggal > 0 && tanggal < 20) {
			bintang = "Aries";	
		} else if (tanggal >= 20 && tanggal < 31) {
			bintang = "Taurus";
		} else {
			errorHandling(tanggal,"April");
			bintang = "-";
		}
	} else if ((strcmp(bulan, "Mei") == 0) || (strcmp(bulan, "mei") == 0)) {
		if (tanggal > 0 && tanggal < 21) {
			bintang = "Taurus";	
		} else if (tanggal >= 21 && tanggal < 31) {
			bintang = "Gemini";
		} else {
			errorHandling(tanggal,"Mei");
			bintang = "-";
		}
	} else if ((strcmp(bulan, "Juni") == 0) || (strcmp(bulan, "juni") == 0))  {
		if (tanggal > 0 && tanggal < 21) {
			bintang = "Gemini";	
		} else if (tanggal >= 21 && tanggal < 31) {
			bintang = "Cancer";
		} else {
			errorHandling(tanggal,"Juni");
			bintang = "-";
		}
	} else if ((strcmp(bulan, "Juli") == 0) || (strcmp(bulan, "juli") == 0))  {
		if (tanggal > 0 && tanggal < 23) {
			bintang = "Cancer";	
		} else if (tanggal >= 23 && tanggal < 32) {
			bintang = "Leo";
		} else {
			errorHandling(tanggal,"Juli");
			bintang = "-";
		}
	} else if ((strcmp(bulan, "Agustus") == 0) || (strcmp(bulan, "agustus") == 0))  {
		if (tanggal > 0 && tanggal < 23) {
			bintang = "Leo";	
		} else if (tanggal >= 23 && tanggal < 32) {
			bintang = "Virgo";
		} else {
			errorHandling(tanggal,"Agustus");
			bintang = "-";
		}
	} else if ((strcmp(bulan, "September") == 0) || (strcmp(bulan, "september") == 0))  {
		if (tanggal > 0 && tanggal < 23) {
			bintang = "Virgo";	
		} else if (tanggal >= 23 && tanggal < 31) {
			bintang = "Libra";
		} else {
			errorHandling(tanggal,"September");
			bintang = "-";
		}
	} else if ((strcmp(bulan, "Oktober") == 0) || (strcmp(bulan, "oktober") == 0))  {
		if (tanggal > 0 && tanggal < 23) {
			bintang = "Libra";	
		} else if (tanggal >= 23 && tanggal < 32) {
			bintang = "Scorpio";
		} else {
			errorHandling(tanggal,"Oktober");
			bintang = "-";
		}
	} else if ((strcmp(bulan, "November") == 0) || (strcmp(bulan, "november") == 0))  {
		if (tanggal > 0 && tanggal < 22) {
			bintang = "Scorpio";	
		} else if (tanggal >= 22 && tanggal < 31) {
			bintang = "Sagitarius";
		} else {
			errorHandling(tanggal,"November");
			bintang = "-";
		}
	} else if ((strcmp(bulan, "Desember") == 0) || (strcmp(bulan, "desember") == 0))  {
		if (tanggal > 0 && tanggal < 22) {
			bintang = "Sagitarius";	
		} else if (tanggal > 21 && tanggal < 32) {
			bintang = "Carpicorn";
		} else {
			errorHandling(tanggal,"Desember");
			bintang = "-";
		}
	} else {
		printf("Format Bulan Salah\n");
		bintang = "-";
	}
	
	printf("\nNama: %s\n", nama);
	printf("Bintang: %s\n", bintang);
	printf("Tanggal Lahir: %d %s\n", tanggal, bulan);
}