/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {	
	char choice;
	int jumlahDosen = 0;
    struct Alamat{
        char namaJalan[50];
        char noRumah[50];
        char kota[50];
        char provinsi[50];
    };
    
    struct TanggalLahir{
        char tanggal[50];
        char bulan[50];
        char tahun[50];
    };
    struct{
        char noDosen[50];
        char NIDN[50];
        char nama[50];
        char tempat[50];
        struct Alamat alamatDosen;
        struct TanggalLahir tglLahir;
    }Dosen[5];

	do {
		//create a "console menu":
		printf("+----------------------------------------------------------------+\n");
		printf("+---------------------INPUT DATA DOSEN--------------------------+\n");
		printf("+----------------------------------------------------------------+\n");
        printf("1.Input Data Profil Dosen\n");
        printf("2.Print Data Dosen\n");
        printf("2.Keluar Dari Program\n");
		printf("Input pilihan : ");
		fflush(stdin); 
		//remove "enter" buttona
		choice = getchar();
		while (choice == '\n') {
			choice = getchar();
		}		
		switch (choice) {
		case '1':
		    for (int i=0; i < 5; i++) {
                printf("Nomor Dosen = "); scanf("%s",&Dosen[i].noDosen);
                printf("Nama  Dosen = "); scanf("%s",&Dosen[i].nama);
                printf("No Rumah "); scanf("%s",&Dosen[i].alamatDosen.noRumah);
                printf("Nama Jalan "); scanf("%s",&Dosen[i].alamatDosen.namaJalan);
                printf("Kota "); scanf("%s",&Dosen[i].alamatDosen.kota);
                printf("Provinsi "); scanf("%s",&Dosen[i].alamatDosen.provinsi);
                printf("Tanggal = "); scanf("%s",&Dosen[i].tglLahir.tanggal);
                printf("Bulan = "); scanf("%s",&Dosen[i].tglLahir.bulan);
                printf("Tahun = "); scanf("%s",&Dosen[i].tglLahir.tahun);
                jumlahDosen++;
            }
			break;
		case '2':
		    printf("|No | Nama | No Dosen |  \n");
		    for (int i=0; i < jumlahDosen; i++) {
                 printf("|%i | %s | %s |%s\n",i+1,Dosen[i].noDosen,Dosen[i].nama,Dosen[i].noDosen);
            }
		    printf("|No Rumah | Nama Jalan | Kota | Provinsi \n");
		    for (int i=0; i < jumlahDosen; i++) {
                 printf("|%i | %s | %s |%s | %s\n",i+1,Dosen[i].alamatDosen.noRumah,Dosen[i].alamatDosen.noRumah,Dosen[i].alamatDosen.kota,Dosen[i].alamatDosen.provinsi);
            }
		    printf("|Tanggal | Bulan | Tahun \n");
		    for (int i=0; i < jumlahDosen; i++) {
                 printf("|%i | %s | %s |%s\n",i+1,Dosen[i].tglLahir.tanggal,Dosen[i].tglLahir.bulan,Dosen[i].tglLahir.tahun);
            }
		}
	} while (choice != '3');
}