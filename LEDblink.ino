int right=12;
int left=13;
int h=500;
int f=1000;



void setup() {
  // put your setup code here, to run once:
pinMode(left,OUTPUT);
pinMode(right,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:


digitalWrite(left,LOW);
digitalWrite(right,LOW);
delay(f);
}
