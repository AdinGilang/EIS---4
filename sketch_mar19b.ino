#define pirPin 2 // Pin yang terhubung ke output sensor PIR

void setup() {
  Serial.begin(9600); // Memulai komunikasi serial dengan baud rate 9600
  pinMode(pirPin, INPUT); // Mengatur pin sensor PIR sebagai input
}

void loop() {
  int motion = digitalRead(pirPin); // Membaca status sensor PIR
  
  if (motion == HIGH) { // Jika sensor mendeteksi gerakan
    Serial.println("Motion detected!"); // Mencetak pesan ke Serial Monitor
    delay(1000); // Menunda eksekusi selama 1 detik untuk menghindari deteksi ganda
  } else {
     Serial.println("No motion detected"); // Mencetak pesan ke Serial Monitor jika tidak ada gerakan yang terdeteksi
    delay(1000); // Menunda eksekusi selama 1 detik sebelum membaca ulang sensor
  }
}