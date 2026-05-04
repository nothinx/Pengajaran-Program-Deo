/*
 * ============================================================================
 *  TOPIK 2 (DEEP DIVE): OPERATOR BITWISE UNTUK ROBOTIKA / MIKROKONTROLER
 * ============================================================================
 *  Materi Khusus: Mahasiswa Fakultas Teknik Elektronika dan Komputer (FTEK)
 *  Sangat berguna untuk pemrograman Arduino, ESP32, atau Sistem Tertanam.
 *
 *  TUJUAN PEMBELAJARAN:
 *  1. Memahami cara komputer menyimpan data dalam bentuk Biner (0 dan 1).
 *  2. Menggunakan operator Bitwise: AND (&), OR (|), XOR (^), NOT (~).
 *  3. Menggunakan operator Shift: Shift Left (<<), Shift Right (>>).
 *  4. Menerapkan manipulasi bit (Bit Masking) untuk mengontrol sensor/LED.
 * ============================================================================
 */

#include <stdio.h>

// Fungsi bantuan untuk mencetak angka dalam bentuk Biner 8-bit
void printBinary(unsigned char num) {
    for (int i = 7; i >= 0; i--) {
        printf("%d", (num >> i) & 1);
    }
    printf("\n");
}

int main() {
    printf("============================================================\n");
    printf("   DEEP DIVE: OPERATOR BITWISE (MANIPULASI BIT)\n");
    printf("============================================================\n\n");

    /*
     * Di dunia Robotika, kita sering berurusan dengan register di dalam chip.
     * Satu variabel (misal: 1 byte = 8 bit) bisa mengontrol 8 pin LED sekaligus.
     * Bitwise operator bekerja langsung pada angka biner penyusun memori.
     */

    unsigned char a = 12;  // Biner: 00001100
    unsigned char b = 10;  // Biner: 00001010

    printf("Nilai awal:\n");
    printf("a = 12 -> Biner: "); printBinary(a);
    printf("b = 10 -> Biner: "); printBinary(b);
    printf("---------------------------\n\n");

    // 1. Bitwise AND (&) -> 1 jika KEDUA bit adalah 1
    // Sering digunakan untuk MENGHAPUS bit tertentu (Clear Bit)
    printf("1. Bitwise AND (&)\n");
    printf("   a & b = %d -> Biner: ", a & b); 
    printBinary(a & b); // 00001000 (8)
    printf("\n");

    // 2. Bitwise OR (|) -> 1 jika SALAH SATU bit adalah 1
    // Sering digunakan untuk MENYALAKAN bit tertentu (Set Bit)
    printf("2. Bitwise OR (|)\n");
    printf("   a | b = %d -> Biner: ", a | b); 
    printBinary(a | b); // 00001110 (14)
    printf("\n");

    // 3. Bitwise XOR (^) -> 1 jika bit BERBEDA
    // Sering digunakan untuk MEMBALIK bit tertentu (Toggle Bit / Kedip LED)
    printf("3. Bitwise XOR (^)\n");
    printf("   a ^ b = %d  -> Biner: ", a ^ b); 
    printBinary(a ^ b); // 00000110 (6)
    printf("\n");

    // 4. Bitwise NOT (~) -> Membalik SEMUA bit (0 jadi 1, 1 jadi 0)
    printf("4. Bitwise NOT (~)\n");
    printf("   ~a    = %d -> Biner: ", (unsigned char)(~a)); 
    printBinary(~a); // 11110011 (243)
    printf("\n");

    // 5. Shift Left (<<) -> Menggeser bit ke KIRI (sama dengan dikali 2^n)
    printf("5. Shift Left (<<)\n");
    printf("   a << 1 = %d -> Biner: ", a << 1); 
    printBinary(a << 1); // 00011000 (24) -> 12 * 2
    printf("\n");

    // 6. Shift Right (>>) -> Menggeser bit ke KANAN (sama dengan dibagi 2^n)
    printf("6. Shift Right (>>)\n");
    printf("   a >> 1 = %d  -> Biner: ", a >> 1); 
    printBinary(a >> 1); // 00000110 (6) -> 12 / 2
    printf("\n");

    /* =====================================================================
     * CONTOH KASUS NYATA (ROBOTIKA / SENSOR)
     * ===================================================================== */
    printf("=== CONTOH KASUS: KONTROL PIN MIKROKONTROLER ===\n\n");
    
    // Misal: PORTD mengontrol 8 LED. Awalnya semua mati (00000000)
    unsigned char PORTD = 0; 
    
    // a. MENYALAKAN LED di Pin 3 (Set Bit)
    // Kita gunakan trik (1 << 3) yang menghasilkan 00001000
    PORTD = PORTD | (1 << 3);
    printf("Nyalakan LED Pin 3 : "); printBinary(PORTD);

    // b. MENYALAKAN LED di Pin 7 (Set Bit)
    PORTD = PORTD | (1 << 7);
    printf("Nyalakan LED Pin 7 : "); printBinary(PORTD);

    // c. MEMATIKAN LED di Pin 3 (Clear Bit)
    // Kita gunakan AND dengan kebalikan dari (1<<3) yaitu ~(00001000) = 11110111
    PORTD = PORTD & ~(1 << 3);
    printf("Matikan LED Pin 3  : "); printBinary(PORTD);

    // d. TOGGLE / KEDIPKAN LED di Pin 7 (Toggle Bit)
    PORTD = PORTD ^ (1 << 7);
    printf("Toggle LED Pin 7   : "); printBinary(PORTD);

    printf("\n============================================================\n");
    return 0;
}
