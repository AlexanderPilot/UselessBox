#include <Arduino.h>
#include <Servo.h>

Servo handServo;
Servo boxServo;

int switchStatus = 0;
int action = 1;
int randNumber = 0;

const int ledPin = 5;
const int frontSwitchPin = 13;
const int handServoPin = 12;
const int boxServoPin = 11;

const int handServoHomePos = 70;
const int boxServoHomePos = 70;

void action01(void)
{
  Serial.print("Action 01 started");
  for (int i = 70; i <= 120; i++)
  {
    boxServo.write(i);
    delay(10);
  }
  for (int i = 180; i >= 35; i--)
  {
    handServo.write(i);
    delay(10);
  }
  delay(500);
  handServo.write(26);
  while(digitalRead(frontSwitchPin) == HIGH)
  {
    //wait for switch beeing activated again
  }
  if(digitalRead(frontSwitchPin) == LOW)
  {
    delay(1000);
    for (int i = 26; i <=180; i++)
    {
      handServo.write(i);
      delay(10);
    }
    for (int i = 120; i >= 70; i--)
    {
      boxServo.write(i);
      delay(10);
    }
  
    //action++;
    Serial.println(" and ended");
  }
}

void action02(void)
{
  Serial.print("Action 02 started");
  for (int i = 70; i <= 110; i++)
  {
    boxServo.write(i);
    delay(6);
  }
  delay(550);
  handServo.write(26);
  delay(550);
  handServo.write(180);
  delay(550);
  boxServo.write(70);
  delay(1500);
  for (int i = 70; i <= 110; i++)
  {
    boxServo.write(i);
    delay(6);
  }
  delay(3000);
  boxServo.write(70);
  action++;
  Serial.println("... and ended");
}

void action03(void)
{
  Serial.print("Action 03 started");
  for (int i = 70; i <= 110; i++)
  {
    boxServo.write(i);
    delay(6);
  }
  delay(1000);
  boxServo.write(70);
  delay(2000);
  for (int i = 70; i <= 110; i++)
  {
    boxServo.write(i);
    delay(6);
  }
  handServo.write(26);
  delay(550);
  handServo.write(180);
  delay(500);
  boxServo.write(70);
  action++;
  Serial.println("... and ended");
}

void action04(void)
{
  Serial.print("Action 04 started");
  for (int i = 70; i <= 110; i++)
  {
    boxServo.write(i);
    delay(20);
  }
  for (int i = 180; i >= 35; i--)
  {
    handServo.write(i);
    delay(20);
  }
  delay(2000);
  handServo.write(26);
  delay(200);
  handServo.write(180);
  delay(400);
  boxServo.write(70);
  action++;
  Serial.println("... and ended");
}

void action05(void)
{
  Serial.print("Action  5 started");
  for (int i = 70; i <= 110; i++)
  {
    boxServo.write(i);
    delay(6);
  }
  delay(2000);
  handServo.write(65);
  delay(550);
  handServo.write(40);
  delay(200);
  handServo.write(65);
  delay(200);
  handServo.write(40);
  delay(200);
  handServo.write(65);
  delay(200);
  handServo.write(40);
  delay(200);
  handServo.write(65);
  delay(200);
  handServo.write(40);
  delay(200);
  handServo.write(65);
  delay(200);
  handServo.write(40);
  delay(200);
  handServo.write(65);
  delay(2000);
  handServo.write(26);
  delay(400);
  handServo.write(180);
  delay(400);
  boxServo.write(70);
  action++;
  Serial.println("... and ended");
}

void action06(void)
{
  Serial.print("Action  6 started");
  for (int i = 70; i <110; i++)
  {
    boxServo.write(i);
    delay(20);
  }
  delay(1000);
  for (int i = 0; i < 12; i++)
  {
    for (int j = 70; j <= 110; j++)
    {
      boxServo.write(j);
      delay(6);
    }
    delay(200);
  }
  for (int i = 180; i >= 35; i--)
  {
    handServo.write(i);
    delay(30);
  }
  handServo.write(26);
  delay(400);
  handServo.write(180);
  delay(400);
  boxServo.write(70);
  delay(1500);
  for (int i = 70; i <= 110; i++)
  {
    boxServo.write(i);
    delay(6);
  }
  delay(3000);
  boxServo.write(80);
  action++;
  Serial.println("... and ended");
}

void action07(void)
{
  Serial.print("Action  7 started");
  for (int i = 70; i <= 110; i++)
  {
    boxServo.write(i);
    delay(6);
  }
  delay(400);
  handServo.write(26);
  delay(1000);
  for (int i = 0; i < 6; i++)
  {
    for (int j = 70; j <= 110; j++)
    {
      boxServo.write(j);
      delay(6);
    }
    delay(200);
  }
  delay(500);
  handServo.write(180);
  delay(400);
  boxServo.write(70);
  action++;
  Serial.println("... and ended");
}

void action08(void)
{
  Serial.print("Action  8 started");
  for (int i = 70; i <= 110; i++)
  {
    boxServo.write(i);
    delay(6);
  }
  handServo.write(26);
  delay(2000);
  for (int i = 0; i < 7; i++)
  {
    handServo.write(75);
    delay(100);
    handServo.write(40);
    delay(100);
  }
  delay(500);
  handServo.write(180);
  delay(1000);
  boxServo.write(70);
  action++;
  Serial.println("... and ended");
}

void action09(void)
{
  Serial.print("Action  9 started");
  for (int i = 70; i <= 105; i++)
  {
    boxServo.write(i);
    delay(6);
  }
  delay(2000);
  boxServo.write(110);
  for (int i = 180; i >=35; i--)
  {
    handServo.write(i);
    delay(40);
  }
  delay(500);
  handServo.write(26);
  delay(200);
  for (int i = 26; i <=180; i++)
  {
    handServo.write(i);
    delay(40);
  }
  boxServo.write(70);
  delay(2000);
  boxServo.write(100);
  delay(3000);
  boxServo.write(70);
  action++;
  Serial.println("... and ended");
}

