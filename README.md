# Program Penentuan Koefisien Drag Parasutis dengan Metode Biseksi

Repositori ini berisi kode sumber dalam bahasa C untuk Proyek Ujian Akhir Semester mata kuliah Komputasi Numerik. Program ini mengimplementasikan metode Biseksi untuk menyelesaikan sebuah studi kasus dalam bidang rekayasa.

## Informasi Penulis

- [cite_start]**Nama:** M. Avicenna Raffaiz Adiharsa 
- [cite_start]**NPM:** 2206062844 
- [cite_start]**Departemen:** Teknik Elektro, Universitas Indonesia 

## Deskripsi Program

[cite_start]Program ini bertujuan untuk menentukan nilai koefisien drag (`c`) yang bekerja pada seorang parasutis selama proses jatuh bebas. [cite_start]Kasus ini dimodelkan ke dalam sebuah persamaan non-linear yang tidak dapat diselesaikan secara analitik, sehingga memerlukan pendekatan numerik.

[cite_start]Model kecepatan jatuh bebas dengan adanya tahanan udara diberikan oleh persamaan:
`f(c) = (g * m / c) * (1 - e^(-(c/m)*t)) - v`

[cite_start]Tujuan program ini adalah untuk mencari nilai `c` yang membuat `f(c) = 0` menggunakan metode Biseksi.

### Parameter yang Digunakan

[cite_start]Parameter fisis yang digunakan dalam simulasi ini telah didefinisikan di dalam kode sumber:
- [cite_start]**Massa Parasutis (`m`):** 68.1 kg 
- [cite_start]**Kecepatan Target (`v`):** 40.0 m/s 
- [cite_start]**Waktu Jatuh (`t`):** 10.0 detik 
- [cite_start]**Percepatan Gravitasi (`g`):** 9.81 m/s² 

## Metode Numerik yang Diimplementasikan

[cite_start]Program ini menggunakan **Metode Biseksi (Bisection Method)**, yang merupakan salah satu metode bracketing untuk mencari akar dari fungsi kontinu. [cite_start]Metode ini dipilih karena kesederhanaannya dan jaminan konvergensi jika syarat awal terpenuhi.

- [cite_start]**Batas Awal:** `xl = 12` dan `xu = 16` 
- [cite_start]**Kriteria Berhenti:** Proses iterasi dihentikan ketika *approximate relative error* (`ea`) lebih kecil dari toleransi yang ditentukan (0.01%).

## Contoh Hasil Eksekusi

Program akan menampilkan tabel iterasi yang menunjukkan bagaimana interval `[xl, xu]` menyempit dan nilai galat relatif (`ea`) menurun di setiap langkahnya.

```
Iterasi  xl              xu              xr              ea (%)
1       12.000000       16.000000       14.000000       100.000000
2       14.000000       16.000000       15.000000       6.666667
3       14.000000       15.000000       14.500000       3.448276
4       14.500000       15.000000       14.750000       1.694915
5       14.750000       15.000000       14.875000       0.840336
... (dan seterusnya hingga galat < 0.01%) ...

Koefisien drag c = 14.801128
f(c) = -0.000021
```

## Referensi

Chapra, S. C., & Canale, R. P. (2014). *Numerical Methods for Engineers* (7th ed.). [cite_start]McGraw-Hill.
