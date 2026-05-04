# 🏁 Topik 1: Pengenalan Algoritma, Flowchart & Bahasa C

> [!IMPORTANT]
> Langkah pertama menjadi programmer! Di topik ini kita akan belajar bagaimana cara berpikir logis menggunakan *Algoritma* dan *Flowchart*, serta bagaimana menuliskannya ke dalam bentuk kode menggunakan Bahasa C.

## 🎯 Tujuan Pembelajaran
1. Memahami konsep **Algoritma** (urutan langkah penyelesaian masalah).
2. Membaca dan membuat rancangan logika menggunakan simbol **Flowchart**.
3. Mengenal kerangka dasar program dalam **Bahasa C**.
4. Menggunakan *Escape Characters* (`\n` dan `\t`) untuk merapikan teks di layar.
5. Memahami proses kompilasi (*compile*) dan eksekusi program.

---

## 💻 Panduan Instalasi (Embarcadero Dev-C++)

Untuk menulis dan menjalankan kode C/C++, kita membutuhkan sebuah IDE (Integrated Development Environment) yang sudah dilengkapi dengan Compiler. Salah satu yang paling ringan dan sangat direkomendasikan untuk pemula adalah **Embarcadero Dev-C++**.

### Langkah Instalasi:
1. **Download**: Kunjungi situs resmi Embarcadero Dev-C++ atau unduh dari [SourceForge (Dev-C++)](https://sourceforge.net/projects/orwelldevcpp/). Versi dari Embarcadero adalah kelanjutan dari versi Orwell yang sudah usang. Pastikan Anda mengunduh versi yang sudah di-*bundle* dengan compiler TDM-GCC (biasanya berukuran sekitar ~50MB - 70MB).
2. **Install**: Jalankan file `.exe` yang sudah diunduh. Pilih bahasa (English), lalu klik `I Agree` pada halaman lisensi.
3. **Pilih Komponen**: Biarkan pilihan default (Full). Pastikan compiler (TDM-GCC) tercentang. Klik `Next` dan `Install`.
4. **Konfigurasi Awal**: Setelah instalasi selesai, jalankan Dev-C++. Anda akan diminta memilih tema dan skema warna. Pilih sesuai selera (misal: Tema *Windows* dan warna *Ocean* atau *Obsidian* untuk dark mode). Klik `Next` hingga selesai.

### Cara Membuat Program Pertama di Dev-C++:
1. Buka Dev-C++.
2. Klik menu **File** -> **New** -> **Source File** (atau tekan `Ctrl + N`).
3. Ketikkan struktur dasar program C (bisa dilihat di bagian *Cheatsheet* di bawah).
4. Simpan file dengan menekan `Ctrl + S`. Beri nama misal `hello.cpp` atau `hello.c`.
5. Untuk menjalankan program, tekan **F11** (Compile & Run) di keyboard Anda, atau klik menu **Execute** -> **Compile & Run**.

---

## ⚡ CHEATSHEET: Simbol Flowchart Dasar

Flowchart adalah "Peta Jalan" dari sebuah program. Sebelum menulis kode yang panjang, kita menggambarnya terlebih dahulu.

| Simbol | Nama | Bentuk (Umum) | Fungsi |
| :---: | :--- | :---: | :--- |
| `Oval` | **Terminal** | 🔵 | Menandakan **Awal (Start)** atau **Akhir (End)** dari program. |
| `Jajargenjang` | **Input / Output** | ▱ | Tempat membaca data dari user (`Input`) atau menampilkan hasil ke layar (`Output`). |
| `Persegi Panjang`| **Proses** | ▭ | Operasi perhitungan matematika atau pemberian nilai (assignment). |
| `Belah Ketupat` | **Keputusan (Decision)**| ⬦ | Memilih percabangan logika berdasarkan kondisi (Misal: *Apakah Nilai > 60? Ya/Tidak*). |
| `Panah` | **Flow Line** | ⬇️ | Menunjukkan arah aliran eksekusi program. |

---

## ⚡ CHEATSHEET: Struktur Dasar Program C

Setiap program C memiliki kerangka wajib yang tidak boleh dilupakan.

```c
// 1. LIBRARY INCLUSION (Menyertakan perpustakaan fungsi)
// stdio.h = Standard Input Output. Wajib ada agar bisa pakai printf()
#include <stdio.h> 

// 2. FUNGSI UTAMA (Titik awal berjalannya program)
int main() {
    
    // 3. STATEMENT / PERINTAH
    // Cetak ke layar. Jangan lupa diakhiri titik koma (;)!
    printf("Hello, World!\n"); 
    
    // 4. RETURN VALUE
    // Lapor ke sistem operasi bahwa program selesai tanpa error
    return 0; 
}
```

### Escape Characters Penting
Saat menggunakan `printf`, kita bisa memformat teks dengan karakter khusus:
*   `\n` : **Newline**. Fungsinya seperti menekan tombol ENTER (pindah baris).
*   `\t` : **Tab**. Fungsinya memberikan spasi lebar untuk meluruskan teks.
*   `\\` : **Backslash**. Untuk mencetak karakter garis miring terbalik `\`.
*   `\"` : **Kutip**. Untuk mencetak tanda kutip ganda `"` di dalam teks.

---

## 📂 Daftar File & Panduan Belajar

| File | Deskripsi | Kegunaan |
| :--- | :--- | :--- |
| `01_materi_pengenalan.cpp` | **Materi Utama** | Penjelasan struktur C, komentar, dan cara cetak teks. |
| `02_latihan_soal.cpp` | **Latihan Mandiri** | Melatih ketelitian (*Debugging* error sintaks) dan formatting teks. |
| `03_kunci_jawaban.cpp` | **Solusi** | Solusi dari `02_latihan_soal`. Coba perbaiki errornya sendiri dulu! |

---

## 🚀 Cara Kompilasi dan Menjalankan (Compile & Run)
Program C tidak bisa langsung dijalankan. Ia harus "diterjemahkan" dulu ke bahasa mesin oleh compiler (seperti `g++` atau `gcc`).

Buka terminal di folder ini, lalu ketik:
```bash
# Langkah 1: Compile (Mengubah .cpp menjadi aplikasi .exe atau executable)
g++ 01_materi_pengenalan.cpp -o materi

# Langkah 2: Run (Menjalankan aplikasi hasil compile)
./materi
```

> [!TIP]
> Error saat compile sangat wajar! Biasakan membaca pesan error di terminal. Biasanya compiler akan memberi tahu di baris ke berapa (Line) Anda lupa menaruh titik koma `;`.

---
[⬅️ Kembali ke Halaman Utama](../README.md)
