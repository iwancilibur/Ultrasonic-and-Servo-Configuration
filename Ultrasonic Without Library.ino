/*
Sensor jarak HC-SR04
pin yang perlu dihubungkan
VCC to arduino 5v
GND to arduino GND
Echo to Arduino pin 7
Trig to Arduino pin 8
*/
#include <Servo.h> // menyertakan library servo ke dalam program 
Servo myservo;     // variable untuk menyimpan posisi data
int pos = 00; 

#define echoPin 7 //Echo Pin
#define trigPin 8 //Trigger Pin
#define LEDPin 13 //Led default dari Arduino uno
 
int maximumRange = 50; //kebutuhan akan maksimal range 50 cm
int minimumRange = 00; //kebutuhan akan minimal range
long duration, distance; //waktu untuk kalkulasi jarak
 
void setup() {
Serial.begin (9600); //inisialiasasi komunikasi serial
//deklarasi pin
myservo.attach(3); //sinyal data kabel motor servo dikonekan di pin 3 Arduino
pinMode(trigPin, OUTPUT);
pinMode(echoPin, INPUT);
pinMode(LEDPin, OUTPUT);
}
 
void loop() {
/* Berikut siklus trigPin atau echo pin yang digunakan
untuk menentukan jarak objek terdekat dengan memantulkan
gelombang suara dari itu. */

digitalWrite(trigPin, LOW);delayMicroseconds(2);
digitalWrite(trigPin, HIGH);delayMicroseconds(10);
digitalWrite(trigPin, LOW);
duration = pulseIn(echoPin, HIGH);
 
//perhitungan untuk dijadikan jarak
distance = duration/58.2;
 
/* Membuat Logika Untuk Sensor ultrasonic ketika menerima sinyal dari sensor akan menggerakan Servo */
 
if (distance >= maximumRange )
{
Serial.println("Servo Bergerak");
myservo.write(180);
}else {
Serial.println("Servo Kembali");
myservo.write(0);
}
}
