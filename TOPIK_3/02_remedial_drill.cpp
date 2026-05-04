/*
 * ============================================================================
 *  TOPIK 3: REMEDIAL DRILL - INPUT & OUTPUT
 * ============================================================================
 *  Tujuan: Menguji pemahaman dasar tentang printf, scanf, dan format specifier.
 *
 *  INSTRUKSI:
 *  Perbaiki kode yang salah (dikomentari dengan // SALAH:)
 *  sehingga program bisa berjalan dengan benar.
 * ============================================================================
 */

#include <stdio.h>

int main() {
    printf("--- DRILL 1: FORMAT SPECIFIER ---\n");
    int angkatan = 2026;
    float ipk = 3.9;
    char kelas = 'B';

    // SALAH: printf("Angkatan: %f\n", angkatan);
    // TODO 1: Perbaiki format specifier untuk angkatan
    printf("Angkatan: %d\n", angkatan);

    // SALAH: printf("IPK: %d\n", ipk);
    // TODO 2: Perbaiki format specifier untuk ipk
    printf("IPK: %.2f\n", ipk);

    // SALAH: printf("Kelas: %s\n", kelas);
    // TODO 3: Perbaiki format specifier untuk kelas
    printf("Kelas: %c\n\n", kelas);

    printf("--- DRILL 2: SCANF & BUFFER ---\n");
    // (Simulasi scanf yang benar)
    /*
    int umur;
    char gol_darah;

    printf("Masukkan umur: ");
    // SALAH: scanf("%d", umur);
    // TODO 4: Tambahkan operator & pada variabel
    // scanf("%d", &umur);

    printf("Masukkan golongan darah (A/B/O): ");
    // SALAH: scanf("%c", &gol_darah);
    // TODO 5: Tambahkan spasi sebelum %c untuk membersihkan newline
    // scanf(" %c", &gol_darah);
    */
    printf("Drill scanf dikomentari agar file bisa jalan otomatis.\n");
    printf("Pastikan Anda memahami penggunaan & pada scanf dan spasi pada %%c!\n\n");

    printf("Drill Selesai!\n");
    return 0;
}
