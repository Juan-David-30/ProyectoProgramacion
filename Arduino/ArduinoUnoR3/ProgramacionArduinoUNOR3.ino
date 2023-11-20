// Include 
#include <AFMotor.h>
#include <Servo.h>

// Too close
bool close = false; 

// Left-side motors
AF_DCMotor motorFL(1);
AF_DCMotor motorBL(2);

// Right-side motors
AF_DCMotor motorBR(3);
AF_DCMotor motorFR(4);

// Speed by default 
int speed = 250;

// Maximun length per message
const unsigned int MAX_LENGTH = 4;

// Character that indicates the end of a message
char ender = '.';

// Ultrasonido 
const int trigPin = A3;
const int echoPin = A4;

// Servo motor
Servo servoMotor;
int servoPin = 10;

// Mode solving labyrinth (True: activated and false: desactivated)
bool labyrinth = false; 

/*
* Functions to define the movement of the car
*/
// Moving the car forward
void mv_forward()
{
  Serial.write("Moving forwards\n");
  motorFL.run(FORWARD);
  motorBL.run(FORWARD);
  motorFR.run(FORWARD);
  motorBR.run(FORWARD);
}

// Moving the car backward
void mv_backward()
{
  Serial.write("Moving backwards\n");
  motorFL.run(BACKWARD);
  motorBL.run(BACKWARD);
  motorFR.run(BACKWARD);
  motorBR.run(BACKWARD);
}

// Rotating left
void rt_left()
{
  Serial.write("Rotating left\n");
  motorFL.run(BACKWARD);
  motorBL.run(BACKWARD);
  motorFR.run(FORWARD);
  motorBR.run(FORWARD);
}


// Rotating right
void rt_right()
{
  Serial.write("Rotating right\n");
  motorFL.run(FORWARD);
  motorBL.run(FORWARD);
  motorFR.run(BACKWARD);
  motorBR.run(BACKWARD);
}

// Stopping the movement
void stop()
{
  Serial.write("Stopping movement\n");
  motorFL.run(RELEASE);
  motorBL.run(RELEASE);
  motorFR.run(RELEASE);
  motorBR.run(RELEASE);
}

// Servo to right
void ServoRight()
{
  servoMotor.write(0);
}

// Servo to the center
void ServoCenter()
{
  servoMotor.write(90);
}

// Servo to left
void ServoLeft()
{
  servoMotor.write(180);
}

void labyrinthSolving()
{

}

// Configuración inicial
void setup()
{
  Serial.begin(9600);
  motorFL.setSpeed(speed);
  motorBL.setSpeed(speed);
  motorFR.setSpeed(speed);
  motorBR.setSpeed(speed);

  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

  servoMotor.attach(servoPin);
}


void loop() {

  // Calculating the distance
  // Creating variables to save the duration and distance
  unsigned long duration;
  float distance;

  // Writing the pulse
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(1000);

  // Stopping the pulse
  digitalWrite(trigPin, LOW);

  // Getting the puse
  duration = pulseIn (echoPin, HIGH);
  distance = (duration / 2.0) / 29.0;

  
  Serial.print(", d = ");
  Serial.print(distance);
  Serial.println(" cm");
  delayMicroseconds(1000);

  // Defining whether there is a wall close or not
  close = distance < 10;

  // It it is too close we stop
  if (close)
  {
    stop();
  }
  
  // Validating whether or not the labyrinth mode is on or not
  if (labyrinth)
  {
    labyrinthSolving();
  }
}


void serialEvent()
{
  int length = 0;

}
