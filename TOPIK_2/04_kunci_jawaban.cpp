/*
 * ============================================================================
 *  KUNCI JAWABAN TOPIK 2: TIPE DATA, VARIABEL, DAN OPERATOR
 * ============================================================================
 *  Compile: g++ 04_kunci_jawaban.cpp -o jawaban -lm && ./jawaban
 * ============================================================================
 */

#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <limits.h>
#include <float.h>

int main() {
    printf("============================================================\n");
    printf("   KUNCI JAWABAN TOPIK 2: TIPE DATA & OPERATOR\n");
    printf("============================================================\n\n");

    // === SOAL 1 ===
    printf("--- SOAL 1: Deklarasi Variabel Dasar ---\n");
    int umur = 20;
    float tinggi = 175.5;
    char grade = 'A';
    bool lulus = true;
    printf("  umur   = %d\n", umur);
    printf("  tinggi = %.1f\n", tinggi);
    printf("  grade  = %c\n", grade);
    printf("  lulus  = %d\n\n", lulus);

    // === SOAL 2 ===
    printf("--- SOAL 2: Tipe Data yang Tepat ---\n");
    long penduduk = 270000000;     // long karena > INT_MAX di beberapa sistem
    double pi_val = 3.14159265358979;  // double untuk presisi tinggi
    int kode_pos = 60111;          // int cukup
    float suhu_ruangan = 25.5;     // float cukup
    char jenis_kelamin = 'L';      // char untuk 1 karakter
    printf("  penduduk      = %ld (long)\n", penduduk);
    printf("  pi            = %.14f (double)\n", pi_val);
    printf("  kode_pos      = %d (int)\n", kode_pos);
    printf("  suhu_ruangan  = %.1f (float)\n", suhu_ruangan);
    printf("  jenis_kelamin = %c (char)\n\n", jenis_kelamin);

    // === SOAL 3 ===
    printf("--- SOAL 3: Konstanta ---\n");
    const float PI = 3.14159;
    const float GRAVITY = 9.8;
    const int MAX_SCORE = 100;
    printf("  PI        = %.5f\n", PI);
    printf("  GRAVITY   = %.1f\n", GRAVITY);
    printf("  MAX_SCORE = %d\n", MAX_SCORE);
    printf("  const = nilai tidak bisa diubah setelah deklarasi\n\n");

    // === SOAL 4 ===
    printf("--- SOAL 4: Ukuran Tipe Data ---\n");
    printf("  sizeof(char)   = %lu byte\n", sizeof(char));
    printf("  sizeof(int)    = %lu byte\n", sizeof(int));
    printf("  sizeof(float)  = %lu byte\n", sizeof(float));
    printf("  sizeof(double) = %lu byte\n", sizeof(double));
    printf("  sizeof(bool)   = %lu byte\n\n", sizeof(bool));

    // === SOAL 5 ===
    printf("--- SOAL 5: ASCII dan Char ---\n");
    char huruf = 'A';
    printf("  '%c' = ASCII %d\n", huruf, huruf);
    printf("  '%c' + 1 = '%c' (ASCII %d)\n", huruf, huruf + 1, huruf + 1);
    char huruf_kecil = 'a';
    printf("  '%c' = ASCII %d\n", huruf_kecil, huruf_kecil);
    printf("  Selisih 'a'-'A' = %d\n\n", 'a' - 'A');

    // === SOAL 6 ===
    printf("--- SOAL 6: Kalkulator Sederhana ---\n");
    int a = 17, b = 5;
    printf("  a=%d, b=%d\n", a, b);
    printf("  a + b = %d\n", a + b);
    printf("  a - b = %d\n", a - b);
    printf("  a * b = %d\n", a * b);
    printf("  a / b = %d  (integer division! 17/5=3 bukan 3.4)\n", a / b);
    printf("  a %% b = %d\n\n", a % b);

    // === SOAL 7 ===
    printf("--- SOAL 7: Integer Division vs Float ---\n");
    printf("  7 / 2         = %d\n", 7 / 2);
    printf("  7.0 / 2       = %.1f\n", 7.0 / 2);
    printf("  (float)7 / 2  = %.1f\n", (float)7 / 2);
    printf("  1 / 3         = %d  (bukan 0.33!)\n\n", 1 / 3);

    // === SOAL 8 ===
    printf("--- SOAL 8: Operator Assignment ---\n");
    int x = 100;
    printf("  x = %d\n", x);
    x += 50;  printf("  x += 50 -> %d\n", x);
    x -= 30;  printf("  x -= 30 -> %d\n", x);
    x *= 2;   printf("  x *= 2  -> %d\n", x);
    x /= 4;   printf("  x /= 4  -> %d\n", x);
    x %= 7;   printf("  x %%= 7  -> %d\n", x);
    x++;      printf("  x++     -> %d\n\n", x);

    // === SOAL 9 ===
    printf("--- SOAL 9: Konversi Menit ---\n");
    int total_menit = 135;
    int jam = total_menit / 60;
    int sisa = total_menit % 60;
    printf("  %d menit = %d jam %d menit\n\n", total_menit, jam, sisa);

    // === SOAL 10 ===
    printf("--- SOAL 10: Konversi Detik ---\n");
    int total_detik = 3661;
    int jam_h = total_detik / 3600;
    int menit_h = (total_detik % 3600) / 60;
    int detik_h = total_detik % 60;
    printf("  %d detik = %d jam %d menit %d detik\n\n",
           total_detik, jam_h, menit_h, detik_h);

    // === SOAL 11 ===
    printf("--- SOAL 11: Konversi Suhu ---\n");
    float celsius = 100.0;
    float fahr = (9.0/5.0) * celsius + 32;
    float reamur = (4.0/5.0) * celsius;
    float kelvin = celsius + 273.15;
    printf("  %.0f C = %.1f F = %.1f R = %.2f K\n\n", celsius, fahr, reamur, kelvin);

    // === SOAL 12 ===
    printf("--- SOAL 12: Operator Relasional & Logika ---\n");
    int usia = 20;
    float ipk = 3.5;
    printf("  usia=%d, ipk=%.1f\n", usia, ipk);
    printf("  usia >= 18              = %d\n", usia >= 18);
    printf("  ipk >= 3.0              = %d\n", ipk >= 3.0);
    printf("  usia>=18 && ipk>=3.0    = %d (magang)\n", (usia>=18) && (ipk>=3.0));
    printf("  usia<21 || ipk>=3.8     = %d (beasiswa)\n", (usia<21) || (ipk>=3.8));
    printf("  !(usia >= 18)           = %d\n\n", !(usia >= 18));

    // === SOAL 13 ===
    printf("--- SOAL 13: Pythagoras + Lingkaran ---\n");
    double sa = 3.0, sb = 4.0;
    double sc = sqrt(sa*sa + sb*sb);
    double r = 7.0;
    double luas = 3.14159 * r * r;
    double keliling = 2 * 3.14159 * r;
    printf("  Pythagoras: c = sqrt(3^2+4^2) = %.2f\n", sc);
    printf("  Luas lingkaran (r=7): %.2f\n", luas);
    printf("  Keliling lingkaran:   %.2f\n\n", keliling);

    // === SOAL 14 ===
    printf("--- SOAL 14: Rumus ABC ---\n");
    double ka = 1.0, kb = -5.0, kc = 6.0;
    double D = kb*kb - 4*ka*kc;
    double x1 = (-kb + sqrt(D)) / (2*ka);
    double x2 = (-kb - sqrt(D)) / (2*ka);
    printf("  x^2 - 5x + 6 = 0\n");
    printf("  D = %.1f, x1 = %.1f, x2 = %.1f\n\n", D, x1, x2);

    // === SOAL 15 ===
    printf("--- SOAL 15: Laporan Fisika ---\n");
    double m = 10.0, v = 5.0, h = 20.0, g = 9.8;
    double Ek = 0.5 * m * v * v;
    double Ep = m * g * h;
    double Em = Ek + Ep;
    printf("  ================================\n");
    printf("    LAPORAN ENERGI MEKANIK\n");
    printf("  ================================\n");
    printf("  Massa (m)     : %.1f kg\n", m);
    printf("  Kecepatan (v) : %.1f m/s\n", v);
    printf("  Ketinggian (h): %.1f m\n", h);
    printf("  Gravitasi (g) : %.1f m/s^2\n", g);
    printf("  --------------------------------\n");
    printf("  Ek = 0.5*m*v^2 = %.1f J\n", Ek);
    printf("  Ep = m*g*h     = %.1f J\n", Ep);
    printf("  Em = Ek + Ep   = %.1f J\n", Em);
    printf("  ================================\n\n");

    // === SOAL 16 ===
    printf("--- SOAL 16: BONUS / OUT OF THE BOX ---\n");
    // a. Integer Overflow
    int maksimum = 2147483647;
    printf("  Nilai awal maksimum: %d\n", maksimum);
    maksimum = maksimum + 1;
    printf("  Setelah ditambah 1 : %d\n", maksimum);
    printf("  Penjelasan: Terjadi Integer Overflow. Kapasitas memori penuh,\n");
    printf("  sehingga nilai berbalik ke batas minimum negatif.\n\n");

    // b. Ganjil/Genap tanpa if/else
    int angka_test = 42;
    printf("  Angka test: %d\n", angka_test);
    // Menggunakan ternary operator
    printf("  Cek Ternary: %s\n", (angka_test % 2 == 0) ? "Genap" : "Ganjil");
    // Menggunakan array of string
    const char* status[] = {"Genap", "Ganjil"};
    printf("  Cek Array  : %s\n\n", status[angka_test % 2]);

    return 0;
}
