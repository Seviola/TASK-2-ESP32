// === Program 1: 3 LED di ESP32-S3 (Core 0 & Core 1) ===
// LED1 (GPIO 8) -> Core 0
// LED2 (GPIO 4), LED3 (GPIO 5) -> Core 1

#define LED1 8
#define LED2 4
#define LED3 5

// Task untuk Core 0
void TaskLED_Core0(void *pvParameters) {
  pinMode(LED1, OUTPUT);
  while (true) {
    digitalWrite(LED1, HIGH);
    vTaskDelay(pdMS_TO_TICKS(500));
    digitalWrite(LED1, LOW);
    vTaskDelay(pdMS_TO_TICKS(500));
  }
}

// Task untuk Core 1
void TaskLED_Core1(void *pvParameters) {
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  while (true) {
    digitalWrite(LED2, HIGH);
    digitalWrite(LED3, LOW);
    vTaskDelay(pdMS_TO_TICKS(300));
    digitalWrite(LED2, LOW);
    digitalWrite(LED3, HIGH);
    vTaskDelay(pdMS_TO_TICKS(300));
  }
}

void setup() {
  Serial.begin(115200);
  delay(200); // beri waktu inisialisasi
  Serial.println("=== ESP32-S3: Multicore LED Test ===");

  // Jalankan Task di Core 0
  xTaskCreatePinnedToCore(
    TaskLED_Core0,
    "LED Task Core 0",
    2048,    // stack lebih besar
    NULL,
    1,
    NULL,
    0
  );

  // Jalankan Task di Core 1
  xTaskCreatePinnedToCore(
    TaskLED_Core1,
    "LED Task Core 1",
    2048,
    NULL,
    1,
    NULL,
    1
  );
}

void loop() {
  // Kosong — semua kerja di task
}
