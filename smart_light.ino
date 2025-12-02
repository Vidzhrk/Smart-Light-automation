//automatic light glows when presence is detected using pir sensor relay is used to contol lights. led_builtin is use for codetest purposes
#define pir 26
#define led 2
#define relay 25
unsigned long time_present;
unsigned long time_absent;
void setup() {
  // put your setup code here, to run once:
  pinMode(pir,INPUT);
  pinMode(led,OUTPUT);
  pinMode(relay,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int motion=digitalRead(pir);
  if (motion==HIGH){
    Serial.println("Motion is detected");
    digitalWrite(relay,HIGH);
    digitalWrite(led,HIGH);
    time_present=millis();
  }
  else{
    time_absent=millis();
    float time= float(time_absent-time_present)/1000.00;
    if (time>10){
      Serial.println("Motion is not detected");
      digitalWrite(relay,LOW);
      digitalWrite(led,LOW);
    }
  }
  delay(200);
}
