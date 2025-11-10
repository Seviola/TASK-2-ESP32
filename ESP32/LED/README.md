# ESP32-S3:3 LED Blinking dengan FreeRTOS
Program dengan menampilakn cara menggunakan FreeRTOS multitasking pada ESP32-S3 untuk menyalakan tiga LED yang berkedip secara independen, setiap LED dikontrol oleh task terpisah dan task di jalankan pada core yang berbeda
# Deskripsi Singkat
LED merah dikendalikan oleh core 0
LED hijau dan biru dikendalikan oleh core 1
Setiap LED berkedip dengan interval berbeda :
- Merah    : 300ms
- Hijau    :500ms
- Biru     :700ms
