/*
 * ============================================================================
 *  LATIHAN SOAL TOPIK 2: TIPE DATA, VARIABEL, DAN OPERATOR
 * ============================================================================
 *  Total: 15 soal (soal I/O dipindah ke TOPIK 3)
 *
 *  LEVEL:
 *  - Soal  1- 5: PEMULA    (deklarasi variabel, tipe data)
 *  - Soal  6-10: MENENGAH  (operator aritmatika, casting)
 *  - Soal 11-15: LANJUTAN  (rumus matematika, operator logika)
 *
 *  Kunci jawaban: 04_kunci_jawaban.cpp
 *  Compile: g++ 03_latihan_soal.cpp -o latihan && ./latihan
 * ============================================================================
 */

#include <stdio.h>

int main() {

    printf("============================================================\n");
    printf("   LATIHAN SOAL TOPIK 2: TIPE DATA & OPERATOR\n");
    printf("   Total: 15 Soal Bertahap\n");
    printf("============================================================\n\n");

    printf("=== LEVEL 1: PEMULA (Soal 1-5) ===\n\n");

    printf("SOAL 1: Deklarasi Variabel Dasar\n");
    printf("--------\n");
    printf("Deklarasikan variabel berikut DENGAN tipe data yang TEPAT:\n");
    printf("  - umur bernilai 20\n");
    printf("  - tinggi bernilai 175.5\n");
    printf("  - grade bernilai 'A'\n");
    printf("  - lulus bernilai true\n");
    printf("Cetak semua variabel tersebut.\n\n");

    printf("SOAL 2: Tipe Data yang Tepat\n");
    printf("--------\n");
    printf("Tentukan tipe data yang paling tepat dan deklarasikan:\n");
    printf("  - Jumlah penduduk Indonesia (270000000)\n");
    printf("  - Nilai pi (3.14159265358979)\n");
    printf("  - Kode pos (60111)\n");
    printf("  - Suhu ruangan (25.5)\n");
    printf("  - Jenis kelamin ('L' atau 'P')\n\n");

    printf("SOAL 3: Konstanta\n");
    printf("--------\n");
    printf("Buatlah program yang mendeklarasikan:\n");
    printf("  - const float PI = 3.14159\n");
    printf("  - const float GRAVITY = 9.8\n");
    printf("  - const int MAX_SCORE = 100\n");
    printf("Cetak semua konstanta dan jelaskan kenapa pakai const.\n\n");

    printf("SOAL 4: Ukuran Tipe Data\n");
    printf("--------\n");
    printf("Buatlah program yang mencetak ukuran (sizeof) setiap tipe:\n");
    printf("  - sizeof(char), sizeof(int), sizeof(float)\n");
    printf("  - sizeof(double), sizeof(bool)\n");
    printf("Petunjuk: printf(\"sizeof(int) = %%lu byte\", sizeof(int));\n\n");

    printf("SOAL 5: ASCII dan Char\n");
    printf("--------\n");
    printf("Buatlah program yang:\n");
    printf("  - Menyimpan char huruf = 'A'\n");
    printf("  - Mencetak karakter dan nilai ASCII-nya\n");
    printf("  - Menambahkan 1 ke huruf (huruf + 1) -> 'B'\n");
    printf("  - Cetak huruf besar 'a' dan kode ASCII-nya\n");
    printf("Petunjuk: %%c cetak karakter, %%d cetak angka ASCII\n\n");


    printf("=== LEVEL 2: MENENGAH (Soal 6-10) ===\n\n");

    printf("SOAL 6: Kalkulator Sederhana\n");
    printf("--------\n");
    printf("Deklarasikan int a=17, b=5. Cetak hasil:\n");
    printf("  a + b, a - b, a * b, a / b, a %% b\n");
    printf("Jelaskan kenapa 17/5 bukan 3.4!\n\n");

    printf("SOAL 7: Integer Division vs Float\n");
    printf("--------\n");
    printf("Buatlah program yang menunjukkan:\n");
    printf("  - int/int:   7 / 2 = ?\n");
    printf("  - float/int: 7.0 / 2 = ?\n");
    printf("  - casting:   (float)7 / 2 = ?\n");
    printf("  - int/int:   1 / 3 = ?\n");
    printf("Cetak semua hasil dan bandingkan.\n\n");

    printf("SOAL 8: Operator Assignment\n");
    printf("--------\n");
    printf("Mulai dengan int x = 100. Lakukan operasi bertahap:\n");
    printf("  x += 50  -> cetak (harusnya 150)\n");
    printf("  x -= 30  -> cetak (harusnya 120)\n");
    printf("  x *= 2   -> cetak (harusnya 240)\n");
    printf("  x /= 4   -> cetak (harusnya 60)\n");
    printf("  x %%= 7   -> cetak (harusnya 4)\n");
    printf("  x++      -> cetak (harusnya 5)\n\n");

    printf("SOAL 9: Konversi Menit ke Jam\n");
    printf("--------\n");
    printf("Deklarasikan int total_menit = 135.\n");
    printf("Hitung dan cetak:\n");
    printf("  jam = total_menit / 60\n");
    printf("  sisa = total_menit %% 60\n");
    printf("  Output: \"135 menit = 2 jam 15 menit\"\n\n");

    printf("SOAL 10: Konversi Detik\n");
    printf("--------\n");
    printf("Deklarasikan int total_detik = 3661.\n");
    printf("Konversi ke jam, menit, detik dan cetak:\n");
    printf("  \"3661 detik = 1 jam 1 menit 1 detik\"\n");
    printf("Petunjuk: jam=total/3600, menit=(total%%3600)/60, detik=total%%60\n\n");


    printf("=== LEVEL 3: LANJUTAN (Soal 11-15) ===\n\n");

    printf("SOAL 11: Konversi Suhu\n");
    printf("--------\n");
    printf("Deklarasikan float celsius = 100.0. Hitung:\n");
    printf("  Fahrenheit = (9.0/5.0) * C + 32\n");
    printf("  Reamur     = (4.0/5.0) * C\n");
    printf("  Kelvin     = C + 273.15\n");
    printf("AWAS: 9/5 = 1 (integer division!), pakai 9.0/5.0!\n\n");

    printf("SOAL 12: Operator Relasional & Logika\n");
    printf("--------\n");
    printf("Deklarasikan int usia=20, float ipk=3.5.\n");
    printf("Cetak hasil (0 atau 1):\n");
    printf("  usia >= 18\n");
    printf("  ipk >= 3.0\n");
    printf("  usia >= 18 && ipk >= 3.0  (boleh magang?)\n");
    printf("  usia < 21 || ipk >= 3.8   (dapat beasiswa?)\n");
    printf("  !(usia >= 18)\n\n");

    printf("SOAL 13: Pythagoras + Luas Lingkaran\n");
    printf("--------\n");
    printf("Buatlah program yang menghitung:\n");
    printf("  Sisi miring segitiga: c = sqrt(a*a + b*b)\n");
    printf("  Luas lingkaran: L = PI * r * r\n");
    printf("  Keliling lingkaran: K = 2 * PI * r\n");
    printf("Dengan a=3, b=4, r=7. Pakai #include <math.h>, compile -lm\n\n");

    printf("SOAL 14: Rumus ABC (Kuadratik)\n");
    printf("--------\n");
    printf("Untuk persamaan x^2 - 5x + 6 = 0 (a=1, b=-5, c=6):\n");
    printf("  D = b*b - 4*a*c\n");
    printf("  x1 = (-b + sqrt(D)) / (2*a)\n");
    printf("  x2 = (-b - sqrt(D)) / (2*a)\n");
    printf("Harusnya: x1=3, x2=2. Compile dengan -lm!\n\n");

    printf("SOAL 15: Laporan Fisika\n");
    printf("--------\n");
    printf("Deklarasikan: m=10.0kg, v=5.0m/s, h=20.0m, g=9.8m/s^2\n");
    printf("Hitung dan cetak:\n");
    printf("  Ek = 0.5 * m * v * v\n");
    printf("  Ep = m * g * h\n");
    printf("  Em = Ek + Ep\n");
    printf("Cetak laporan rapi dengan label dan satuan.\n\n");

    printf("=== SOAL BONUS / OUT OF THE BOX ===\n\n");

    printf("SOAL 16: Integer Overflow & Modulo Ajaib\n");
    printf("--------\n");
    printf("a. Deklarasikan int maksimum = 2147483647 (batas maksimal int). Tambahkan 1.\n");
    printf("   Lalu cetak hasilnya. Apa yang terjadi dan mengapa?\n");
    printf("b. Tentukan apakah angka N genap atau ganjil TANPA menggunakan statement if/else!\n");
    printf("   Petunjuk: Manfaatkan operator ternary ( ? : ) atau array string sederhana.\n\n");

    printf("============================================================\n");
    printf("   Kunci jawaban: 04_kunci_jawaban.cpp\n");
    printf("============================================================\n");

    return 0;
}
