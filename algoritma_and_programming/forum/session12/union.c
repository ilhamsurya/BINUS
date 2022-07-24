/******************************************************************************
buat program bahasa c untuk menampilkan data di ktp dengan menggunakan konsep union. semua variabel di ktp ditampilkan

*******************************************************************************/
#include <stdio.h>

union Ktp {
    char *nik;
    char *nama;
    char *tanggalLahir;
    char *tempatLahir;
    char *jenisKelamin;
    char *alamat;
    char *rt;
    char *rw;
    char *kelurahan;
    char *kecamatan;
    char *agama;
    char *status;
    char *pekerjaan;
    char *kewarganegaraan;
    char *berlakuHingga;
};


int main()
{
    union Ktp data;
    
    data.nik = "17010129283619";
    data.nama = "Muhammad Ilham Surya";
    data.tanggalLahir = "27 Oktober 2000";
    data.tempatLahir = "Indonesia";
    data.jenisKelamin = "Laki Laki";
    data.alamat = "Jl Nusantara No 71";
    data.rt = "07";
    data.rw = "01";
    data.kelurahan = "Merdeka";
    data.kecamatan = "Persatuan";
    data.agama = "Islam";
    data.status = "Belum Menikah";
    data.pekerjaan = "Pekerja Swasta";
    data.kewarganegaraan = "Indonesia";
    data.berlakuHingga = "Seumur Hidup";
    
    printf("Data KTP (Rekayasa)\n=================================================================\n");
    printf("NIK: %s\n", data.nik);
    printf("Nama: %s\n", data.nama);
    printf("Tempat Dan tanggal lahir: %s %s\n", data.tempatLahir, data.tanggalLahir);
    printf("Jenis Kelamin: %s\n", data.jenisKelamin);
    printf("Alamat: %s\n", data.alamat);
    printf("RT/RW: %s %s\n", data.rt, data.rw);
    printf("Kelurahan: %s\n", data.kelurahan);
    printf("Kecamatan: %s\n", data.kecamatan);
    printf("Agama: %s\n", data.agama);
    printf("Status Perkawinan: %s\n", data.status);
    printf("Pekerjaan: %s\n", data.pekerjaan);
    printf("Kewarganegaraan: %s\n", data.kewarganegaraan);
    printf("Berlaku Hingga: %s\n", data.berlakuHingga);
    return 0;
}
