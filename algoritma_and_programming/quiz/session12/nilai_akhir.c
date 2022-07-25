/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

struct Mahasiswa


int main() {	
	char choice;
	int jumlahMahasiswa;
    struct{
        char nim[12];
        char nama[50];
        struct MataKuliah matkul;
    }Mahasiswa[jumlahMahasiswa];
    struct MataKuliah{
        int nama;
        int nilaiHadir;
    };
	do {
		//create a "console menu":
		printf("+----------------------------------------------------------------+\n");
		printf("+---------------------NILAI AKHIR MAHASISWA----------------------+\n");
		printf("+----------------------------------------------------------------+\n");
        printf("1.Input Data Mahasiswa\n");
        printf("2.Input Nilai\n");
        printf("3.Lihat Nilai Mahasiswa & Status\n");
        printf("4.Keluar Dari Program\n");

		printf("Input pilihan : ");
		fflush(stdin); 
		//remove "enter" buttona
		choice = getchar();
		while (choice == '\n') {
			choice = getchar();
		}		
		switch (choice) {
		case '1':
			printf("Number of students : "); scanf("%d", &jumlahMahasiswa);
			fflush(stdin);
		    for (int i=0; i < jumlahMahasiswa; i++) {
                 printf("Nama = "); scanf("%s",&Mahasiswa[i].nama);
                 printf("Nim = "); scanf("%s",&Mahasiswa[i].nim);
                 printf("Mata Kuliah = "); scanf("%s",&Mahasiswa[i].matkul.nama);
            }
			break;
		case '2':
		    printf("|No | Nama | NIM | Mata Kuliah | \n");
		    for (int i=0; i < jumlahMahasiswa; i++) {
                 printf("|%i | %s | %s |%s\n",i+1,Mahasiswa[i].nama,Mahasiswa[i].nim,Mahasiswa[i].matkul.nama);
            }
		}
	} while (choice != '4');
	
	
}