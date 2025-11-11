# ESP32-S3: Pembacaan Potensiometer dengan FreeRTOS

Program ini menampilkan cara menggunakan FreeRTOS multitasking pada ESP32-S3 untuk membaca nilai potensiometer secara independen menggunakan dua core prosesor. Setiap core menjalankan task terpisah yang membaca nilai ADC dan menampilkannya ke Serial Monitor.

## Deskripsi Singkat
ESP32-S3 memiliki dua core (Core 0 dan Core 1) yang dapat digunakan untuk menjalankan dua task secara bersamaan.  
Dalam program ini, task pertama dijalankan pada _Core 0_, dan task kedua dijalankan pada _Core 1_.  
Kedua task membaca nilai potensiometer yang terhubung ke pin ADC (GPIO 4) dengan interval waktu 300 ms, lalu menampilkan nilai Raw ADC, hasil konversi tegangan, serta ID core tempat task berjalan.

## Konfigurasi Pin
| Komponen      | GPIO ESP32 | Keterangan       |
|----------------|-------------|------------------|
| Potensiometer  | 4 (ADC)     | Input analog     |
| VCC            | 3.3V        | Tegangan referensi |
| GND            | GND         | Ground           |

## Foto Hasil Simulasi
<img width="605" height="438" alt="Potensiometer" src="https://github.com/user-attachments/assets/1b879012-8073-41b8-a252-1f8878b42676" />

## Video Demonstrasi
![Potensiometer](https://github.com/user-attachments/assets/7725f39d-e23d-424e-8cdc-9887d67225b4)
