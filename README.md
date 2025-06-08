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
- **Nama**: Raffa
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
Iterasi  xr        ea (%)
1        14.000000 -
2        15.000000 6.667
...
Koefisien drag c = 14.8011
```

---

## Referensi
- Chapra, S. C., & Canale, R. P. (2014). *Numerical Methods for Engineers* (7th ed.). McGraw-Hill.

---

## Lisensi
Proyek ini disediakan untuk keperluan edukasi dan akademik.
