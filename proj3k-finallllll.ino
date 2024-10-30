/* Fill in information from Blynk Device Info here */
#define BLYNK_TEMPLATE_ID           "Never"
#define BLYNK_TEMPLATE_NAME         "gonna"
#define BLYNK_AUTH_TOKEN            "give you up"

#include <Servo.h>
#include <SPI.h>
#include <WiFiS3.h>
#include <BlynkSimpleWifi.h>

#define BLYNK_PRINT Serial

Servo servobot;
int servob = 0;
Servo servotop;
int servot = 0; 

int ldrtopl = A0; 
int ldrtopr = A1;
int ldrbotl = A2;
int ldrbotr = A3; 

#define solar  A5
unsigned long sensorValue = 0;

char ssid[] = "never";
char pass[] = "let you down";

int a = 50;
int b = 60;

BlynkTimer timer;

void setup() 
{
  Serial.begin(9600);
  pinMode(solar, INPUT_PULLUP);
  servob = 10;
  servobot.attach(10);
  servobot.write(servob);
  servot = 75;
  servotop.attach(9); 
  servotop.write(servot);
  delay(500);
  Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass);
  timer.setInterval(1000L, sendVoltageToBlynk);
}

void sendVoltageToBlynk() {
  sensorValue = analogRead(solar); 
  float voltage = sensorValue * (5.0 / 1023.0);
  Serial.print("Voltage: ");
  Serial.println(voltage);
  Blynk.virtualWrite(V1, voltage);
}

void loop() {
  int topl = analogRead(ldrtopl); 
  int topr = analogRead(ldrtopr);
  int botl = analogRead(ldrbotl);
  int botr = analogRead(ldrbotr);
  Blynk.run();
  timer.run();

  int avgtop = (topl + topr) / 2;
  int avgbot = (botl + botr) / 2;
  int avgleft = (topl + botl) / 2;
  int avgright = (topr + botr) / 2;
  
  if (avgbot > avgtop) {
    if (servot < 140) {
      servot = servot - 3;
      servotop.write(servot);
      delay(50);
    }
  } else if (avgtop > avgbot) {
    if (servot > 10) {
      servot = servot + 3;
      servotop.write(servot);
      delay(50);
    }
  }
  
  if (avgleft > avgright) {
    servob = servob + 3;
    servobot.write(servob);
    delay(50);
  } else if (avgleft < avgright) {
    servob = servob - 3;
    servobot.write(servob);
    delay(50);
  }
}
