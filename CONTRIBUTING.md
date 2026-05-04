# Panduan Berkontribusi (Contributing Guidelines)

Terima kasih atas ketertarikan Anda untuk berkontribusi pada repositori **PPD (Pengajaran Pemrograman Dasar)** FTEK UKSW! Repositori ini bersifat terbuka (*open-source*) untuk kemajuan pendidikan bersama.

## Bagaimana Cara Berkontribusi?

Anda bisa berkontribusi dalam beberapa cara:
1. **Memperbaiki Error/Bug**: Menemukan *typo* pada materi atau kode yang error saat di-compile.
2. **Menambahkan Latihan Soal**: Membuat soal baru untuk melatih logika mahasiswa.
3. **Meningkatkan Dokumentasi**: Memperbaiki penjelasan di `README.md` agar lebih mudah dipahami.

## Langkah-langkah Kontribusi (Pull Request)

1. **Fork** repositori ini ke akun GitHub Anda.
2. Lakukan **Clone** repositori hasil fork ke komputer lokal Anda.
   ```bash
   git clone https://github.com/USERNAME_ANDA/Pengajaran-Program-Deo.git
   ```
3. Buat **Branch** baru untuk fitur atau perbaikan Anda.
   ```bash
   git checkout -b perbaikan-materi-topik2
   ```
4. Lakukan perubahan pada kode atau materi. Pastikan kode yang Anda tulis bisa di-compile tanpa error.
5. Lakukan **Commit** dengan pesan yang jelas dan deskriptif. (Kami merekomendasikan format *Conventional Commits* seperti `feat:`, `fix:`, `docs:`).
   ```bash
   git commit -m "docs: memperbaiki typo pada penjelasan printf di Topik 3"
   ```
6. **Push** perubahan tersebut ke branch di repositori fork Anda.
   ```bash
   git push origin perbaikan-materi-topik2
   ```
7. Buka halaman repositori utama, lalu klik **Compare & pull request**. Berikan deskripsi singkat tentang apa yang Anda ubah.

## Standar Penulisan Kode (Code Style)
Jika Anda menambahkan kode C/C++, mohon perhatikan hal-hal berikut:
*   Berikan **komentar** yang mendetail pada setiap blok kode yang rumit, ingat target pembaca adalah *pemula*.
*   Gunakan penamaan variabel yang **deskriptif** dalam bahasa Indonesia (misal: `luas_lingkaran`, bukan `ll` atau `x`).
*   Gunakan indentasi yang rapi (rekomendasi: 4 spasi).

---
*Dengan berkontribusi, Anda setuju bahwa karya Anda akan dilisensikan di bawah [MIT License](LICENSE) repository ini.*