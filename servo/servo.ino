#include <Wire.h>
#include <Adafruit_PWMServoDriver.h>

// uses the default address 0x40
Adafruit_PWMServoDriver pwm = Adafruit_PWMServoDriver();

#define SERVOMIN_0  125 // this is the 'minimum' pulse length count (out of 4096)
#define SERVOMAX_0  590 // this is the 'maximum' pulse length count (out of 4096)

//#define SERVOMIN_1  115 // this is the 'minimum' pulse length count (out of 4096)
//#define SERVOMAX_1  535 // this is the 'maximum' pulse length count (out of 4096)

#define SERVOMIN_2  115 // this is the 'minimum' pulse length count (out of 4096)
#define SERVOMAX_2  535 // this is the 'maximum' pulse length count (out of 4096)

//#define SERVOMIN_3  120 // this is the 'minimum' pulse length count (out of 4096)
//#define SERVOMAX_3  560 // this is the 'maximum' pulse length count (out of 4096)

#define SERVOMIN_4  130 // this is the 'minimum' pulse length count (out of 4096)
#define SERVOMAX_4  580 // this is the 'maximum' pulse length count (out of 4096)

//#define SERVOMIN_5  130 // this is the 'minimum' pulse length count (out of 4096)
//#define SERVOMAX_5  575 // this is the 'maximum' pulse length count (out of 4096)

//#define SERVOMIN_6  135 // this is the 'minimum' pulse length count (out of 4096)
//#define SERVOMAX_6  590 // this is the 'maximum' pulse length count (out of 4096)

//#define SERVOMIN_7  125 // this is the 'minimum' pulse length count (out of 4096)
//#define SERVOMAX_7  565 // this is the 'maximum' pulse length count (out of 4096)

//#define SERVOMIN_8  130 // this is the 'minimum' pulse length count (out of 4096)
//#define SERVOMAX_8  565 // this is the 'maximum' pulse length count (out of 4096)

//#define SERVOMIN_9  125 // this is the 'minimum' pulse length count (out of 4096)
//#define SERVOMAX_9  560 // this is the 'maximum' pulse length count (out of 4096)

//#define SERVOMIN_10  115 // this is the 'minimum' pulse length count (out of 4096)
//#define SERVOMAX_10  520 // this is the 'maximum' pulse length count (out of 4096)

//#define SERVOMIN_11  125 // this is the 'minimum' pulse length count (out of 4096)
//#define SERVOMAX_11  565 // this is the 'maximum' pulse length count (out of 4096)

//#define SERVOMIN_12  125 // this is the 'minimum' pulse length count (out of 4096)
//#define SERVOMAX_12  565 // this is the 'maximum' pulse length count (out of 4096)

//#define SERVOMIN_13  125 // this is the 'minimum' pulse length count (out of 4096)
//#define SERVOMAX_13  560 // this is the 'maximum' pulse length count (out of 4096)

//#define SERVOMIN_14  125 // this is the 'minimum' pulse length count (out of 4096)
//#define SERVOMAX_14  560 // this is the 'maximum' pulse length count (out of 4096)

//#define SERVOMIN_15  125 // this is the 'minimum' pulse length count (out of 4096)
//#define SERVOMAX_15  550 // this is the 'maximum' pulse length count (out of 4096)

//#define SERVOMIN_16  125 // this is the 'minimum' pulse length count (out of 4096)
//#define SERVOMAX_16  580 // this is the 'maximum' pulse length count (out of 4096)

//#define SERVOMIN_17  130 // this is the 'minimum' pulse length count (out of 4096)
//#define SERVOMAX_17  580 // this is the 'maximum' pulse length count (out of 4096)

//#define SERVOMIN_18  125 // this is the 'minimum' pulse length count (out of 4096)
//#define SERVOMAX_18  570 // this is the 'maximum' pulse length count (out of 4096)

//#define SERVOMIN_19  130 // this is the 'minimum' pulse length count (out of 4096)
//#define SERVOMAX_19  565 // this is the 'maximum' pulse length count (out of 4096)

//#define SERVOMIN_20  125 // this is the 'minimum' pulse length count (out of 4096)
//#define SERVOMAX_20  565 // this is the 'maximum' pulse length count (out of 4096)

//#define SERVOMIN_21  125 // this is the 'minimum' pulse length count (out of 4096)
//#define SERVOMAX_21  560 // this is the 'maximum' pulse length count (out of 4096)

//#define SERVOMIN_22  110 // this is the 'minimum' pulse length count (out of 4096)
//#define SERVOMAX_22  530 // this is the 'maximum' pulse length count (out of 4096)

//#define SERVOMIN_23  125 // this is the 'minimum' pulse length count (out of 4096)
//#define SERVOMAX_23  560 // this is the 'maximum' pulse length count (out of 4096)

// our servo # counter
uint8_t servonum = 0;

void setup() {
  Serial.begin(9600);

  pwm.begin();
  
  pwm.setPWMFreq(60);  // Analog servos run at ~60 Hz updates
}


void loop() {
  // Drive each servo one at a time
  pwm.setPWM(0, 0, (SERVOMAX_0 + SERVOMIN_0)/2);
  pwm.setPWM(2, 0, 400);
  pwm.setPWM(4, 0, 500);

/*
  delay(500);
  for (uint16_t pulselen = SERVOMAX; pulselen > SERVOMIN; pulselen--) {
    pwm.setPWM(servonum, 0, pulselen);
  }
*/
}
