# Ultrasonic-and-Servo-Configuration
===================================

Sensor ultrasonic adalah sensor yang berfungsi untuk merubah besaran fisis (suara) menjadi besaran listrik maupun sebaliknya yang dikonversi menjadi jarak.

Disebut sebagai sensor ultrasonic dikarenakan sensor ini mengaplikasikan gelombang ultrasonik sebagai trandusernya.

Gelombang ultrasonic merupakan gelombang suara yang memiliki frekuensi tinggi yaitu pada kisaran 20 kHz.

Bunyi ini tidak bisa di dengar dengan telinga normal manusia, hanya bisa didengar oleh sistem pendengaran pada kelelawar, anjing, lumba-lumba, dan kucing.

Cara Kerja
Sensor ini dimulai dari gelombang ultrasonik dengan frekuensi tertentu yang dibangkitkan melewati alat yang disebut juga dengan nama piezoelektrik sebagai transmitter.

Alat ini akan menghasilkan gelombang ultrasonik yang berfrekuensi 40kHz  (sesuai dengan osilator yang terpasang pada sensor).

Biasanya alat ini akan memancarkan gelombang pada suatu target dan jika sudah mengenai permukaan target, maka gelombang tersebut akan terpantulkan kembali.

Pantulan gelombang tersebut akan diterima oleh piezoelektrik (receiver) dan kemudian sensor akan mengkalkulasi perbedaan antara waktu pengiriman dan waktu gelombang pantul yang diterima.


#SERVO
========================
Motor servo adalah komponen elektronika yang berupa motor yang memiliki sistem feedback atau umpan balik guna memberikan informasi posisi putaran motor aktual yang diteruskan pada rangkaian kontrol mikrokontroler.

Pada dasarnya motor servo banyak digunakan sebagai aktuator yang membutuhkan posisi putaran motor yang presisi.


#Wiring Proses
/*
Sensor jarak HC-SR04
=====================
pin yang perlu dihubungkan
VCC to arduino 5v
GND to arduino GND
Echo to Arduino pin 7
Trig to Arduino pin 8

Servo 
=====================
VCC (Merah) 5V
GND (Coklat) GND
Signal (kuning) pin 9
*/



Interactive Robotics
www.interactiverobotics.club
