#include <DHT.h> // Include library DHT
uint8_t READER = 14; // PIN DHT GPIO14 ( D5 )
DHT dht(READER, DHT22); // KONFIGURASI DHT
  
void setup() {
  Serial.begin(9600); // SERIAL BAUD
  pinMode(READER, INPUT); // Inisialisasi pin DHT
  dht.begin(); // Inisialisasi DHT
}

void loop() {
  float suhu = dht.readTemperature(); // Membaca suhu
  float kelembapan = dht.readHumidity(); // Membaca Kelembapan
  Serial.println("Kelembapan: ");
  Serial.println(kelembapan);
  Serial.println("Temperatur Suhu: ");
  Serial.println(suhu);
  delay(100);
}
