/*
 * ============================================================================
 *  TOPIK 3 : INPUT & OUTPUT (I/O) DALAM BAHASA C
 * ============================================================================
 *  Mata Kuliah  : Dasar Pemrograman
 *  Penyusun     : Tim Pengajar
 *
 *  TUJUAN PEMBELAJARAN:
 *  1. Menguasai fungsi printf() dan scanf() secara mendalam
 *  2. Memahami penggunaan Format Specifier untuk berbagai tipe data
 *  3. Memahami konsep Buffer pada I/O dan cara menanganinya (fflush/spasi)
 *  4. Mampu melakukan operasi File I/O dasar (membaca dan menulis file text)
 * ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("============================================================\n");
    printf("   TOPIK 3: INPUT & OUTPUT DALAM C\n");
    printf("============================================================\n\n");

    /* =====================================================================
     * BAGIAN 1: PRINTF DAN FORMAT SPECIFIER (MENDALAM)
     * =====================================================================
     *
     * printf digunakan untuk mencetak output ke layar (Standard Output).
     * Format specifier digunakan untuk menentukan format data yang dicetak.
     *
     * | Specifier | Tipe Data     | Keterangan                           |
     * |-----------|---------------|--------------------------------------|
     * | %d / %i   | int           | Bilangan bulat                       |
     * | %f        | float/double  | Bilangan desimal (default 6 digit)   |
     * | %c        | char          | Satu karakter                        |
     * | %s        | string        | Teks (kumpulan karakter)             |
     * | %p        | pointer       | Alamat memori                        |
     * | %%        | -             | Mencetak simbol persen (%)           |
     */

    printf("=== BAGIAN 1: PRINTF & FORMATTING ===\n\n");

    int umur = 20;
    float ipk = 3.85;
    char nilai = 'A';
    char nama[] = "Budi Santoso";

    printf("Nama : %s\n", nama);
    printf("Umur : %d tahun\n", umur);
    printf("Nilai: %c\n", nilai);
    printf("IPK  : %.2f\n\n", ipk); // %.2f artinya 2 angka di belakang koma

    // Formatting tambahan (Padding dan Alignment)
    printf("Formatting Tabel Sederhana:\n");
    printf("| %-15s | %-5s |\n", "Barang", "Harga"); // %-15s rata kiri
    printf("|-----------------|-------|\n");
    printf("| %-15s | %5d |\n", "Buku Tulis", 5000); // %5d rata kanan
    printf("| %-15s | %5d |\n\n", "Pensil", 3000);

    // Padding dengan Angka Nol (Zero Padding)
    printf("Zero Padding (menambahkan nol di depan):\n");
    printf("Jam   : %02d:%02d\n", 8, 5);   // Akan mencetak 08:05, bukan 8:5
    printf("ID    : %05d\n\n", 42);        // Akan mencetak 00042

    /* =====================================================================
     * BAGIAN 2: SCANF DAN KONSEP BUFFER
     * =====================================================================
     *
     * scanf digunakan untuk membaca input dari keyboard (Standard Input).
     * Selalu gunakan tanda & (ampersand) untuk variabel non-array.
     *
     * MASALAH BUFFER:
     * Ketika kita menekan ENTER setelah input angka, karakter newline ('\n')
     * tersisa di dalam buffer keyboard. Jika input selanjutnya adalah %c,
     * scanf akan membaca '\n' tersebut alih-alih karakter yang kita inginkan.
     *
     * SOLUSI:
     * Tambahkan spasi sebelum %c pada scanf, yaitu: scanf(" %c", &variabel);
     */

    printf("=== BAGIAN 2: SCANF & BUFFER (Simulasi) ===\n\n");
    
    // (Bagian ini dikomentari agar file bisa dijalankan langsung tanpa input manual)
    /*
    int input_umur;
    char input_golongan_darah;

    printf("Masukkan umur: ");
    scanf("%d", &input_umur);
    
    printf("Masukkan golongan darah (A/B/O): ");
    // Spasi sebelum %c sangat penting untuk membersihkan sisa newline (ENTER)
    scanf(" %c", &input_golongan_darah); 

    printf("Data tersimpan: Umur %d, Gol. Darah %c\n\n", input_umur, input_golongan_darah);
    */
    printf("[Contoh scanf dikomentari pada kode sumber untuk mencegah blok program]\n\n");

    /* =====================================================================
     * BAGIAN 2.5: I/O UNTUK KARAKTER DAN STRING (ALTERNATIF SCANF/PRINTF)
     * =====================================================================
     *
     * Selain printf dan scanf, C menyediakan fungsi khusus yang lebih aman
     * dan lebih efisien untuk karakter dan string:
     *
     * 1. getchar() & putchar() -> Untuk membaca dan mencetak SATU karakter.
     * 2. fgets() & puts()      -> Untuk membaca dan mencetak STRING (teks panjang).
     *
     * MENGAPA PAKAI FGETS?
     * scanf("%s", nama) akan berhenti membaca saat bertemu spasi. 
     * Jadi jika input "Budi Santoso", scanf hanya menyimpan "Budi".
     * fgets() bisa membaca string yang mengandung spasi hingga tombol ENTER ditekan.
     */

    printf("=== BAGIAN 2.5: GETCHAR, PUTCHAR, FGETS, PUTS ===\n\n");

    // Simulasi penggunaan fungsi-fungsi alternatif
    /*
    printf("Masukkan sebuah karakter: ");
    char c = getchar();  // Membaca 1 karakter
    
    // Membersihkan sisa ENTER di buffer dari getchar sebelumnya
    while(getchar() != '\n'); 

    printf("Karakter yang dimasukkan: ");
    putchar(c);          // Mencetak 1 karakter
    putchar('\n');

    printf("Masukkan nama lengkap (boleh pakai spasi): ");
    char nama_lengkap[50];
    // Membaca string dengan spasi (aman dari buffer overflow)
    fgets(nama_lengkap, sizeof(nama_lengkap), stdin);
    
    printf("Halo, ");
    puts(nama_lengkap);  // Mencetak string dan otomatis menambah baris baru (ENTER)
    */
    printf("[Contoh getchar dan fgets dikomentari pada kode sumber]\n\n");

    /* =====================================================================
     * BAGIAN 3: FILE I/O (DASAR)
     * =====================================================================
     *
     * Bahasa C dapat membaca dan menulis data ke dalam file text.
     * Langkah:
     * 1. Deklarasi pointer file: FILE *fp;
     * 2. Buka file: fp = fopen("nama_file.txt", "mode");
     *    Mode: "w" (write/tulis baru), "r" (read/baca), "a" (append/tambah di akhir)
     * 3. Operasi: fprintf() untuk menulis, fscanf() / fgets() untuk membaca
     * 4. Tutup file: fclose(fp);
     */

    printf("=== BAGIAN 3: FILE I/O DASAR ===\n\n");

    // 1. Menulis ke File
    FILE *file_tulis = fopen("data_mahasiswa.txt", "w");
    if (file_tulis == NULL) {
        printf("Gagal membuat file!\n");
        return 1;
    }

    fprintf(file_tulis, "Nama: %s\n", nama);
    fprintf(file_tulis, "Umur: %d\n", umur);
    fprintf(file_tulis, "IPK: %.2f\n", ipk);
    
    fclose(file_tulis);
    printf("Data berhasil ditulis ke 'data_mahasiswa.txt'\n");

    // 2. Membaca dari File
    FILE *file_baca = fopen("data_mahasiswa.txt", "r");
    if (file_baca == NULL) {
        printf("Gagal membuka file!\n");
        return 1;
    }

    printf("\nMembaca isi 'data_mahasiswa.txt':\n");
    char buffer_teks[100];
    // fgets membaca baris per baris
    while (fgets(buffer_teks, sizeof(buffer_teks), file_baca) != NULL) {
        printf("%s", buffer_teks);
    }
    
    fclose(file_baca);
    printf("\n");

    printf("============================================================\n");
    printf("   SELESAI! Lanjut ke file latihan.\n");
    printf("============================================================\n");

    return 0;
}
