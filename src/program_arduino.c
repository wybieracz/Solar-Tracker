#include <Servo.h>  

Servo horizontal; 
int horizontalServoPos = 90;

Servo vertical;
int verticalServoPos = 90;

// LDR connections
int leftTopLDR = 2; 
int leftDownLDR = 1; 
int rightTopLDR = 3; 
int rightDownLDR = 0; 

void setup()
{
  Serial.begin(9600);
  
  horizontal.attach(9);
  vertical.attach(10);
}

void loop()
{
  int delayTime = 6;
  int tolerance = 30;
  
  int currentLeftTopRead = analogRead(leftTopLDR);
  int currentRightTopRead = analogRead(rightTopLDR); 
  int currentLeftDownRead = analogRead(leftDownLDR); 
  int currentRightDownRead = analogRead(rightDownLDR);

  int averageTop = (currentLeftTopRead + currentRightTopRead) / 2; 
  int averageDown = (currentLeftDownRead + currentRightDownRead) / 2;
  int averageLeft = (currentLeftTopRead + currentLeftDownRead) / 2; 
  int averageRight = (currentRightTopRead + currentRightDownRead) / 2;

  int verticalDifference = averageTop - averageDown;
  int horizontalDifference = averageLeft - averageRight;

  // Correct vertical servo position
  if (-1 * tolerance > verticalDifference || verticalDifference > tolerance)
  {
    if (averageTop > averageDown)
    {
      verticalServoPos = ++verticalServoPos;
      if (verticalServoPos > 180)
      {
        verticalServoPos = 180;
      }
    }
    else if (averageTop < averageDown)
    {
      verticalServoPos = --verticalServoPos;
      if (verticalServoPos < 90)
      {
        verticalServoPos = 90;
      }
    }
    vertical.write(verticalServoPos);
  }


  // Correct horizontal servo position
  if (-1 * tolerance > horizontalDifference || horizontalDifference > tolerance)
  {
    if (averageLeft > averageRight)
    {
      horizontalServoPos = --horizontalServoPos;
      if (horizontalServoPos < 0)
      {
        horizontalServoPos = 0;
      }
    }
    else if (averageLeft < averageRight)
    {
      horizontalServoPos = ++horizontalServoPos;
      if (horizontalServoPos > 180)
      {
        horizontalServoPos = 180;
      }
    }
    horizontal.write(horizontalServoPos);
  }
  delay(delayTime);
}
