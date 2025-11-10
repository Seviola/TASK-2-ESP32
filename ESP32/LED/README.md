# ESP32-S3: 3 LED Blinking dengan FreeRTOS
Program dengan menampilakn cara menggunakan FreeRTOS multitasking pada ESP32-S3 untuk menyalakan tiga LED yang berkedip secara independen, setiap LED dikontrol oleh task terpisah dan task di jalankan pada core yang berbeda
## Deskripsi Singkat
LED merah dikendalikan oleh core 0
LED hijau dan biru dikendalikan oleh core 1
Setiap LED berkedip dengan interval berbeda :
- Merah    : 300ms
- Hijau    :500ms
- Biru     :700ms
## Konfigurasi Pin
| LED | GPIO ESP32 | GND |
| :--- | :---: | :---: |
| Merah | 2 | GND |
| Hijau | 5 | GND |
| Biru | 16 | GND |
## Penjelasan Program
### Kode Definisi:
Bagian ini berfungsi untuk mendefinisikan pin GPIO yang digunakan oleh masing-masing LED
```c
define LED_RED     2
define LED_GREEN   5
define LED_BLUE    16

### Task untuk LED Merah
Task ini mengendalikan LED Merah, diatur agar berkedip dengan interval 300 ms, berjalan pada Core 0
```c
void TaskLED_Red(void *pvParameters) {
  pinMode(LED_RED, OUTPUT);
  for (;;) {
    digitalWrite(LED_RED, HIGH);
    vTaskDelay(pdMS_TO_TICKS(300));
    digitalWrite(LED_RED, LOW);
    vTaskDelay(pdMS_TO_TICKS(300));
  }
}