void action10(void)
{
  Serial.print("Action 10 started");
  for (int i = 70; i <= 105; i++)
  {
    boxServo.write(i);
    delay(100);
  }
  delay(1000);
  for (int i = 0; i < 10; i++)
  {
    for (int j = 70; j <= 100; j++)
    {
      boxServo.write(j);
      delay(6);
    }
    delay(100);
  }
  boxServo.write(110);
  delay(100);
  handServo.write(26);
  delay(650);
  handServo.write(180);
  delay(400);
  boxServo.write(70);
  action++;
  Serial.println("... and ended");
}

void action11(void)
{
  Serial.print("Action 11 started");
  for (int i = 70; i <= 110; i++)
  {
    boxServo.write(i);
    delay(6);
  }
  handServo.write(26);
  delay(2000);
  for (int i = 0; i < 3; i++)
  {
    handServo.write(65);
    delay(200);
    handServo.write(40);
    delay(200);
  }
  delay(1500);
  handServo.write(180);
  delay(400);
  boxServo.write(70);
  delay(1500);
  for (int i = 70; i <= 110; i++)
  {
    boxServo.write(i);
    delay(6);
  }
  handServo.write(26);
  delay(3000);
  handServo.write(180);
  delay(400);
  boxServo.write(70);
  action++;
  Serial.println("... and ended");
}

void action12(void)
{
  Serial.print("Action 12 started");
  
  for (int i = 70; i <= 110; i++)
  {
    boxServo.write(i);
    delay(50);
  }
  delay(1000);
  for (int i = 180; i >= 26; i--)
  {
    handServo.write(i);
    delay(50);
  }
  delay(2000);
  handServo.write(26);
  delay(200);
  handServo.write(180);
  delay(400);
  boxServo.write(70);
  action++;
  Serial.println("... and ended");
}

void action13(void)
{
  Serial.print("Action 13 started");
  for (int i = 70; i <= 110; i++)
  {
    boxServo.write(i);
    delay(6);
  }
  delay(2000);
  for (int i = 180; i >= 60; i--)
  {
    handServo.write(i);
    delay(40);
  }
  for (int i = 0; i < 3; i++)
  {
    handServo.write(60);
    delay(200);
    handServo.write(40);
    delay(800);
  }
  handServo.write(26);
  delay(2000);
  handServo.write(180);
  delay(500);
  boxServo.write(70);
  action++;
  Serial.println("... and ended");
}

void action14(void)
{
  Serial.print("Action 14 started");
  for (int i = 70; i <= 105; i++)
  {
    boxServo.write(i);
    delay(6);
  }
  delay(4000);
  boxServo.write(110);
  handServo.write(26);
  delay(650);
  handServo.write(180);
  delay(500);
  boxServo.write(100);
  delay(4000);
  boxServo.write(70);
  action++;
  Serial.println("... and ended");
}

void action15(void)
{
  Serial.print("Action 15 started");
  for (int i = 70; i <= 105; i++)
  {
    boxServo.write(i);
    delay(6);
  }
  delay(1000);
  for (int i = 0; i < 3; i++)
  {      
    for (int j = 70; j <= 105; j++)
    {
      boxServo.write(j);
      delay(50);
    }
    for (int j = 105; j >= 70; j--)
    {
      boxServo.write(j);
      delay(50);
    }
  }
  for (int j = 70; j <= 110; j++)
  {
    boxServo.write(j);
    delay(50);
  }
  for (int i = 180; i >= 35; i--)
  {
    handServo.write(i);
    delay(40);
  }
  delay(1000);
  handServo.write(26);
  delay(400);
  handServo.write(180);
  delay(400);
  boxServo.write(70);
  action = 1;
  Serial.println("... and ended");
}


void setup()
{
  Serial.begin(115200);
  Serial.println("Useless Box has started");
  
  pinMode(ledPin, OUTPUT);
  pinMode(frontSwitchPin, INPUT);
  
  handServo.attach(handServoPin);
  boxServo.attach(boxServoPin);
  handServo.write(handServoHomePos);                    //handServo Stillstand
  boxServo.write(boxServoHomePos);                      //boxServo Stillstand
  delay(1000);

  Serial.println("Waiting for action");
  //randomSeed(analogRead(0));

  Serial.println("Testaction");
  while(1)
  {
    for (int i = 70; i <= 120; i++)
    {
      boxServo.write(i);
      Serial.println(i);
      delay(50);
    }
    for (int i = 120; i >= 70; i--)
    {
      boxServo.write(i);
      Serial.println(i);
      delay(50);
    }
  }
}


void loop()
{
  switchStatus = digitalRead(frontSwitchPin);
  //action = random(1,16);
  
  if (switchStatus == HIGH)
  {  
    if (action == 1)        { action01(); }
    
    else if (action == 2)   { action02(); }
    
    else if (action == 3)   { action03(); }
   
    else if (action == 4)   { action04(); }
    
    else if (action == 5)   { action05(); }
    
    else if (action == 6)   { action06(); }
    
    else if (action == 7)   { action07(); }
    
    else if (action == 8)   { action08(); }
    
    else if (action == 9)   { action09(); }
    
    else if (action == 10)  { action10(); }
    
    else if (action == 11)  { action11(); }
    
    else if (action == 12)  { action12(); }
    
    else if (action == 13)  { action13(); }
    
    else if (action == 14)  { action14(); }
    
    else if (action == 15)  { action15(); }
  }
}

