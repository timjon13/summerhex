#include <Wire.h>
#include <Adafruit_PWMServoDriver.h>

// uses the default address 0x40
Adafruit_PWMServoDriver pwm = Adafruit_PWMServoDriver();

#define SERVOMIN_0  125
#define SERVOMID_0  357
#define SERVOMAX_0  590

#define SERVOMIN_1  115
#define SERVOMID_1  325
#define SERVOMAX_1  535

#define SERVOMIN_2  115
#define SERVOMID_2  325
#define SERVOMAX_2  535

#define SERVOMIN_3  120
#define SERVOMID_3  340
#define SERVOMAX_3  560

#define SERVOMIN_4  130
#define SERVOMID_4  355
#define SERVOMAX_4  580

#define SERVOMIN_5  130
#define SERVOMID_5  352
#define SERVOMAX_5  575

#define SERVOMIN_6  135
#define SERVOMID_6  362
#define SERVOMAX_6  590

#define SERVOMIN_7  125
#define SERVOMID_7  345
#define SERVOMAX_7  565

#define SERVOMIN_8  130
#define SERVOMID_8  347
#define SERVOMAX_8  565

#define SERVOMIN_9  125
#define SERVOMID_9  342
#define SERVOMAX_9  560

#define SERVOMIN_10  115
#define SERVOMID_10  317
#define SERVOMAX_10  520

#define SERVOMIN_11  125
#define SERVOMID_11  345
#define SERVOMAX_11  565

#define SERVOMIN_12  125
#define SERVOMID_12  345
#define SERVOMAX_12  565

#define SERVOMIN_13  125
#define SERVOMID_13  342
#define SERVOMAX_13  560

#define SERVOMIN_14  125
#define SERVOMID_14  342
#define SERVOMAX_14  560

#define SERVOMIN_15  125
#define SERVOMID_15  337
#define SERVOMAX_15  550

#define SERVOMIN_16  125
#define SERVOMID_16  352
#define SERVOMAX_16  580

#define SERVOMIN_17  130
#define SERVOMID_17  355
#define SERVOMAX_17  580

#define SERVOMIN_18  125
#define SERVOMID_18  347
#define SERVOMAX_18  570

#define SERVOMIN_19  130
#define SERVOMID_19  347
#define SERVOMAX_19  565

#define SERVOMIN_20  125
#define SERVOMID_20  345
#define SERVOMAX_20  565

#define SERVOMIN_22  110
#define SERVOMID_22  320
#define SERVOMAX_22  530

#define SERVOMIN_23  125
#define SERVOMID_23  342
#define SERVOMAX_23  560

// our servo # counter
const int servocounter = 17;

void setup() {
  Serial.begin(9600);

  pwm.begin();
  
  pwm.setPWMFreq(60);  // Analog servos run at ~60 Hz updates
  delay(500);
  for (uint16_t pulselen = SERVOMAX_0; pulselen > SERVOMID_0; pulselen--) {
    pwm.setPWM(0, 0, pulselen);
  }
  delay(500);
  for (uint16_t pulselen = SERVOMAX_1; pulselen > SERVOMID_1; pulselen--) {
    pwm.setPWM(1, 0, pulselen);
  }
  delay(500);
  for (uint16_t pulselen = SERVOMAX_2; pulselen > SERVOMID_2; pulselen--) {
    pwm.setPWM(2, 0, pulselen);
  }
  delay(500);
  for (uint16_t pulselen = SERVOMAX_3; pulselen > SERVOMID_3; pulselen--) {
    pwm.setPWM(3, 0, pulselen);
  }
  delay(500);
  for (uint16_t pulselen = SERVOMAX_4; pulselen > SERVOMID_4; pulselen--) {
    pwm.setPWM(4, 0, pulselen);
  }
  delay(500);
 for (uint16_t pulselen = SERVOMAX_5; pulselen > SERVOMID_5; pulselen--) {
    pwm.setPWM(5, 0, pulselen);
  }
  delay(500);
  for (uint16_t pulselen = SERVOMAX_6; pulselen > SERVOMID_6; pulselen--) {
    pwm.setPWM(6, 0, pulselen);
  }
  delay(500);
  for (uint16_t pulselen = SERVOMAX_7; pulselen > SERVOMID_7; pulselen--) {
    pwm.setPWM(7, 0, pulselen);
  }
  delay(500);
  for (uint16_t pulselen = SERVOMAX_8; pulselen > SERVOMID_8; pulselen--) {
    pwm.setPWM(8, 0, pulselen);
  }
  delay(500);
  for (uint16_t pulselen = SERVOMAX_9; pulselen > SERVOMID_9; pulselen--) {
    pwm.setPWM(9, 0, pulselen);
  }
  delay(500);
  for (uint16_t pulselen = SERVOMAX_10; pulselen > SERVOMID_10; pulselen--) {
    pwm.setPWM(10, 0, pulselen);
  }
  delay(500);
  for (uint16_t pulselen = SERVOMAX_11; pulselen > SERVOMID_11; pulselen--) {
    pwm.setPWM(11, 0, pulselen);
  }
  delay(500);
  for (uint16_t pulselen = SERVOMAX_12; pulselen > SERVOMID_12; pulselen--) {
    pwm.setPWM(12, 0, pulselen);
  }
  delay(500);
  for (uint16_t pulselen = SERVOMAX_13; pulselen > SERVOMID_13; pulselen--) {
    pwm.setPWM(13, 0, pulselen);
  }
  delay(500);
  for (uint16_t pulselen = SERVOMAX_14; pulselen > SERVOMID_14; pulselen--) {
    pwm.setPWM(14, 0, pulselen);
  }
  delay(500);
  for (uint16_t pulselen = SERVOMAX_15; pulselen > SERVOMID_15; pulselen--) {
    pwm.setPWM(15, 0, pulselen);
  }
  delay(500);
  for (uint16_t pulselen = SERVOMAX_16; pulselen > SERVOMID_16; pulselen--) {
    pwm.setPWM(16, 0, pulselen);
  }
  delay(500);
  for (uint16_t pulselen = SERVOMAX_17; pulselen > SERVOMID_17; pulselen--) {
    pwm.setPWM(17, 0, pulselen);
  }
  delay(500);
  
}


void loop() {
}
