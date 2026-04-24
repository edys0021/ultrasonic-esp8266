# 📏 ESP8266 + OLED + Ultrasonic Sensor (HC-SR04)

> Menampilkan jarak secara real-time di layar OLED menggunakan ESP8266 🚀

![ESP8266](https://img.shields.io/badge/ESP8266-IoT-blue?style=for-the-badge)
![OLED](https://img.shields.io/badge/OLED-SH1106-green?style=for-the-badge)

---

## 📖 Deskripsi

Project ini menggunakan **ESP8266**, **sensor ultrasonik HC-SR04**, dan **OLED SH1106** untuk mengukur jarak dan menampilkannya langsung ke layar.

Sensor akan membaca jarak objek di depannya, lalu hasilnya ditampilkan dalam satuan **cm** pada OLED secara real-time.

---

## 🧰 Hardware yang Dibutuhkan

* ESP8266 (NodeMCU / Wemos D1 Mini)
* OLED Display SH1106 (I2C 128x64)
* Ultrasonic Sensor HC-SR04
* Kabel jumper
* Breadboard (opsional)

---

## 🔌 Wiring

### 📺 OLED (I2C)

| OLED | ESP8266 |
| ---- | ------- |
| VCC  | 3.3V    |
| GND  | GND     |
| SCL  | D1      |
| SDA  | D2      |

### 📡 HC-SR04

| HC-SR04 | ESP8266 |
| ------- | ------- |
| VCC     | 5V      |
| GND     | GND     |
| TRIG    | D5      |
| ECHO    | D6      |

⚠️ **Catatan:**
Gunakan **voltage divider** pada pin ECHO (karena 5V → 3.3V) agar aman untuk ESP8266.

---

## 📦 Library yang Digunakan

Install melalui Arduino Library Manager:

* `U8g2`
* `Wire`

---

## ⚙️ Cara Kerja

1. Sensor HC-SR04 mengirim gelombang ultrasonik
2. Gelombang dipantulkan oleh objek
3. ESP8266 menghitung waktu pantulan
4. Jarak dihitung dengan rumus:

```
distance = duration * 0.034 / 2
```

5. Hasil ditampilkan ke OLED

---

## 🖥️ Tampilan OLED

OLED akan menampilkan:

```
Jarak:
XX cm
```

Update setiap 500 ms ⏱️

---

## ▶️ Cara Menjalankan

1. Buka Arduino IDE
2. Install library yang dibutuhkan
3. Pilih board: **ESP8266**
4. Upload kode ke board
5. Rangkai sesuai wiring
6. Nyalakan dan lihat hasilnya di OLED 🎉

---

## 💡 Pengembangan

Beberapa ide pengembangan:

* Tambahkan buzzer untuk alarm jarak dekat 🔊
* Buat indikator warna (LED) 🚦
* Integrasi ke IoT (monitor via WiFi) 🌐
* Tambahkan animasi UI di OLED 🎨

---

## 📜 Lisensi

Project ini bebas digunakan untuk pembelajaran dan pengembangan 🚀

---

## ⭐ Dukungan

Kalau project ini membantu, jangan lupa kasih ⭐ di GitHub!
