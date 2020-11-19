int faze1=6;
int faze2=5;
int faze3=4;
int del=300;
int delhi=60;

void delf(int dl){
  delayMicroseconds(dl);
}

void setup() {
  // put your setup code here, to run once:
pinMode(faze1,OUTPUT);
pinMode(faze2,OUTPUT);
pinMode(faze3,OUTPUT);



}

void loop() {

  digitalWrite(faze1, HIGH);
  delf(delhi);
  digitalWrite(faze1, LOW);
  delf(del);
  digitalWrite(faze2, HIGH);
  delf(delhi);
  digitalWrite(faze2, LOW);
  delf(del);
  digitalWrite(faze3, HIGH);
  delf(delhi);
  digitalWrite(faze3, LOW);
  delf(del);
  // put your main code here, to run repeatedly:

}
