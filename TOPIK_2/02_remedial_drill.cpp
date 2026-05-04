/*
 * ============================================================================
 *  REMEDIAL DRILL TOPIK 2: DEKLARASI VARIABEL & RUMUS MATEMATIKA
 * ============================================================================
 *  Berdasarkan feedback praktikum:
 *  - Deklarasi variabel (char, int, bool) masih salah
 *  - Membuat rumus matematika masih bingung
 *  - Perkara tipe data masih kebalik
 *
 *  Compile: g++ 02_remedial_drill.cpp -o drill -lm && ./drill
 * ============================================================================
 */

#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main() {

    printf("============================================================\n");
    printf("   REMEDIAL DRILL: TIPE DATA & OPERATOR\n");
    printf("============================================================\n\n");

    /* =====================================================================
     * DRILL 1: DEKLARASI VARIABEL - JANGAN SAMPAI SALAH!
     * =====================================================================
     *
     * FORMAT: tipe_data nama_variabel = nilai;
     *
     * TABEL KESALAHAN UMUM:
     * -----------------------------------------------------------------------
     * | SALAH                     | BENAR                   | Kenapa?       |
     * |---------------------------|-------------------------|---------------|
     * | umur = 20;                | int umur = 20;          | Lupa tipe     |
     * | int umur = 20.5;          | float umur = 20.5;      | Tipe salah    |
     * | char grade = "A";         | char grade = 'A';       | " vs '        |
     * | int 1angka = 5;           | int angka1 = 5;         | Awalan angka  |
     * | int nilai uts = 80;       | int nilai_uts = 80;     | Ada spasi     |
     * | bool aktif = TRUE;        | bool aktif = true;      | Huruf besar   |
     * -----------------------------------------------------------------------
     */

    printf("=== DRILL 1: DEKLARASI VARIABEL ===\n\n");

    // Integer - untuk bilangan bulat
    int jumlah_siswa = 30;
    int suhu_ruangan = -5;
    int tahun_lahir = 2005;
    printf("  [int] Bilangan bulat:\n");
    printf("    int jumlah_siswa = 30;   -> %d\n", jumlah_siswa);
    printf("    int suhu_ruangan = -5;   -> %d\n", suhu_ruangan);
    printf("    int tahun_lahir = 2005;  -> %d\n\n", tahun_lahir);

    // Float - untuk bilangan desimal
    float berat_badan = 65.5;
    float suhu_badan = 36.8;
    float nilai_uts = 87.5;
    printf("  [float] Bilangan desimal:\n");
    printf("    float berat_badan = 65.5;  -> %.1f\n", berat_badan);
    printf("    float suhu_badan = 36.8;   -> %.1f\n", suhu_badan);
    printf("    float nilai_uts = 87.5;    -> %.1f\n\n", nilai_uts);

    // Char - untuk SATU karakter (KUTIP SATU!)
    char huruf_depan = 'B';
    char golongan_darah = 'O';
    char operator_mat = '+';
    printf("  [char] Satu karakter (KUTIP SATU!):\n");
    printf("    char huruf_depan = 'B';      -> %c\n", huruf_depan);
    printf("    char golongan_darah = 'O';   -> %c\n", golongan_darah);
    printf("    char operator_mat = '+';     -> %c\n\n", operator_mat);

    // Bool - true/false
    bool hadir = true;
    bool remedial = false;
    printf("  [bool] Benar/Salah (#include <stdbool.h>):\n");
    printf("    bool hadir = true;     -> %d (1)\n", hadir);
    printf("    bool remedial = false; -> %d (0)\n\n", remedial);

    // QUIZ: Mana yang benar?
    printf("  QUIZ: Mana yang BENAR?\n");
    printf("  -----------------------------------------------\n");
    printf("  | Pernyataan             | Benar/Salah?       |\n");
    printf("  |------------------------|--------------------|");
    printf("\n  | int x = 3.14;          | SALAH (pakai float)|\n");
    printf("  | float y = 10;           | BENAR (otomatis)   |\n");
    printf("  | char c = 'AB';          | SALAH (1 char saja)|\n");
    printf("  | char c = \"A\";           | SALAH (kutip satu!)|\n");
    printf("  | bool ok = 1;            | BENAR (1 = true)   |\n");
    printf("  | double d = 3.14;        | BENAR              |\n");
    printf("  -----------------------------------------------\n\n");


    /* =====================================================================
     * DRILL 2: JEBAKAN OPERATOR
     * =====================================================================
     */

    printf("=== DRILL 2: JEBAKAN OPERATOR ===\n\n");

    // Jebakan 1: Integer Division
    printf("  JEBAKAN 1: Integer Division\n");
    printf("  7 / 2 = %d  (desimal hilang! bukan 3.5)\n", 7/2);
    printf("  1 / 3 = %d  (bukan 0.33, tapi 0!)\n", 1/3);
    printf("  Solusi: (float)7 / 2 = %.1f\n\n", (float)7/2);

    // Jebakan 2: = vs ==
    printf("  JEBAKAN 2: = (assign) vs == (bandingkan)\n");
    int val = 5;
    printf("  val = 5   -> mengisi val dengan 5\n");
    printf("  val == 5  -> mengecek apakah val sama dengan 5 = %d\n", val == 5);
    printf("  val == 10 -> %d (false)\n\n", val == 10);

    // Jebakan 3: Prioritas operator
    printf("  JEBAKAN 3: Prioritas Operator\n");
    printf("  2 + 3 * 4 = %d  (bukan 20! * duluan = 14)\n", 2 + 3 * 4);
    printf("  Mau 20? -> (2 + 3) * 4 = %d\n\n", (2 + 3) * 4);

    // Jebakan 4: Modulo
    printf("  JEBAKAN 4: %% hanya untuk integer!\n");
    printf("  10 %% 3 = %d  (OK)\n", 10 % 3);
    printf("  // 10.0 %% 3 = ERROR! float tidak bisa modulo\n\n");


    /* =====================================================================
     * DRILL 3: RUMUS MATEMATIKA -> KODE C (step by step)
     * =====================================================================
     *
     * LANGKAH-LANGKAH:
     * 1. Identifikasi variabel -> tentukan tipe data
     * 2. Deklarasikan semua variabel
     * 3. Tulis rumus dengan aturan:
     *    - Semua perkalian WAJIB pakai *
     *    - Pangkat: pow(x,n) atau x*x
     *    - Akar: sqrt(x)
     *    - Pakai kurung () untuk pecahan
     *    - Pakai 0.5 bukan 1/2
     */

    printf("=== DRILL 3: RUMUS MATEMATIKA -> KODE C ===\n\n");

    // Latihan A: y = 2x + 3
    float lx = 5.0;
    float ly = 2 * lx + 3;
    printf("  A. y = 2x + 3 (x=5)\n");
    printf("     SALAH: y = 2x + 3;         <- compile error!\n");
    printf("     BENAR: y = 2 * x + 3;      = %.1f\n\n", ly);

    // Latihan B: y = 3x^2 + 2x - 5
    lx = 4.0;
    ly = 3 * lx * lx + 2 * lx - 5;
    printf("  B. y = 3x^2 + 2x - 5 (x=4)\n");
    printf("     SALAH: y = 3x^2 + 2x - 5;  <- compile error!\n");
    printf("     BENAR: y = 3*x*x + 2*x - 5; = %.1f\n\n", ly);

    // Latihan C: rata = (a+b+c) / 3
    float va = 80, vb = 75, vc = 90;
    float rata_salah = va + vb + vc / 3;
    float rata_benar = (va + vb + vc) / 3.0;
    printf("  C. rata = (a+b+c) / 3  (a=80, b=75, c=90)\n");
    printf("     SALAH: a + b + c / 3  = %.1f  (hanya c dibagi!)\n", rata_salah);
    printf("     BENAR: (a+b+c) / 3.0  = %.1f\n\n", rata_benar);

    // Latihan D: s = v0*t + 1/2*a*t^2
    double v0 = 10.0, t = 3.0, acc = 2.0;
    double jarak = v0 * t + 0.5 * acc * t * t;
    printf("  D. s = v0*t + 1/2*a*t^2  (v0=10, t=3, a=2)\n");
    printf("     SALAH: v0*t + 1/2*a*t^2  <- 1/2=0, ^=XOR!\n");
    printf("     BENAR: v0*t + 0.5*a*t*t  = %.1f m\n\n", jarak);

    // Latihan E: F = G * m1 * m2 / r^2
    double G = 6.674e-11, m1 = 5.972e24, m2 = 80.0, r = 6.371e6;
    double F = G * m1 * m2 / (r * r);
    printf("  E. F = G*m1*m2 / r^2  (Gravitasi)\n");
    printf("     Kode: G*m1*m2 / (r*r)  <- kurung di (r*r)!\n");
    printf("     F = %.2f N\n\n", F);


    /* =====================================================================
     * DRILL 4: TABEL RINGKASAN TIPE DATA
     * =====================================================================
     */

    printf("=== DRILL 4: TABEL RINGKASAN ===\n\n");
    printf("  +----------+--------+-----------------+------------------+\n");
    printf("  | Tipe     | Ukuran | Contoh Nilai    | Kapan Dipakai    |\n");
    printf("  +----------+--------+-----------------+------------------+\n");
    printf("  | char     | 1 byte | 'A', '9', '@'   | Huruf, simbol    |\n");
    printf("  | int      | 4 byte | 42, -10, 0      | Bilangan bulat   |\n");
    printf("  | float    | 4 byte | 3.14, -0.5      | Desimal biasa    |\n");
    printf("  | double   | 8 byte | 3.14159265...   | Desimal presisi  |\n");
    printf("  | bool     | 1 byte | true, false      | Ya/Tidak         |\n");
    printf("  +----------+--------+-----------------+------------------+\n\n");

    printf("============================================================\n");
    printf("   Lanjut ke 03_latihan_soal.cpp!\n");
    printf("============================================================\n");

    return 0;
}
