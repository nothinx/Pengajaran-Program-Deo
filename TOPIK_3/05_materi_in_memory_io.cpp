/*
 * ============================================================================
 *  TOPIK 3 (DEEP DIVE): IN-MEMORY I/O (SPRINTF & SSCANF)
 * ============================================================================
 *  Materi Khusus: Tingkat Lanjut Pemrosesan String / Data Berangkai
 *
 *  TUJUAN PEMBELAJARAN:
 *  1. Memahami apa itu In-Memory I/O.
 *  2. Menggunakan sprintf() untuk menggabungkan string dan angka ke dalam memori.
 *  3. Menggunakan sscanf() untuk membedah/ekstrak data dari sebuah kalimat.
 *  4. Sangat berguna untuk memproses data dari Modul GPS, Serial Komunikasi, 
 *     atau pemrosesan paket data di jaringan (IoT/Robotika).
 * ============================================================================
 */

#include <stdio.h>

int main() {
    printf("============================================================\n");
    printf("   DEEP DIVE: IN-MEMORY I/O (SPRINTF & SSCANF)\n");
    printf("============================================================\n\n");

    /*
     * Secara standar:
     * - printf() mencetak ke layar.
     * - scanf() membaca dari keyboard.
     * - fprintf() mencetak ke file.
     * - fscanf() membaca dari file.
     *
     * Nah, sprintf() dan sscanf() beroperasi LANGSUNG PADA STRING DI MEMORI (Variabel),
     * bukan pada layar, keyboard, atau file.
     */

    printf("=== 1. SPRINTF: MEMBUAT STRING DARI GABUNGAN DATA ===\n\n");
    
    // Kasus: Kita punya data sensor yang terpisah, dan ingin menggabungkannya
    // menjadi 1 kalimat utuh untuk dikirim via WiFi/Bluetooth.
    int id_sensor = 101;
    float suhu = 34.5;
    float kelembaban = 60.2;
    
    // Siapkan array karakter (string) untuk menyimpan hasil gabungan
    char paket_data[100]; 

    // sprintf merakit data persis seperti printf, namun hasilnya DISIMPAN ke paket_data
    sprintf(paket_data, "SENSOR_%d_DATA: TEMP=%.1f HUM=%.1f", id_sensor, suhu, kelembaban);

    printf("Variabel mentah   : ID=%d, Suhu=%.1f, Lembab=%.1f\n", id_sensor, suhu, kelembaban);
    printf("Hasil sprintf()   : %s\n", paket_data);
    printf("(String ini sekarang siap dikirim via jaringan!)\n\n");


    printf("=== 2. SSCANF: MEMBEDAH/EKSTRAK DATA DARI STRING ===\n\n");
    
    // Kasus: Robot kita menerima data kordinat GPS berbentuk teks utuh
    // dari satelit, dan kita butuh memisahkan angka Lat/Long-nya.
    char data_gps[] = "$GPGGA,123519,4807.038,N,01131.000,E,1";

    // Variabel untuk menampung hasil ekstrak
    char tipe_log[10];
    int waktu;
    float latitude;
    char arah_lat;
    float longitude;
    char arah_long;
    int fix_quality;

    // sscanf membedah string 'data_gps' berdasarkan pemisah (misal koma ',')
    // Trik: Kita menulis koma di format string agar sscanf tahu batas datanya.
    sscanf(data_gps, "%[^,],%d,%f,%c,%f,%c,%d", 
           tipe_log, &waktu, &latitude, &arah_lat, &longitude, &arah_long, &fix_quality);

    printf("String GPS Mentah : %s\n", data_gps);
    printf("\nHasil Ekstraksi dengan sscanf():\n");
    printf("- Tipe Pesan : %s\n", tipe_log);
    printf("- Waktu (UTC): %d\n", waktu);
    printf("- Latitude   : %.3f %c\n", latitude, arah_lat);
    printf("- Longitude  : %.3f %c\n", longitude, arah_long);
    printf("- Kualitas   : %d\n\n", fix_quality);

    printf("============================================================\n");
    printf("   Dengan SPRINTF dan SSCANF, manipulasi data teks jadi\n");
    printf("   sangat mudah dan kuat untuk kebutuhan IoT & Robotika!\n");
    printf("============================================================\n");

    return 0;
}
