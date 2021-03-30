
#define trig 3
#define echo 4
#define svalve 6
#define bulb 7

void setup() {
  
pinMode(echo,INPUT);
pinMode(trig,OUTPUT);
pinMode(svalve,OUTPUT);
pinMode(bulb,OUTPUT);


digitalWrite(bulb,HIGH);  

}

void loop() {

  digitalWrite(trig,LOW);
  delayMicroseconds(2);
  digitalWrite(trig,HIGH);
  delayMicroseconds(10);
  digitalWrite(trig,LOW);
 
 
  long t =pulseIn(echo,HIGH);
  long cm = t/29/2 ;

  Serial.print(cm);
  Serial.println("cm");
  delay(10);

 
 if (cm<=30){

 digitalWrite(svalve,LOW);
 delay(100);

 }

 else {
  
 digitalWrite(svalve,HIGH);
 
}

  

}
