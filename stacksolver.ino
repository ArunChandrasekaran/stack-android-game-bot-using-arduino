
#include <Servo.h>

Servo myservo;

void setup()
{
  myservo.attach(9);
    myservo.write(125);
  delay(5000);
  myservo.write(90);
  delay(200);
    myservo.write(125);
  delay(750);

}

void loop()
{
  myservo.write(90);  //1
  delay(200);
    myservo.write(125);
  delay(600);
}
