int faze1=6;  //first transistor output (gate)
int faze2=5;  //second trasistor output
int faze3=4;  //third transistor output
int del=300;  //delay between gate up (time where all is down)
int delhi=60; //delay -transistor up
int alltimeperiod=360;
int checkinterval=2000;
int counter=checkinterval;

void checkPot(){  //check potentiometer set
  int val=analogRead(A1); //0-1023 (1023=50:50)
  val=(int)(((alltimeperiod/1023)*val)/2); //values in val will be (0-alltimeperiod)/2
  delhi=val;
  del=alltimeperiod-delhi; 
  counter=0; 
}

void delf(int dl){
  delayMicroseconds(dl);
  counter++;
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
  if(counter>checkinterval) checkPot();
  // put your main code here, to run repeatedly:

}
