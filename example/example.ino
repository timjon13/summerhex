#include <Wire.h>
#include <Adafruit_PWMServoDriver.h>

// uses the default address 0x40
Adafruit_PWMServoDriver pwm = Adafruit_PWMServoDriver();

//#define SERVOMIN_0  125
//#define SERVOMAX_0  590

//#define SERVOMIN_1  115
//#define SERVOMAX_1  535

//#define SERVOMIN_2  115
//#define SERVOMAX_2  535

//#define SERVOMIN_3  120
//#define SERVOMAX_3  560

//#define SERVOMIN_4  130
//#define SERVOMAX_4  580

//#define SERVOMIN_5  130
//#define SERVOMAX_5  575

//#define SERVOMIN_6  135
//#define SERVOMAX_6  590

//#define SERVOMIN_7  125
//#define SERVOMAX_7  565

//#define SERVOMIN_8  130
//#define SERVOMAX_8  565

//#define SERVOMIN_9  125
//#define SERVOMAX_9  560

//#define SERVOMIN_10  115
//#define SERVOMAX_10  520

//#define SERVOMIN_11  125
//#define SERVOMAX_11  565

//#define SERVOMIN_12  125
//#define SERVOMAX_12  565

//#define SERVOMIN_13  125
//#define SERVOMAX_13  560

//#define SERVOMIN_14  125
//#define SERVOMAX_14  560

//#define SERVOMIN_15  125
//#define SERVOMAX_15  550

//#define SERVOMIN_16  125
//#define SERVOMAX_16  580

//#define SERVOMIN_17  130
//#define SERVOMAX_17  580

//#define SERVOMIN_18  125
//#define SERVOMAX_18  570

//#define SERVOMIN_19  130
//#define SERVOMAX_19  565

//#define SERVOMIN_20  125
//#define SERVOMAX_20  565

//#define SERVOMIN_22  110
//#define SERVOMAX_22  530

//#define SERVOMIN_23  125
//#define SERVOMAX_23  560

// our servo # counter
uint8_t servonum = 0;

void setup() {
  Serial.begin(9600);

  pwm.begin();
  
  pwm.setPWMFreq(60);  // Analog servos run at ~60 Hz updates
}


void loop() {

  delay(500);
  for (uint16_t pulselen = SERVOMAX; pulselen > SERVOMIN; pulselen--) {
    pwm.setPWM(servonum, 0, pulselen);
  }

}
