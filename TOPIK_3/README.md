# 🖨️ Topik 3: Input & Output (I/O)

> [!IMPORTANT]
> Menguasai operasi Input & Output adalah kunci untuk membuat program interaktif. Di topik ini, kita tidak hanya belajar I/O dasar, tetapi juga teknik manipulasi format (*formatting*) dan penanganan buffer yang sering memicu *bug* pada program C.

## 🎯 Tujuan Pembelajaran
1. Memahami penggunaan `printf` dan `scanf` beserta Format Specifier secara komprehensif.
2. Mengatasi masalah umum pada **Buffer input** (menangani sisa *newline* `\n` saat input karakter/string).
3. Melakukan manipulasi tampilan: **Alignment** (rata kiri/kanan), **Padding** (spasi kosong), dan **Zero Padding** (menambah angka nol di depan).
4. Menguasai fungsi I/O spesifik untuk string/karakter: `getchar`, `putchar`, `fgets`, dan `puts`.
5. Menguasai **Format Parsing** (mengekstrak data spesifik dari string input yang terformat).
6. Melakukan operasi **File I/O dasar**: membuat, menulis, dan membaca file teks (`.txt`).

---

## 🛠️ Library / Header yang Digunakan

| Library / Header | Fungsi Utama di Topik Ini |
| :--- | :--- |
| `<stdio.h>` | Core Library untuk I/O: `printf`, `scanf`, `fgets`, `puts`, `getchar`, `putchar`, `fopen`, `fprintf`, `fscanf`, `fclose`. |
| `<stdlib.h>` | Opsional: digunakan untuk fungsi utilitas standar (jika diperlukan untuk manajemen memori saat I/O tingkat lanjut). |

---

## ⚡ CHEATSHEET: Format Specifier & Formatting

| Format | Contoh Kode | Output yang Dihasilkan | Keterangan |
| :--- | :--- | :--- | :--- |
| `%d` / `%i` | `printf("%d", 42);` | `42` | Integer standar. |
| `%f` | `printf("%f", 3.14);` | `3.140000` | Float (default 6 desimal). |
| `%.2f` | `printf("%.2f", 3.1415);`| `3.14` | Float dengan presisi **2 desimal**. |
| `%c` | `printf("%c", 'A');` | `A` | Satu karakter. |
| `%s` | `printf("%s", "Halo");` | `Halo` | String (array karakter). |
| `%10s` | `printf("\|%10s\|", "C++");` | `\|       C++\|` | **Padding**: Lebar 10, rata KANAN. |
| `%-10s` | `printf("\|%-10s\|", "C++");` | `\|C++       \|` | **Padding**: Lebar 10, rata KIRI. |
| `%05d` | `printf("%05d", 7);` | `00007` | **Zero Padding**: Lebar 5, isi sisa dengan nol. |

> [!CAUTION]
> **Scanf untuk Double**: Saat mencetak `double` menggunakan `printf`, kita memakai `%f`. NAMUN, saat menerima input menggunakan `scanf`, kita **WAJIB** menggunakan `%lf` (Long Float).

---

## ⚡ CHEATSHEET: Fungsi Input & Output Alternatif

Terkadang `scanf` dan `printf` bukan pilihan terbaik, terutama saat menangani spasi dalam kalimat.

| Fungsi Input | Fungsi Output | Kapan Digunakan? | Karakteristik |
| :--- | :--- | :--- | :--- |
| `scanf("%s", buf)` | `printf("%s", buf)` | Input satu KATA tunggal | Akan **terpotong** jika user menekan spasi. |
| `fgets(buf, size, stdin)` | `puts(buf)` | Input KALIMAT panjang | **Aman**. Membaca seluruh spasi sampai user menekan ENTER (`\n`). `puts` otomatis mencetak enter di akhir. |
| `c = getchar()` | `putchar(c)` | Input 1 KARAKTER | Cepat dan langsung. Sering dipakai di loop. |

> [!WARNING]
> **Masalah Buffer Scanf**: Setelah menginput angka (`scanf("%d", &angka)`), user menekan ENTER. Karakter ENTER (`\n`) tersebut tertinggal di memori (buffer). Jika perintah selanjutnya adalah `scanf("%c", &huruf)`, ia akan menangkap sisa `\n` tersebut, bukan huruf baru!
> **Solusi**: Tambahkan **spasi** sebelum `%c` pada scanf: `scanf(" %c", &huruf);`.

---

## ⚡ CHEATSHEET: File I/O (Membaca & Menulis File)

Langkah dasar mengelola file `.txt` di C:

1. **Buka File**: `FILE *fp = fopen("nama.txt", "mode");`
   *   Mode `"w"` (Write): Membuat file baru / menimpa file lama.
   *   Mode `"r"` (Read): Membaca file. File harus sudah ada.
   *   Mode `"a"` (Append): Menambahkan isi di akhir file lama tanpa menimpa.
2. **Cek Error**: `if (fp == NULL) { printf("Gagal buka file!"); }`
3. **Operasi**:
   *   Tulis: `fprintf(fp, "Halo %s\n", nama);`
   *   Baca baris per baris: `while (fgets(buffer, sizeof(buffer), fp) != NULL) { ... }`
4. **Tutup File**: `fclose(fp);` *(Wajib! Agar file tidak corrupt/terkunci).*

---

## 📂 Daftar File & Panduan Belajar

| File | Deskripsi | Kegunaan |
| :--- | :--- | :--- |
| `01_materi_input_output.cpp` | **Materi Utama** | Penjelasan detail buffer, `fgets`, `getchar`, formatting, & File I/O. |
| `02_remedial_drill.cpp` | **Drill Latihan** | Menguji kecepatan mengingat format specifier yang benar. |
| `03_latihan_soal.cpp` | **Latihan Mandiri** | Latihan membuat tabel rapi, zero padding, file I/O, dan *Format Parsing*. |
| `04_kunci_jawaban.cpp` | **Solusi** | Solusi dan trik parsing *"HH:MM DD/MM/YYYY"* menggunakan `scanf`. |
| `05_materi_in_memory_io.cpp` | **Deep Dive R2C** | Materi khusus manipulasi string memori (`sprintf` & `sscanf`) untuk IoT/Sensor. |

---

## 🚀 Cara Menjalankan Materi
Buka terminal di dalam folder ini, kemudian jalankan compiler:

```bash
g++ 01_materi_input_output.cpp -o materi
./materi
```

---
[⬅️ Kembali ke Halaman Utama](../README.md)
