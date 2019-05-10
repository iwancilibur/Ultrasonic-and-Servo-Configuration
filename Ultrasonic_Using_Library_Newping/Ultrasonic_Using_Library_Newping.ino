#include <NewPing.h>
#include <Servo.h> // menyertakan library servo ke dalam program 
Servo myservo;     // variable untuk menyimpan posisi data
int pos = 00; 

#define TRIGGER_PIN 12 // Arduino pin tied to trigger pin on the ultrasonic sensor.
#define ECHO_PIN 11 // Arduino pin tied to echo pin on the ultrasonic sensor.
#define MAX_DISTANCE 50 // Maximum distance we want to ping for (in centimeters). Maximum sensor distance is rated at 400-500cm.

NewPing sonar(TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE); // NewPing setup of pins and maximum distance.

void setup() {
  Serial.begin(115200); // Open serial monitor at 115200 baud to see ping results.
  myservo.attach(9);
}

void loop() {
  delay(50); // Wait 50ms between pings (about 20 pings/sec). 29ms should be the shortest delay between pings.
  int jarak = sonar.ping_cm(); // Send out the ping, get the results in centimeters.
  Serial.print("Ping: ");
  Serial.print(jarak); // Print the result (0 = outside the set distance range, no ping echo)
  Serial.println("cm");
  if (jarak>=5){
     myservo.write(180);
  }else{
     myservo.write(0);
  }
}
