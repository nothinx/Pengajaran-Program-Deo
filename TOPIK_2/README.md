# 🔢 Topik 2: Tipe Data, Variabel, dan Operator

> [!IMPORTANT]
> Topik ini adalah fondasi paling dasar dalam pemrograman. Pastikan Anda memahami perbedaan setiap tipe data sebelum lanjut ke topik berikutnya.

## 🎯 Tujuan Pembelajaran
1. Memahami tipe data dasar (`int`, `float`, `char`, `bool`, `double`, `long`).
2. Mampu menggunakan variabel dan konstanta (`const`) untuk menyimpan data.
3. Menguasai operator aritmatika, assignment, relasional, dan logika.
4. Mampu menerjemahkan rumus matematika kompleks ke dalam sintaks C.
5. Memahami konsep batas memori (*Integer Overflow*) dan *Type Casting*.
6. **(Deep Dive)** Menguasai Operator **Bitwise** untuk manipulasi bit level hardware (sangat penting untuk Embedded Systems & Robotika).

---

## 🛠️ Library / Header yang Digunakan

Pada topik ini, kita menggunakan beberapa library standar C untuk mendukung operasi spesifik:

| Library / Header | Fungsi Utama di Topik Ini |
| :--- | :--- |
| `<stdio.h>` | Fungsi I/O standar seperti `printf()`. |
| `<stdbool.h>` | Mengizinkan penggunaan tipe data `bool` dengan nilai `true` (1) dan `false` (0). |
| `<math.h>` | Fungsi matematika: `sqrt()` (akar kuadrat) dan `pow()` (pangkat). *Perlu compile dengan flag `-lm` di Linux/Mac.* |
| `<limits.h>` | Mengetahui batas maksimal/minimal tipe data (contoh: `INT_MAX`, `INT_MIN`). |

---

## ⚡ CHEATSHEET: Tipe Data Dasar

| Tipe Data | Ukuran Memori | Format Specifier | Kegunaan & Karakteristik | Contoh Nilai |
| :--- | :--- | :--- | :--- | :--- |
| `int` | 4 byte | `%d` atau `%i` | Bilangan bulat standar. Range: -2.14M s/d 2.14M. | `42`, `-15`, `0` |
| `long` | 4 atau 8 byte | `%ld` | Bilangan bulat besar (menghindari Overflow). | `270000000` |
| `float` | 4 byte | `%f` | Bilangan desimal presisi rendah (6-7 digit). | `3.14`, `-0.5` |
| `double` | 8 byte | `%lf` | Bilangan desimal presisi tinggi (15 digit). | `3.1415926535` |
| `char` | 1 byte | `%c` | **SATU** karakter. Diapit kutip tunggal (`'`). | `'A'`, `'9'`, `'?'` |
| `bool` | 1 byte | `%d` | Logika benar/salah. 1 = `true`, 0 = `false`. | `true`, `false` |

> [!NOTE]
> **Type Casting**: Untuk memaksa perubahan tipe data sementara (misal dari integer ke desimal saat pembagian), gunakan `(tipe_data)`.
> Contoh: `(float)7 / 2` menghasilkan `3.5`. Jika tidak di-cast (`7 / 2`), hasilnya `3` (Integer Division).

---

## ⚡ CHEATSHEET: Operator

### 1. Operator Aritmatika & Penugasan (Assignment)
| Operator | Deskripsi | Contoh | Ekuivalen dengan |
| :---: | :--- | :--- | :--- |
| `+`, `-`, `*`, `/` | Tambah, Kurang, Kali, Bagi | `x = a * b` | - |
| `%` | **Modulo**: Sisa hasil bagi (hanya untuk integer) | `10 % 3` | Hasilnya `1` |
| `+=`, `-=`, `*=`, `/=`, `%=`| Assignment operasi | `x += 5` | `x = x + 5` |
| `++`, `--` | Increment, Decrement (tambah/kurang 1) | `x++` | `x = x + 1` |

### 2. Operator Relasional (Perbandingan)
*Menghasilkan nilai `1` (true) atau `0` (false).*

| Operator | Arti | Contoh Kasus |
| :---: | :--- | :--- |
| `==` | Sama dengan *(Bukan `=`)* | `if (x == 5)` |
| `!=` | Tidak sama dengan | `if (x != 5)` |
| `>`, `<` | Lebih besar, Lebih kecil | `if (x > 5)` |
| `>=`, `<=`| Lebih besar/kecil atau sama dengan | `if (x >= 5)` |

### 3. Operator Logika
| Operator | Arti | Syarat Bernilai TRUE (1) |
| :---: | :--- | :--- |
| `&&` | **AND** | KEDUA sisi harus true. (`true && true`) |
| `\|\|` | **OR** | SALAH SATU sisi true sudah cukup. (`true \|\| false`) |
| `!` | **NOT** | Membalik logika. `!true` menjadi `false`. |

### 4. Operator Ternary (Bonus / Out of the Box)
Cara singkat menulis `if-else` dalam satu baris.
**Sintaks**: `(kondisi) ? nilai_jika_benar : nilai_jika_salah`
**Contoh**: `(n % 2 == 0) ? "Genap" : "Ganjil"`

---

## 📂 Daftar File & Panduan Belajar

Silakan ikuti urutan berikut untuk hasil belajar maksimal:

| File | Deskripsi | Kegunaan |
| :--- | :--- | :--- |
| `01_materi_tipe_data_operator.cpp` | **Materi Utama** | Penjelasan lengkap beserta contoh kode. |
| `02_remedial_drill.cpp` | **Drill Latihan** | Soal-soal singkat untuk menguji pemahaman instan. |
| `03_latihan_soal.cpp` | **Latihan Mandiri** | Tantangan dari level Pemula hingga *Out of the Box*. |
| `04_kunci_jawaban.cpp` | **Solusi** | Pembahasan tuntas beserta contoh Integer Overflow. |
| `05_materi_bitwise_robotika.cpp` | **Deep Dive R2C** | Materi khusus manipulasi bit untuk mikrokontroler/robotika. |

---

## 🚀 Cara Menjalankan Materi
Buka terminal di folder ini, lalu jalankan perintah berikut:

```bash
# Untuk kode yang memakai library <math.h>, jangan lupa tambahkan -lm
g++ 01_materi_tipe_data_operator.cpp -o materi -lm
./materi
```

---
[⬅️ Kembali ke Halaman Utama](../README.md)
