/*
 * ============================================================================
 *  TOPIK 3: KUNCI JAWABAN LATIHAN SOAL
 * ============================================================================
 *  PERINGATAN: Coba kerjakan sendiri dulu sebelum melihat kunci jawaban!
 * ============================================================================
 */

#include <stdio.h>

int main() {
    printf("=== JAWABAN SOAL 1: TABEL MAHASISWA ===\n");
    
    // Simulasi input (karena scanf akan menahan jalannya program)
    int nim = 10101;
    char nama[] = "Andi";
    float nilai = 85.5;

    /* Kode asli dengan scanf (Uncomment untuk tes manual)
    int nim;
    char nama[50];
    float nilai;

    printf("Masukkan NIM: ");
    scanf("%d", &nim);
    printf("Masukkan Nama: ");
    scanf("%s", nama); // string tidak pakai &
    printf("Masukkan Nilai: ");
    scanf("%f", &nilai);
    */

    printf("\nOutput Tabel:\n");
    printf("-----------------------------------------\n");
    printf("| %-10s | %-20s | %-5s |\n", "NIM", "NAMA", "NILAI");
    printf("-----------------------------------------\n");
    printf("| %-10d | %-20s | %-5.1f |\n", nim, nama, nilai);
    printf("-----------------------------------------\n\n");

    printf("=== JAWABAN SOAL 2: LOG FILE SEDERHANA ===\n");
    int tahun = 2026;
    
    FILE *fp = fopen("log_sistem.txt", "w");
    if (fp != NULL) {
        fprintf(fp, "Sistem dimulai pada tahun %d\n", tahun);
        fclose(fp);
        printf("Berhasil menulis ke file log_sistem.txt!\n");
    } else {
        printf("Gagal membuka file.\n");
    }
    printf("\n");

    printf("=== JAWABAN SOAL 3: INPUT TEKS PANJANG & ZERO PADDING ===\n");
    // Simulasi input string panjang
    char alamat[] = "Jl. Merdeka No. 123, Jakarta";
    int id_pengiriman = 7;

    /* Kode asli dengan input manual (Uncomment untuk tes manual)
    char alamat[100];
    int id_pengiriman = 7;

    printf("Masukkan Alamat Lengkap: ");
    // Gunakan fgets agar spasi tidak memutus string
    fgets(alamat, sizeof(alamat), stdin);
    */

    // %05d untuk format angka 7 menjadi 00007
    printf("ID Pengiriman: %05d\n", id_pengiriman);
    printf("Alamat: %s\n", alamat);

    printf("\n=== JAWABAN SOAL 4: BONUS / OUT OF THE BOX (FORMAT PARSING) ===\n");
    int jam = 14, menit = 30, hari = 4, bulan = 5, tahun_parsed = 2026;
    
    /* Kode asli dengan scanf (Uncomment untuk tes manual)
    printf("Masukkan waktu dan tanggal (HH:MM DD/MM/YYYY): ");
    // Trik scanf: kita bisa menaruh karakter pemisah seperti ':' dan '/' di dalam string format!
    scanf("%d:%d %d/%d/%d", &jam, &menit, &hari, &bulan, &tahun_parsed);
    */

    printf("Input tersimulasi: 14:30 04/05/2026\n");
    printf("Hasil Parsing:\n");
    printf("Jam %d lebih %d menit. Tanggal %d, Bulan %d, Tahun %d.\n\n", jam, menit, hari, bulan, tahun_parsed);

    return 0;
}
