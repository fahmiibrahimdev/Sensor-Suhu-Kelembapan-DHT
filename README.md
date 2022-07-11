# Sensor Suhu Kelembapan DHT
Sensor Suhu Kelembapan ini berfungsi sebagai mensensing objek suhu dan kelembaban yang memiliki output tegangan analog yang dapat diolah lebih lanjut menggunakan mikrokontroler, yang saya gunakan untuk controller nya yaitu **WEMOS D1 Mini ESP8266**

## Foto WEMOS D1 Mini ESP8266
![wemos-e1531760026145](https://user-images.githubusercontent.com/96789851/178183083-3f8c19b3-1742-4ba7-a188-1c0c57aa6284.jpg)

## Foto DHT22
![3861648_a50ef1d7-14e1-474d-9e82-e35a9473b151](https://user-images.githubusercontent.com/96789851/178183705-748e0ab1-1ea0-4149-a111-3af7910f89c0.jpg)

### Konfigurasi PIN
* PIN 5V -> DHT22 Pin VCC ( 1 )
* PIN DHT GPIO14 ( D5 ) -> DHT22 Pin DATA ( 2 )
* PIN GND -> DHT22 Pin GND ( 4 )

### Library
https://github.com/adafruit/DHT-sensor-library
