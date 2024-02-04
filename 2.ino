int button=6;
int red=3;
int yellow=4;
int green=5;
int reading=0;
int counter=0;
void setup()
{
 pinMode(5,OUTPUT);
 pinMode(6,INPUT);
 pinMode(4,OUTPUT);
 pinMode(3,OUTPUT);
}

void loop()
{
reading=digitalRead(button);
  if (reading == 1)
  {
    counter++;
    if (counter == 1)
    {
      digitalWrite(3,1);
    }
    else if(counter == 2)
    {
      digitalWrite(3,1);
      digitalWrite(4,1);
    }
    else if(counter == 3)
    {
      digitalWrite(3,1);
      digitalWrite(4,1);
      digitalWrite(5,1);
    }
    else
    {
      digitalWrite(3,0);
      digitalWrite(4,0);
      digitalWrite(5,0);
      counter=0;
    }
    delay(250);
  }
}