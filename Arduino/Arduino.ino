#include <Wire.h>
#include <Adafruit_PWMServoDriver.h>

// Create PCA9685 object
Adafruit_PWMServoDriver pwm = Adafruit_PWMServoDriver(0x40);


// =====================================================
// PCA9685 SERVO CHANNELS
// =====================================================

#define LEFT_ARM   0
#define RIGHT_ARM  1
#define LEFT_LEG   4
#define RIGHT_LEG  3


// =====================================================
// SOUND SENSOR
// =====================================================

#define SOUND_PIN A0

// Your testing showed quiet ≈ 20
// and a slap ≈ 360
#define SOUND_THRESHOLD 35


// =====================================================
// SERVO SETTINGS
// =====================================================

// Approximate SG90 pulse range
#define SERVO_MIN 150
#define SERVO_MAX 600


// =====================================================
// MOVE SERVO
// =====================================================

void moveServo(int channel, int angle)
{
  angle = constrain(angle, 0, 180);

  int pulse = map(angle, 0, 180, SERVO_MIN, SERVO_MAX);

  pwm.setPWM(channel, 0, pulse);
}


// =====================================================
// REST POSITION
// =====================================================

void restPosition()
{
  moveServo(LEFT_ARM, 90);
  moveServo(RIGHT_ARM, 90);

  moveServo(LEFT_LEG, 90);
  moveServo(RIGHT_LEG, 90);

  delay(300);
}


// =====================================================
// MOVEMENT 1
// BOTH ARMS UP
// =====================================================

void movement1()
{
  moveServo(LEFT_ARM, 140);
  moveServo(RIGHT_ARM, 40);

  delay(500);
}


// =====================================================
// MOVEMENT 2
// BOTH ARMS DOWN
// =====================================================

void movement2()
{
  moveServo(LEFT_ARM, 90);
  moveServo(RIGHT_ARM, 90);

  delay(300);
}


// =====================================================
// MOVEMENT 3
// LEFT LEG UP
// =====================================================

void movement3()
{
  moveServo(LEFT_LEG, 130);
  moveServo(RIGHT_LEG, 90);

  delay(500);

  moveServo(LEFT_LEG, 90);

  delay(300);
}


// =====================================================
// MOVEMENT 4
// RIGHT LEG UP
// =====================================================

void movement4()
{
  moveServo(LEFT_LEG, 90);
  moveServo(RIGHT_LEG, 50);

  delay(500);

  moveServo(RIGHT_LEG, 90);

  delay(300);
}


// =====================================================
// MOVEMENT 5
// OPPOSITE ARMS
// =====================================================

void movement5()
{
  moveServo(LEFT_ARM, 40);
  moveServo(RIGHT_ARM, 140);

  delay(500);

  moveServo(LEFT_ARM, 90);
  moveServo(RIGHT_ARM, 90);

  delay(300);
}


// =====================================================
// MOVEMENT 6
// OPPOSITE LEGS
// =====================================================

void movement6()
{
  moveServo(LEFT_LEG, 50);
  moveServo(RIGHT_LEG, 130);

  delay(500);

  moveServo(LEFT_LEG, 90);
  moveServo(RIGHT_LEG, 90);

  delay(300);
}


// =====================================================
// MOVEMENT 7
// BOTH ARMS + LEGS
// =====================================================

void movement7()
{
  moveServo(LEFT_ARM, 140);
  moveServo(RIGHT_ARM, 40);

  moveServo(LEFT_LEG, 120);
  moveServo(RIGHT_LEG, 60);

  delay(500);

  moveServo(LEFT_ARM, 90);
  moveServo(RIGHT_ARM, 90);

  moveServo(LEFT_LEG, 90);
  moveServo(RIGHT_LEG, 90);

  delay(300);
}


// =====================================================
// MOVEMENT 8
// QUICK SHAKE
// =====================================================

void movement8()
{
  moveServo(LEFT_ARM, 130);
  moveServo(RIGHT_ARM, 50);

  delay(200);

  moveServo(LEFT_ARM, 50);
  moveServo(RIGHT_ARM, 130);

  delay(200);

  moveServo(LEFT_ARM, 130);
  moveServo(RIGHT_ARM, 50);

  delay(200);

  moveServo(LEFT_ARM, 90);
  moveServo(RIGHT_ARM, 90);

  delay(300);
}


// =====================================================
// COMPLETE DANCE SEQUENCE
// =====================================================

void danceSequence()
{
  // Start from rest
  restPosition();

  // 1. Arms up
  movement1();

  // 2. Arms down
  movement2();

  // 3. Left leg
  movement3();

  // 4. Right leg
  movement4();

  // 5. Opposite arms
  movement5();

  // 6. Opposite legs
  movement6();

  // 7. Arms + legs
  movement7();

  // 8. Quick arm shake
  movement8();

  // Finish at rest
  restPosition();
}


// =====================================================
// SETUP
// =====================================================

void setup()
{
  Serial.begin(9600);

  // Start I2C
  Wire.begin();

  // Start PCA9685
  pwm.begin();

  // SG90 servos use approximately 50 Hz
  pwm.setPWMFreq(50);

  delay(500);

  // Put puppet at starting position
  restPosition();

  Serial.println("Dancing Puppet Ready!");
}


// =====================================================
// MAIN LOOP
// =====================================================

void loop()
{
  // Read KY-038
  int soundValue = analogRead(SOUND_PIN);

  // Display value in Serial Monitor
  Serial.println(soundValue);


  // =================================================
  // WAIT FOR SOUND
  // =================================================

  if (soundValue > SOUND_THRESHOLD)
  {
    Serial.println("SOUND DETECTED!");

    // Perform the ENTIRE dance sequence
    // before checking the sensor again
    danceSequence();

    // Small pause after dancing
    delay(1000);

    // Now loop() starts again and checks sound
  }


  delay(20);
}