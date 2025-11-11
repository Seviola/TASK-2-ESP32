# ESP32-S3 : Dual Core dengan OLED SSD1306
Program ini menunjukkan cara menjalankan dua task secara paralel di ESP32-S3 menggunakan pustaka FreeRTOS.
Satu task berjalan di Core 0 untuk proses utama, dan satu task lainnya berjalan di Core 1 untuk menampilkan teks "Hello World" pada layar OLED SSD1306 melalui komunikasi I2C.
Contoh ini menggambarkan kemampuan prosesor ganda pada ESP32-S3 dalam membagi tugas secara efisien antara dua inti.
## Deskripsi Singkat
- ESP32-S3 memiliki dua inti prosesor (Core 0 dan Core 1) yang dapat digunakan untuk menjalankan beberapa proses secara bersamaan.
- Pada contoh ini:
  
  - Core 0 digunakan untuk menjalankan loop utama (kosong).
  - Core 1 digunakan untuk menampilkan teks "Hello World" di layar OLED SSD1306 setiap 1 detik.
- Layar OLED dikendalikan dengan pustaka Adafruit_SSD1306 dan Adafruit_GFX menggunakan komunikasi I2C.
Program ini menampilkan teks sederhana yang diperbarui secara berkala untuk menunjukkan task yang berjalan di Core 1.

| KOMPONEN | GPIO  | Keterangan | 
| :--- | :---: | :---: |
| SDA | 14 | Jalur data I2C |
| SCL | 13 | Jalur clock I2C |
| VCC | 3.3V | Tegangan untuk OLED |
| GND Hitam | GND | Ground bersama ESP32 |

## Foto Hasil Simulasi
<img width="458" height="462" alt="OLED Hello word" src="https://github.com/user-attachments/assets/6d3983bc-8e46-4514-b42f-5c9c2afd523b" />

## Video Demonstrasi
![OLED-Hello-word](https://github.com/user-attachments/assets/c68fb229-03cb-4e05-9626-32234981aee2)
