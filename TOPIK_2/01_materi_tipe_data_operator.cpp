/*
 * ============================================================================
 *  TOPIK 2 : TIPE DATA, VARIABEL, DAN OPERATOR
 * ============================================================================
 *  Mata Kuliah  : Dasar Pemrograman
 *  Penyusun     : Tim Pengajar
 *  Tanggal      : 4 Mei 2026
 *
 *  FOKUS TOPIK INI:
 *  1. Tipe data dasar (int, float, double, char, bool)
 *  2. Deklarasi dan inisialisasi variabel
 *  3. Operator aritmatika, assignment, relasional, logika
 *  4. Prioritas operator
 *  5. Type casting
 *  6. Menerjemahkan rumus matematika ke kode C
 *
 *  CATATAN: Materi printf/scanf secara mendalam ada di TOPIK 3 (I/O).
 *  Di sini printf hanya dipakai sebagai alat bantu untuk menampilkan hasil.
 *
 *  Compile : g++ 01_materi_tipe_data_operator.cpp -o materi -lm
 *  Jalankan: ./materi
 * ============================================================================
 */

#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <limits.h>
#include <float.h>

int main() {

    printf("============================================================\n");
    printf("   TOPIK 2: TIPE DATA, VARIABEL, DAN OPERATOR\n");
    printf("============================================================\n\n");

    /* =====================================================================
     * BAGIAN 1: TIPE DATA DASAR
     * =====================================================================
     *
     * Tipe data menentukan JENIS NILAI yang bisa disimpan di variabel.
     *
     * Analoginya seperti kotak penyimpanan:
     *   - Kotak kecil (char)   -> cukup untuk 1 huruf
     *   - Kotak sedang (int)   -> cukup untuk bilangan bulat
     *   - Kotak besar (float)  -> cukup untuk bilangan desimal
     *   - Kotak XL (double)    -> desimal presisi tinggi
     *
     * TABEL TIPE DATA DASAR:
     * ---------------------------------------------------------------
     * | Tipe Data | Ukuran  | Kegunaan            | Contoh Nilai    |
     * |-----------|---------|---------------------|-----------------|
     * | char      | 1 byte  | 1 karakter/huruf    | 'A', 'z', '9'  |
     * | int       | 4 byte  | Bilangan bulat      | 42, -10, 0      |
     * | float     | 4 byte  | Desimal (presisi 6) | 3.14, -0.5      |
     * | double    | 8 byte  | Desimal (presisi 15)| 3.14159265358   |
     * | bool      | 1 byte  | Benar/Salah         | true, false     |
     * ---------------------------------------------------------------
     *
     * INGAT: Tipe data HARUS sesuai dengan nilai yang disimpan!
     */

    printf("=== BAGIAN 1: TIPE DATA DASAR ===\n\n");

    // --- 1.1 Tipe char ---
    // Menyimpan SATU karakter, diapit tanda kutip SATU (')
    // SALAH: char huruf = "A";   <-- kutip dua = string, bukan char!
    // BENAR: char huruf = 'A';   <-- kutip satu = char
    char huruf = 'A';
    char angka_char = '5';    // Ini KARAKTER '5', bukan angka 5!
    char simbol = '@';

    printf("[char]\n");
    printf("  huruf      = %c\n", huruf);
    printf("  angka_char = %c  (ini karakter, bukan angka!)\n", angka_char);
    printf("  simbol     = %c\n", simbol);
    printf("  ASCII 'A'  = %d  (setiap char punya kode angka)\n\n", huruf);

    // --- 1.2 Tipe int ---
    // Bilangan bulat (tanpa koma), bisa positif dan negatif
    int umur = 20;
    int suhu_kutub = -40;
    int populasi = 1000000;

    printf("[int]\n");
    printf("  umur       = %d\n", umur);
    printf("  suhu_kutub = %d\n", suhu_kutub);
    printf("  populasi   = %d\n", populasi);
    printf("  Range: %d s/d %d\n\n", INT_MIN, INT_MAX);

    // --- 1.3 Tipe float ---
    // Bilangan desimal, presisi sekitar 6-7 digit
    float pi = 3.14159;
    float suhu_badan = 36.5;

    printf("[float]\n");
    printf("  pi         = %f   (default 6 desimal)\n", pi);
    printf("  suhu_badan = %.1f (1 desimal)\n", suhu_badan);
    printf("  Presisi    : ~%d digit signifikan\n\n", FLT_DIG);

    // --- 1.4 Tipe double ---
    // Seperti float tapi LEBIH PRESISI (15-16 digit)
    double pi_presisi = 3.141592653589793;
    double akar_dua = 1.41421356237;

    printf("[double]\n");
    printf("  pi_presisi = %.15f  (15 digit!)\n", pi_presisi);
    printf("  akar_dua   = %.11f\n", akar_dua);
    printf("  Presisi    : ~%d digit signifikan\n\n", DBL_DIG);

    // --- 1.5 Tipe bool ---
    // Hanya 2 nilai: true (1) atau false (0)
    // Perlu: #include <stdbool.h>
    bool sudah_makan = true;
    bool hujan = false;

    printf("[bool] (perlu #include <stdbool.h>)\n");
    printf("  sudah_makan = %d  (true  = 1)\n", sudah_makan);
    printf("  hujan       = %d  (false = 0)\n\n", hujan);


    /* =====================================================================
     * BAGIAN 2: DEKLARASI DAN INISIALISASI VARIABEL
     * =====================================================================
     *
     * ATURAN PENAMAAN VARIABEL:
     *   1. Boleh: huruf, angka, underscore (_)
     *   2. HARUS diawali huruf atau _, TIDAK BOLEH angka
     *   3. TIDAK BOLEH pakai kata kunci C (int, float, return, dll)
     *   4. Case-sensitive: "Umur" != "umur"
     *
     *   BENAR: umur, nilai_uts, totalHarga, _count, mhs1
     *   SALAH: 1mhs, float, nilai-uts, total harga
     *
     * KESALAHAN UMUM DEKLARASI:
     * -----------------------------------------------------------------------
     * | SALAH                     | BENAR                   | Alasan        |
     * |---------------------------|-------------------------|---------------|
     * | umur = 20;                | int umur = 20;          | Lupa tipe     |
     * | int nilai = 85.5;         | float nilai = 85.5;     | Tipe salah    |
     * | char grade = "A";         | char grade = 'A';       | " vs '        |
     * | int 1angka = 5;           | int angka1 = 5;         | Awalan angka  |
     * | int nilai uts = 80;       | int nilai_uts = 80;     | Ada spasi     |
     * | Int umur = 20;            | int umur = 20;          | Case salah    |
     * -----------------------------------------------------------------------
     */

    printf("=== BAGIAN 2: DEKLARASI DAN INISIALISASI VARIABEL ===\n\n");

    // Cara 1: Deklarasi dulu, isi nanti
    int tinggi_badan;
    tinggi_badan = 170;

    // Cara 2: Deklarasi + inisialisasi sekaligus (DISARANKAN)
    int berat_badan = 65;

    // Cara 3: Beberapa variabel sekaligus
    int a = 10, b = 20, c = 30;

    // Cara 4: Konstanta (tidak bisa diubah)
    const float GRAVITY = 9.8;
    const double PI = 3.14159265358979;
    // GRAVITY = 10.0;  // ERROR! Konstanta tidak bisa diubah

    printf("  tinggi_badan = %d cm\n", tinggi_badan);
    printf("  berat_badan  = %d kg\n", berat_badan);
    printf("  a=%d, b=%d, c=%d\n", a, b, c);
    printf("  GRAVITY = %.1f m/s^2 (konstanta)\n");
    printf("  PI      = %.10f (konstanta)\n\n", PI);


    /* =====================================================================
     * BAGIAN 3: OPERATOR ARITMATIKA
     * =====================================================================
     *
     * | Operator | Fungsi         | Contoh    | Hasil |
     * |----------|----------------|-----------|-------|
     * | +        | Penjumlahan    | 10 + 3    | 13    |
     * | -        | Pengurangan    | 10 - 3    | 7     |
     * | *        | Perkalian      | 10 * 3    | 30    |
     * | /        | Pembagian      | 10 / 3    | 3 (!) |
     * | %        | Modulo (sisa)  | 10 % 3    | 1     |
     *
     * JEBAKAN PEMBAGIAN INTEGER:
     *   10 / 3   = 3      (bukan 3.33! desimal dibuang!)
     *   10.0 / 3 = 3.333  (salah satu harus float/double)
     */

    printf("=== BAGIAN 3: OPERATOR ARITMATIKA ===\n\n");

    int x = 10, y = 3;
    printf("  x = %d, y = %d\n\n", x, y);
    printf("  x + y  = %d\n", x + y);
    printf("  x - y  = %d\n", x - y);
    printf("  x * y  = %d\n", x * y);
    printf("  x / y  = %d  <-- AWAS! Desimal hilang!\n", x / y);
    printf("  x %% y  = %d  (sisa bagi)\n\n", x % y);

    // Pembagian integer vs float
    printf("  JEBAKAN PEMBAGIAN:\n");
    printf("  10 / 3       = %d   (int / int = int, desimal hilang!)\n", 10 / 3);
    printf("  10.0 / 3     = %.2f (float / int = float, aman!)\n", 10.0 / 3);
    printf("  (float)10 / 3= %.2f (casting ke float, aman!)\n\n", (float)10 / 3);

    // Modulo
    printf("  MODULO (sisa bagi) - berguna untuk:\n");
    printf("  Cek genap/ganjil: 8 %% 2 = %d (genap!)\n", 8 % 2);
    printf("  Cek genap/ganjil: 7 %% 2 = %d (ganjil!)\n", 7 % 2);
    printf("  Ambil digit: 1234 %% 10 = %d (digit terakhir)\n", 1234 % 10);
    printf("  Sisa waktu: 135 %% 60 = %d menit\n\n", 135 % 60);


    /* =====================================================================
     * BAGIAN 4: OPERATOR ASSIGNMENT (PENUGASAN)
     * =====================================================================
     *
     * | Operator | Contoh  | Sama Dengan  |
     * |----------|---------|--------------|
     * | =        | x = 5   | x = 5        |
     * | +=       | x += 3  | x = x + 3    |
     * | -=       | x -= 3  | x = x - 3    |
     * | *=       | x *= 3  | x = x * 3    |
     * | /=       | x /= 3  | x = x / 3    |
     * | %=       | x %= 3  | x = x % 3    |
     * | ++       | x++     | x = x + 1    |
     * | --       | x--     | x = x - 1    |
     */

    printf("=== BAGIAN 4: OPERATOR ASSIGNMENT ===\n\n");

    int n = 10;
    printf("  Awal: n = %d\n", n);
    n += 5;   printf("  n += 5  -> n = %d\n", n);   // 15
    n -= 3;   printf("  n -= 3  -> n = %d\n", n);   // 12
    n *= 2;   printf("  n *= 2  -> n = %d\n", n);   // 24
    n /= 4;   printf("  n /= 4  -> n = %d\n", n);   // 6
    n %= 4;   printf("  n %%= 4  -> n = %d\n", n);   // 2
    n++;      printf("  n++     -> n = %d\n", n);   // 3
    n--;      printf("  n--     -> n = %d\n\n", n);  // 2

    // Prefix vs Postfix
    int m = 5;
    printf("  PREFIX vs POSTFIX:\n");
    printf("  m = %d\n", m);
    printf("  m++ -> cetak %d dulu, baru tambah (postfix)\n", m++);
    printf("  sekarang m = %d\n", m);
    printf("  ++m -> tambah dulu, baru cetak %d (prefix)\n\n", ++m);


    /* =====================================================================
     * BAGIAN 5: OPERATOR RELASIONAL (PERBANDINGAN)
     * =====================================================================
     *
     * Menghasilkan 1 (true) atau 0 (false)
     *
     * | Operator | Arti                  | 5 vs 3 | Hasil |
     * |----------|-----------------------|--------|-------|
     * | ==       | Sama dengan           | 5 == 3 | 0     |
     * | !=       | Tidak sama            | 5 != 3 | 1     |
     * | >        | Lebih besar           | 5 > 3  | 1     |
     * | <        | Lebih kecil           | 5 < 3  | 0     |
     * | >=       | Lebih besar atau sama | 5 >= 3 | 1     |
     * | <=       | Lebih kecil atau sama | 5 <= 3 | 0     |
     *
     * AWAS: == (bandingkan) vs = (isi nilai) !!!
     */

    printf("=== BAGIAN 5: OPERATOR RELASIONAL ===\n\n");

    int p = 5, q = 3;
    printf("  p = %d, q = %d\n\n", p, q);
    printf("  p == q -> %d  (sama dengan?)\n", p == q);
    printf("  p != q -> %d  (tidak sama?)\n", p != q);
    printf("  p > q  -> %d  (lebih besar?)\n", p > q);
    printf("  p < q  -> %d  (lebih kecil?)\n", p < q);
    printf("  p >= q -> %d  (>=?)\n", p >= q);
    printf("  p <= q -> %d  (<=?)\n\n", p <= q);


    /* =====================================================================
     * BAGIAN 6: OPERATOR LOGIKA
     * =====================================================================
     *
     * | Operator | Arti | Penjelasan                          |
     * |----------|------|-------------------------------------|
     * | &&       | AND  | Benar jika KEDUA kondisi benar      |
     * | ||       | OR   | Benar jika SALAH SATU benar         |
     * | !        | NOT  | Membalik (true->false, false->true)  |
     *
     * TABEL KEBENARAN:
     *   true  && true  = true       true  || true  = true
     *   true  && false = false      true  || false = true
     *   false && true  = false      false || true  = true
     *   false && false = false      false || false = false
     */

    printf("=== BAGIAN 6: OPERATOR LOGIKA ===\n\n");

    int nilai = 75;
    bool lulus = (nilai >= 60);
    bool cumlaude = (nilai >= 90);

    printf("  nilai = %d\n", nilai);
    printf("  lulus (>=60)    = %d\n", lulus);
    printf("  cumlaude (>=90) = %d\n\n", cumlaude);
    printf("  lulus && cumlaude = %d  (AND)\n", lulus && cumlaude);
    printf("  lulus || cumlaude = %d  (OR)\n", lulus || cumlaude);
    printf("  !lulus            = %d  (NOT)\n\n", !lulus);

    // Contoh nyata
    int usia_mhs = 20;
    float ipk_mhs = 3.5;
    printf("  Contoh: usia=%d, ipk=%.1f\n", usia_mhs, ipk_mhs);
    printf("  Boleh magang?    (usia>=18 && ipk>=3.0) = %d\n",
           (usia_mhs >= 18) && (ipk_mhs >= 3.0));
    printf("  Dapat beasiswa?  (ipk>=3.8 || usia<=19) = %d\n\n",
           (ipk_mhs >= 3.8) || (usia_mhs <= 19));


    /* =====================================================================
     * BAGIAN 7: PRIORITAS OPERATOR
     * =====================================================================
     *
     * Urutan dari TERTINGGI ke TERENDAH:
     * | Prioritas | Operator       | Contoh          |
     * |-----------|----------------|-----------------|
     * | 1 (tinggi)| ()             | (2 + 3) * 4    |
     * | 2         | ! ++ --        | !true, x++      |
     * | 3         | * / %          | 2 * 3           |
     * | 4         | + -            | 2 + 3           |
     * | 5         | < <= > >=      | x > 5           |
     * | 6         | == !=          | x == 5          |
     * | 7         | &&             | a && b          |
     * | 8         | ||             | a || b          |
     * | 9 (rendah)| = += -= dll    | x = 5           |
     *
     * TIPS: Kalau ragu, PAKAI KURUNG ()!
     */

    printf("=== BAGIAN 7: PRIORITAS OPERATOR ===\n\n");

    printf("  2 + 3 * 4    = %d  (* duluan!)\n", 2 + 3 * 4);
    printf("  (2 + 3) * 4  = %d  (kurung duluan!)\n", (2 + 3) * 4);
    printf("  10 - 4 / 2   = %d  (/ duluan!)\n", 10 - 4 / 2);
    printf("  (10 - 4) / 2 = %d  (kurung duluan!)\n\n", (10 - 4) / 2);


    /* =====================================================================
     * BAGIAN 8: TYPE CASTING (KONVERSI TIPE DATA)
     * =====================================================================
     *
     * Implicit casting : otomatis (int -> float saat dicampur)
     * Explicit casting : manual dengan (tipe) variabel
     *
     * PENTING:
     *   (int)9.99 = 9   <- DIPOTONG, bukan dibulatkan!
     */

    printf("=== BAGIAN 8: TYPE CASTING ===\n\n");

    int bil = 7, pembagi = 2;
    printf("  Tanpa casting: 7 / 2 = %d   (desimal hilang!)\n", bil / pembagi);
    printf("  Dengan casting: (float)7 / 2 = %.1f\n", (float)bil / pembagi);

    float desimal = 9.99;
    printf("  (int)9.99 = %d  (dipotong, BUKAN dibulatkan!)\n\n", (int)desimal);

    // Implicit casting
    int angka_int = 5;
    float hasil_campur = angka_int + 2.5;  // int + float -> float
    printf("  int 5 + float 2.5 = %.1f  (otomatis jadi float)\n\n", hasil_campur);


    /* =====================================================================
     * BAGIAN 9: RUMUS MATEMATIKA -> KODE C
     * =====================================================================
     *
     * ATURAN PENTING:
     * 1. Perkalian HARUS eksplisit: 2x -> 2 * x (BUKAN 2x)
     * 2. Pangkat: x^2 -> x*x atau pow(x,2) (BUKAN x^2, itu XOR!)
     * 3. Akar: sqrt(x) dari <math.h>
     * 4. Pecahan: (a+b)/(c+d) -> PAKAI KURUNG!
     *    a+b/c+d hanya membagi b dengan c!
     * 5. Hindari integer division: 1/2 = 0! Pakai 0.5 atau 1.0/2.0
     */

    printf("=== BAGIAN 9: RUMUS MATEMATIKA -> KODE C ===\n\n");

    // Contoh 1: Luas Lingkaran = pi * r^2
    double r = 7.0;
    double luas_lingkaran = PI * r * r;
    printf("  1. Luas Lingkaran: L = pi * r^2\n");
    printf("     Kode: PI * r * r\n");
    printf("     r=%.0f -> L = %.2f\n\n", r, luas_lingkaran);

    // Contoh 2: Pythagoras c = sqrt(a^2 + b^2)
    double sisi_a = 3.0, sisi_b = 4.0;
    double sisi_c = sqrt(sisi_a * sisi_a + sisi_b * sisi_b);
    printf("  2. Pythagoras: c = sqrt(a^2 + b^2)\n");
    printf("     Kode: sqrt(a*a + b*b)\n");
    printf("     a=%.0f, b=%.0f -> c = %.2f\n\n", sisi_a, sisi_b, sisi_c);

    // Contoh 3: Konversi Suhu F = (9/5)*C + 32
    float celsius = 37.0;
    float fahrenheit = (9.0 / 5.0) * celsius + 32;
    printf("  3. Suhu: F = (9/5)*C + 32\n");
    printf("     SALAH: (9/5)*C+32 = %d  (9/5=1!)\n", (9/5)*(int)celsius+32);
    printf("     BENAR: (9.0/5.0)*C+32 = %.1f\n\n", fahrenheit);

    // Contoh 4: Rumus ABC x = (-b +/- sqrt(b^2-4ac)) / (2a)
    double ka = 1.0, kb = -5.0, kc = 6.0;
    double D = kb*kb - 4*ka*kc;
    double x1 = (-kb + sqrt(D)) / (2*ka);
    double x2 = (-kb - sqrt(D)) / (2*ka);
    printf("  4. Rumus ABC: x^2 - 5x + 6 = 0\n");
    printf("     Kode: x = (-b + sqrt(b*b - 4*a*c)) / (2*a)\n");
    printf("     x1=%.1f, x2=%.1f\n\n", x1, x2);

    // Contoh 5: Energi Kinetik Ek = 1/2 * m * v^2
    double massa = 10.0, vel = 5.0;
    double ek = 0.5 * massa * vel * vel;
    printf("  5. Energi Kinetik: Ek = 1/2 * m * v^2\n");
    printf("     SALAH: 1/2*m*v*v (1/2=0!)\n");
    printf("     BENAR: 0.5*m*v*v = %.1f J\n\n", ek);

    // Contoh 6: Hukum Ohm V=IR, I=V/R
    float V = 12.0, R = 4.0;
    float I = V / R;
    printf("  6. Hukum Ohm: I = V / R\n");
    printf("     V=%.0f, R=%.0f -> I=%.1f A\n\n", V, R, I);

    // Contoh 7: BMI = berat / tinggi_m^2
    float berat = 70.0, tinggi_m = 1.75;
    float bmi = berat / (tinggi_m * tinggi_m);
    printf("  7. BMI = berat / tinggi^2\n");
    printf("     %.0fkg / (%.2fm)^2 = %.1f\n\n", berat, tinggi_m, bmi);

    // Contoh 8: Rata-rata
    float n1 = 80, n2 = 75, n3 = 90;
    float rata = (n1 + n2 + n3) / 3.0;  // 3.0 bukan 3!
    printf("  8. Rata-rata = (a+b+c)/3\n");
    printf("     SALAH: (80+75+90)/3 = %d  (integer division!)\n", (80+75+90)/3);
    printf("     BENAR: (80+75+90)/3.0 = %.2f\n\n", rata);


    printf("============================================================\n");
    printf("   SELESAI! Lanjut ke 02_remedial_drill.cpp\n");
    printf("============================================================\n");

    return 0;
}
