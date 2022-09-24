#define trigPin 13

#define echoPin 12

#define trigPint 10

#define echoPint 9

#define motor 7

#define buzzer 6

#define watses A0

void setup()
{
pinMode(trigPin, OUTPUT);

pinMode(echoPin, INPUT);

pinMode(trigPint, OUTPUT);

pinMode(echoPint, INPUT);

pinMode(motor, OUTPUT);

pinMode(buzzer,OUTPUT);

pinMode(watses, INPUT);

}

void loop()

{

long duration, distance;

long durationt, distancet;


digitalWrite(trigPin, LOW);

delayMicroseconds(2);

digitalWrite(trigPin, HIGH);

delayMicroseconds(10);

digitalWrite(trigPin, LOW);

duration = pulseIn(echoPin, HIGH);

distance = (duration/2) / 29.1;

if (distance < 70)     // This is where checking the distance you can change the value

{

digitalWrite(motor,HIGH);    // When the the distance below 100cm

digitalWrite(buzzer,HIGH);

} else

{

digitalWrite(motor,LOW);     // when greater than 100cm

digitalWrite(buzzer,LOW);

} delay(500);

//second 
digitalWrite(trigPint, LOW);

delayMicroseconds(2);

digitalWrite(trigPint, HIGH);

delayMicroseconds(10);

digitalWrite(trigPint, LOW);
durationt = pulseIn(echoPint, HIGH);

distancet = (durationt/2) / 29.1;

if (distancet < 70)     // This is where checking the distance you can change the value

{

digitalWrite(motor,HIGH);    // When the the distance below 100cm

digitalWrite(buzzer,HIGH);

} else

{

digitalWrite(motor,LOW);     // when greater than 100cm

digitalWrite(buzzer,LOW);

} delay(500);

//water
if( analogRead(watses))
{
     digitalWrite(motor,HIGH);   
   digitalWrite(buzzer,HIGH);

   }
   else{
    digitalWrite(motor,LOW);   
    digitalWrite(buzzer,LOW);
    }
}
