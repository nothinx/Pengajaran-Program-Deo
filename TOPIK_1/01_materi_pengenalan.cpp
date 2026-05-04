/*
 * ============================================================================
 *  TOPIK 1 : PENGENALAN ALGORITMA, FLOWCHART & BAHASA C
 * ============================================================================
 *  Mata Kuliah  : Dasar Pemrograman
 *  Penyusun     : Tim Pengajar
 *
 *  TUJUAN PEMBELAJARAN:
 *  1. Memahami konsep dasar Algoritma dan representasinya (Flowchart).
 *  2. Mengenal struktur dasar program dalam bahasa C.
 *  3. Memahami penggunaan komentar (komentar satu baris & banyak baris).
 *  4. Mampu mencetak teks ke layar menggunakan fungsi printf().
 * ============================================================================
 */

/* 
   Ini adalah komentar multi-baris (Banyak baris).
   Biasanya digunakan untuk menjelaskan dokumentasi panjang,
   seperti pada bagian atas file ini.
*/

// Ini adalah komentar satu baris. Kompiler akan mengabaikan teks setelah tanda '//'

// 1. HEADER / LIBRARY INCLUSION
// '#include' memberitahu kompiler untuk memasukkan file library standar.
// '<stdio.h>' singkatan dari Standard Input Output.
// Library ini wajib agar kita bisa menggunakan fungsi seperti printf() dan scanf().
#include <stdio.h> 

// 2. FUNGSI UTAMA (MAIN FUNCTION)
// Setiap program C HARUS memiliki tepat satu fungsi bernama 'main'.
// Program selalu mulai dieksekusi dari baris pertama di dalam fungsi main ini.
// 'int' berarti fungsi ini akan mengembalikan sebuah nilai integer (bilangan bulat) ke sistem operasi.
int main() {
    
    // 3. STATEMENT / PERINTAH
    // Setiap pernyataan dalam C wajib diakhiri dengan titik koma (;).
    printf("============================================================\n");
    printf("   SELAMAT DATANG DI DUNIA PEMROGRAMAN C!\n");
    printf("============================================================\n\n");

    printf("=== BAGIAN 1: STRUKTUR DASAR PROGRAM C ===\n\n");
    printf("Sebuah program C minimal memiliki:\n");
    printf("1. #include <stdio.h> (Untuk input/output)\n");
    printf("2. int main() { ... } (Titik awal jalannya program)\n");
    printf("3. return 0; (Menandakan program selesai tanpa error)\n\n");

    printf("=== BAGIAN 2: MENCETAK TEKS (PRINTF) ===\n\n");
    // printf digunakan untuk mencetak teks ke layar.
    // '\n' (newline) digunakan untuk pindah ke baris baru (seperti tombol ENTER).
    // '\t' (tab) digunakan untuk memberikan spasi horizontal yang lebar.
    
    printf("Ini baris pertama.\n");
    printf("Ini baris kedua.\n\n");

    printf("Contoh penggunaan Tab:\n");
    printf("Nama\t: Budi\n");
    printf("NIM\t: 123456\n\n");

    printf("=== BAGIAN 3: KONSEP ALGORITMA & FLOWCHART ===\n\n");
    printf("Algoritma adalah urutan langkah logis untuk menyelesaikan masalah.\n");
    printf("Flowchart adalah representasi grafis dari algoritma menggunakan simbol.\n\n");
    
    printf("Simbol Utama Flowchart:\n");
    printf("1. OVAL       : Terminal (Start / End)\n");
    printf("2. JAJARGENJANG: Input / Output (Membaca data / Menampilkan hasil)\n");
    printf("3. PERSEGI_PANJANG: Proses (Perhitungan / Penugasan nilai)\n");
    printf("4. BELAH_KETUPAT  : Keputusan (Decision / if-else)\n");
    printf("5. PANAH      : Aliran eksekusi program\n\n");

    // 4. NILAI KEMBALIAN (RETURN VALUE)
    // Mengembalikan nilai 0 ke Sistem Operasi.
    // Angka 0 adalah standar internasional yang berarti "Program berjalan sukses dan selesai secara normal".
    return 0;
}
