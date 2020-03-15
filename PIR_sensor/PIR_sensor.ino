int redLED =8;
int PIR=3;
int motion;
void setup() {
 // put your setup code here, to run once:
   pinMode(redLED,OUTPUT);
   pinMode(PIR,INPUT);
}
void loop() {
 // put your main code here, to run repeatedly:
 motion= digitalRead(PIR);
 if (motion==HIGH){
   digitalWrite(redLED,HIGH);
   delay(100);
   digitalWrite(redLED,LOW);
   }

}
