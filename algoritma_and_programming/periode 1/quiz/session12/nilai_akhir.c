/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

struct MataKuliah{
    char namaMatKul[50];
    int nilaiHadir;
    int nilaiTugas;
    int nilaiQuiz;
    int nilaiForum;
    int nilaiUAS;
};

struct Mahasiswa{
    char nim[50];
    char nama[50];
    struct MataKuliah matkul;
};


int kalkulasiNilai(struct Mahasiswa mahasiswa){
    int nilaiAkhir;
    nilaiAkhir = (mahasiswa.matkul.nilaiHadir * 0.1) + (mahasiswa.matkul.nilaiTugas * 0.2) + (mahasiswa.matkul.nilaiQuiz * 0.1) 
    + (mahasiswa.matkul.nilaiForum * 0.1) + (mahasiswa.matkul.nilaiUAS * 0.3);
    return nilaiAkhir;
}


int main() {	
	char choice,grade;
	char inputNim[50],currName[50];
	int mahasiswaChoice, matkulChoice, editMahasiswa;
	int mahasiswaInput = 0;
	int jumlahMahasiswa = 0;
    
    struct Mahasiswa mahasiswa[10];

	do {
		//create a "console menu":
		printf("+----------------------------------------------------------------+\n");
		printf("+---------------------NILAI AKHIR MAHASISWA----------------------+\n");
		printf("+----------------------------------------------------------------+\n");
        printf("1.Input Data Mahasiswa\n");
        printf("2.Input Nilai\n");
        printf("3.Lihat Nilai Mahasiswa & Status\n");
        printf("4.Lihat Data Mahasiswa\n");
        printf("5.Keluar Dari Program\n");
		printf("Input pilihan : ");
		fflush(stdin); 
		//remove "enter" buttona
		choice = getchar();
		while (choice == '\n') {
			choice = getchar();
		}		
		switch (choice) {
		case '1':
            printf("Nama Mahasiswa = "); scanf("%s", &mahasiswa[jumlahMahasiswa].nama);
            currName[50] == &mahasiswa[jumlahMahasiswa].nama;
            if(jumlahMahasiswa >= 1){
                for(int i=0; i<jumlahMahasiswa; i++){
                    if(strcmp(currName, mahasiswa[jumlahMahasiswa].nama) == 0){
                        printf("Nama Duplikat");
                    }
                }
            }
            printf("Nim Mahasiswa = "); scanf("%s",&mahasiswa[jumlahMahasiswa].nim);
            printf("Mata Kuliah = "); scanf("%s",&mahasiswa[jumlahMahasiswa].matkul.namaMatKul);
            jumlahMahasiswa++;
        
			break;
		case '2':
		    printf("Mahasiswa Terdaftar: \n");
		    for (int i=0; i < jumlahMahasiswa; i++) {
                printf("%i. %s \n", i+1, mahasiswa[i].nama);
            }
            ulangInput:
            printf("input mahasiswa: "); scanf("%d",&mahasiswaChoice);
            fflush(stdin); 
            if(mahasiswaChoice > jumlahMahasiswa){
                printf("Mahasiswa tidak Terdaftar, harap ulang input");
                goto ulangInput;
            }else{
                 printf("Input Nilai Mata Kuliah %s: \n", mahasiswa[mahasiswaChoice-1].matkul.namaMatKul);
                 printf("Nilai Hadir = "); scanf("%d",&mahasiswa[mahasiswaChoice-1].matkul.nilaiHadir);
                 printf("Nilai Tugas = "); scanf("%d",&mahasiswa[mahasiswaChoice-1].matkul.nilaiTugas);
                 printf("Nilai Quiz = "); scanf("%d",&mahasiswa[mahasiswaChoice-1].matkul.nilaiQuiz);
                 printf("Nilai Forum = "); scanf("%d",&mahasiswa[mahasiswaChoice-1].matkul.nilaiForum);
                 printf("Nilai UAS = "); scanf("%d",&mahasiswa[mahasiswaChoice-1].matkul.nilaiUAS);
            }
            break;
        case '3':
            nimNotFound:
            printf("input Nim Mahasiswa: "); scanf("%s",&inputNim);
            for(int i=0; i<jumlahMahasiswa; i++){
                if(strcmp(mahasiswa[i].nim, inputNim) == 0){
                    editMahasiswa = i;
                }else{
                    printf("Mahasiswa tidak ditemukan, harap input ulang \n");
                    fflush(stdin);
                    goto nimNotFound;
                }
            }
            int nilaiMhs = kalkulasiNilai(mahasiswa[editMahasiswa]);
            
            if(nilaiMhs >= 90 && nilaiMhs <= 100){
                grade = 'A';
            } else if (nilaiMhs >= 80 && nilaiMhs <= 89){
                grade = 'B';
            } else if (nilaiMhs >= 70 && nilaiMhs <= 79){
                grade = 'C';
            } else if (nilaiMhs >= 60 && nilaiMhs <= 69){
                grade = 'D';
            } else {
                grade = 'E';
            }
            printf("Nilai Akhir: %d \n", nilaiMhs);
            printf("Grade: %c \n", grade);
            if(grade == 'E'){
                printf("Selamat anda tidak lulus \n");
            }else{
                printf("Selamat anda lulus \n");
            }    
            
            break;
            
		case '4':
		    printf("|No | Nim Mahasiswa | Nama Mahasiswa | Matkul  \n");
		    for (int i=0; i < jumlahMahasiswa; i++) {
                 printf("|%i | %s | %s |%s\n",i+1,mahasiswa[i].nim,mahasiswa[i].nama,mahasiswa[i].matkul.namaMatKul);
            }
		}
	} while (choice != '5');
}