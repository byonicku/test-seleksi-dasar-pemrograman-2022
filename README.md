# Test Seleksi Dasar Pemrograman 2022

Buatlah program yang menerima paling banyak 50 bilangan integer secara random. Jika cacah integer <3, cetak apa adanya. Jika tidak: akan dioperasikan sebuah jendela konvolusi 1 dimensi panjang 3 buah integer. Dimulai dari 3 integer pertama yang masuk ke dalam jendela, simpanlah median (nilai tengah) ketiga integer ini. Geser jendela ke kanan 1 posisi jika masih ada 3 integer yang masuk, simpan lagi mediannya. Geser lagi ke kanan 1 posisi, simpan lagi mediannya, terus sampai tersisa lebih kecil dari 3 buah integer. Dari hasil median tadi lakukan konvolusi lagi mulai dari median pertama. Jika hasil konvolusi ini masih menyisakan 3 integer atau lebih, lakukan lagi konvolusinya, sampai akhirnya tersisa 1 atau 2 buah integer saja. Cetaklah angka-angka tersebut (dari konvolusi terkahir saja).

![image](https://github.com/byonicku/test-seleksi-dasar-pemrograman-2022/assets/82759105/bc0dbc62-7639-463d-ae09-251d45d5690a)

Gambar 1. Gerakan Jendela Konvolusi

# Format Masukan (Input)
Sederet integer yang dipisahkan dengan spasi

# Format Keluaran (Output)
Satu atau Dua buah integer yang dipisahkan dengan spasi atau warning kesalahan: “Cacah Integer di atas 50 buah”

# Test Case

**Contoh 1**
```
input: 120 34
output: 120 34
```

**Contoh 2**
```
input: 11 2 4 4 5 77 8 16
output: 4 5
```

**Contoh 3**
```
input: 72 156 23 90 117 2091 12 7 9 47 392 203
output: 117 12
```

Contoh 4
```
input: 12 22 3 1 2 3 2 55 49 9 108 230 23 84 7 2 87 28 341 289 29 43 76 762 32 33 8 3 4 5 2 9 44 30 48 23 44 37 65 57 56 51 21 34 837 526 404 526 659 372 129 197 281 283 22 78 893 374 347 283 488 263 492 649 23 48 44

output: “Cacah Integer di atas 50 buah”
```
