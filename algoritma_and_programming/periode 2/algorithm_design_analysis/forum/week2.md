# Session 3 Forum
## Stack, Queue, dan Priority Queue
Stack & Queue merupakan ADT yang menggunakan konsep LIFO (stack) dan FIFO (queue). Dalam hal ini penting bagi teman-teman untuk memahami bagaimana data masuk dan keluar. Silahkan dibahas bersama dan (jika ada) dengan contoh2 yang bisa dicari dari banyak sumber.

### Jawab
Data struktur Stack, Queue, Priority Queue

1. Stack adalah metode penyimpanan data yang memiliki sifat Last In First Out, dimana aturan ini diimplementasi saat melakukan operasi insert dan delete data. Data yang diinsert secara otomatis akan selalu menjadi tumpukan yang paling atas sehingga urutannya penghapusannya pun akan menghapus yang paling atas terlebih dahulu.
=> Implementasi Stack dapat digunakan untuk proses algoritma backtracking dan sering digunakan untuk proses implementasi algoritma reverse

2. Queue adalah metode penyimpanan data yang memiliki sifat First In First Out, yang sama seperti stack, aturan ini akan mempengaruhi proses insert dan delete data pada queue. Data yang diinsert terakhir akan masuk ke barisan akhir data tetapi untuk penghapusan, data yang pertama akan dihapus ialah data yang paling awal.
=> Implementasi Queue dapat digunakan pada proses asynchronous seperti Buffer dan Pipes. dan dapat juga digunakan untuk proses scheduler

3. Priority Queue adalah Queue yang mengikuti aturan Highest Priority In First Out. Dimana yang membedakannya dengan queue adalah elemen yang akan diambil atau dihapus adalah elemen yang memiliki prioritas tertinggi tersebut didahulukan. Dimana prioritas ini tentunya akan bergantung dengan kebutuhan implementasi oleh user.
=> Implementasi Priority Queue dapat digunakan untuk implementasi algoritma Dijkstra's Shortest Path

## Linked List
Linked list terdiri dari urutan elemen atau simpul (node) terbatas yang berisi informasi dan (kecuali mungkin yang terakhir) tautan (link) ke simpul (node) lain. Pada linked list terdapat dua operasi utama yaitu penyisipan (insert) dan penghapusan (delete/pop). Silakan teman-teman simulasikan bagaimana penyisipan dan penghapusan terjadi pada linked list!

### Jawab
Pada linkedlist sendiri untuk operasi insert dan delete, dijelaskan dengan rinci sesuai dengan illustrasi yang saya lampirkan.
1. Proses insert linked list dilakukan dengan cara memeriksa terlebih dahulu apakah terdapat root atau tidak dan apakah node sebelumnya ada atau tidak. Setelah mendapatkan informasi tersebut, maka akan dibuatlah satu node baru yang belum mengarhkan kemana mana. Dan dari sini list yang berperan sebagai rootnya dapat mengarahkan pointer ke node baru sehingga terbentuklah node baru di barisan linked list tersebut.
2. Proses delete linked list dilakukan dengan cara memutuskan pointer yang mengarah ke node. Proses ini akan mengeluarkan baik itu node diawal maupun node diakhir. Apabila yang dihapus yang diawal, maka posisi root akan berpindah ke node selanjutnya dan apabila node terakhir yang dihapus, maka cukup dengan memutuskan pointer yang mengarah ke node terakhir.
