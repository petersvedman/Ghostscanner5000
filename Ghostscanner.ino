/*
 HC-SR04 Ping distance sensor:
 VCC to arduino 5v 
 GND to arduino GND
 Echo to Arduino pin 2 
 Trig to Arduino pin 3
 
 This sketch originates from Virtualmix: http://goo.gl/kJ8Gl
 Has been modified by Winkle ink here: http://winkleink.blogspot.com.au/2012/05/arduino-hc-sr04-ultrasonic-distance.html
 And modified further by ScottC here: http://arduinobasics.blogspot.com.au/2012/11/arduinobasics-hc-sr04-ultrasonic-sensor.html
 And rewrittten for other purposes by Peter Svedman : https://github.com/
 on 10 Nov 2012.
 */

#define opin1 4
#define opin2 5
#define opin3 6
#define opin4 7
#define opin5 8
#define opin6 9
#define echoPin 2 // Echo Pin
#define trigPin 3 // Trigger Pin
#define LEDPin 13 // Onboard LED

int maximumRange = 200; // Maximum range needed
int minimumRange = 0; // Minimum range needed
long duration, distance; // Duration used to calculate distance

void setup() {

 pinMode(trigPin, OUTPUT);
 pinMode(echoPin, INPUT);
 pinMode(opin1, OUTPUT);
 pinMode(opin2, OUTPUT);
 pinMode(opin3, OUTPUT);
 pinMode(opin4, OUTPUT);
 pinMode(opin5, OUTPUT);
 pinMode(opin6, OUTPUT);
}

void loop() {
/* The following trigPin/echoPin cycle is used to determine the
 distance of the nearest object by bouncing soundwaves off of it. */ 
 digitalWrite(trigPin, LOW); 
 delayMicroseconds(2); 

 digitalWrite(trigPin, HIGH);
 delayMicroseconds(10); 
 
 digitalWrite(trigPin, LOW);
 duration = pulseIn(echoPin, HIGH);
 
 //Calculate the distance (in cm) based on the speed of sound.
 distance = duration/58.2;
 
 if (distance >= 50){
 /* If an object is closer than 50 cm,   */

if (random(1)==0){digitalWrite(opin1, HIGH);}
else {digitalWrite(opin1, LOW);}
if (random(1)==0){digitalWrite(opin2, HIGH);}
else {digitalWrite(opin2, LOW);}
if (random(1)==0){digitalWrite(opin3, HIGH);}
else {digitalWrite(opin3, LOW);}
if (random(1)==0){digitalWrite(opin4, HIGH);}
else {digitalWrite(opin4, LOW);}
if (random(1)==0){digitalWrite(opin5, HIGH);}
else {digitalWrite(opin5, LOW);}
if (random(1)==0){digitalWrite(opin6, HIGH);}
else {digitalWrite(opin6, LOW);}  
 
 }
 
 //Delay 50ms before next reading.
 delay(50);
 digitalWrite(opin1, LOW); 
 digitalWrite(opin2, LOW); 
 digitalWrite(opin3, LOW); 
 digitalWrite(opin4, LOW); 
 digitalWrite(opin5, LOW); 
 digitalWrite(opin6, LOW);  

}
