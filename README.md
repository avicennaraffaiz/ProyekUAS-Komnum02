# Program Penentuan Koefisien Drag Parasutis dengan Metode Biseksi

Repositori ini berisi kode sumber dalam bahasa C untuk Proyek Ujian Akhir Semester mata kuliah Komputasi Numerik. Program ini mengimplementasikan metode Biseksi untuk menyelesaikan sebuah studi kasus dalam bidang rekayasa.

## Informasi Penulis

- **Nama:** M. Avicenna Raffaiz Adiharsa 
- **NPM:** 2206062844 

## Deskripsi Program
Program ini bertujuan untuk menentukan nilai koefisien drag (`c`) yang bekerja pada seorang parasutis selama proses jatuh bebas. [cite_start]Kasus ini dimodelkan ke dalam sebuah persamaan non-linear yang tidak dapat diselesaikan secara analitik, sehingga memerlukan pendekatan numerik.

Model kecepatan jatuh bebas dengan adanya tahanan udara diberikan oleh persamaan:
`f(c) = (g * m / c) * (1 - e^(-(c/m)*t)) - v`

Tujuan program ini adalah untuk mencari nilai `c` yang membuat `f(c) = 0` menggunakan metode Biseksi.

### Parameter yang Digunakan

Parameter fisis yang digunakan dalam simulasi ini telah didefinisikan di dalam kode sumber:
- **Massa Parasutis (`m`):** 68.1 kg 
- **Kecepatan Target (`v`):** 40.0 m/s 
- **Waktu Jatuh (`t`):** 10.0 detik 
- **Percepatan Gravitasi (`g`):** 9.81 m/s² 

## Metode Numerik yang Diimplementasikan

Program ini menggunakan **Metode Biseksi (Bisection Method)**, yang merupakan salah satu metode bracketing untuk mencari akar dari fungsi kontinu. [cite_start]Metode ini dipilih karena kesederhanaannya dan jaminan konvergensi jika syarat awal terpenuhi.

- **Batas Awal:** `xl = 12` dan `xu = 16` 
- **Kriteria Berhenti:** Proses iterasi dihentikan ketika *approximate relative error* (`ea`) lebih kecil dari toleransi yang ditentukan (0.01%).

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

[1]	S. C. Chapra and R. P. Canale, Numerical Methods for Engineers, 7th ed. New York: McGraw-Hill, 2014.
[2]	S. Rawat, N. Mehra, and A. Kumar, “Comparison of Bisection, Newton-Raphson and Secant Methods: A Case Study,” International Journal of Scientific Research in Computer Science, Engineering and Information Technology (IJSRCSEIT), vol. 9, no. 2, pp. 180–189, Mar. 2024.
[3]	C. L. Sabharwal, “A Novel Combined Algorithm for Root-Finding Problems,” Mathematics, vol. 7, no. 6, pp. 543–554, Jun. 2019, [Online]. Available: https://doi.org/10.3390/math7060543 
[4]	G. Gulshan, D. K. Srivastava, and M. A. Ansari, “A Novel Quantum Approach for Bisection Method,” Advances in Continuous and Discrete Models, vol. 2023, Article ID 5837087, pp. 1–12, 2023, [Online]. Available: https://doi.org/10.1155/2023/5837087 
![image](https://github.com/user-attachments/assets/7d56f3d9-9baa-40b1-b0b2-87a06aa0a759)

