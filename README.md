# Penentuan Koefisien Drag Parasutis dengan Metode Bisection

## Deskripsi
Program ini menggunakan metode numerik **Bisection** untuk menentukan **koefisien drag udara (c)** yang bekerja pada seorang parasutis. Studi kasus diambil dari buku *Numerical Methods for Engineers* karya Chapra & Canale (7th Edition), tepatnya Example 5.3.

Parasutis dengan massa 68.1 kg mencapai kecepatan 40 m/s setelah jatuh selama 10 detik. Dengan menggunakan fungsi:

\[
f(c) = \frac{gm}{c} (1 - e^{-ct/m}) - v
\]

Program mencari nilai `c` sedemikian hingga fungsi tersebut bernilai nol.

---

## Informasi Mahasiswa
- **Nama**: M. Avicenna Raffaiz Adiharsa
- **NPM**: 2206062844

---

## Struktur Program
- `main.c` — kode utama program dalam bahasa C
- `f(c)` — fungsi non-linear yang dipecahkan
- Iterasi dilakukan hingga galat relatif mendekati nol atau mencapai batas maksimal iterasi

---

## Cara Kompilasi dan Jalankan
### Kompilasi
```bash
gcc -o bisection main.c -lm
```

### Jalankan
```bash
./bisection
```

---

## Output
Program akan mencetak hasil iterasi berikut:
- Nilai `xl`, `xu`, `xr`
- Galat relatif `ea`
- Estimasi akar `c` dengan galat < 0.01%

Contoh output:
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


---

## Referensi
[1] S. C. Chapra and R. P. Canale, Numerical Methods for Engineers, 7th ed. New York: McGraw-Hill, 2014.
[2] S. Rawat, N. Mehra, and A. Kumar, “Comparison of Bisection, Newton-Raphson and Secant Methods: A Case Study,” International Journal of Scientific Research in Computer Science, Engineering and Information Technology (IJSRCSEIT), vol. 9, no. 2, pp. 180–189, Mar. 2024.
[3] C. L. Sabharwal, “A Novel Combined Algorithm for Root-Finding Problems,” Mathematics, vol. 7, no. 6, pp. 543–554, Jun. 2019, [Online]. Available: https://doi.org/10.3390/math7060543
[4] G. Gulshan, D. K. Srivastava, and M. A. Ansari, “A Novel Quantum Approach for Bisection Method,” Advances in Continuous and Discrete Models, vol. 2023, Article ID 5837087, pp. 1–12, 2023, [Online]. Available: https://doi.org/10.1155/2023/5837087
---

## Lisensi
Proyek ini disediakan untuk keperluan edukasi dan akademik.
