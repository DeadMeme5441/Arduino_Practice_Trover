#define IN1 2
#define IN2 3
#define IN3 4
#define IN4 5
#define IN5 6
#define IN6 7
#define IN7 8 
#define IN8 9

void setup() {
  // put your setup code here, to run once:
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
  pinMode(IN5, OUTPUT);
  pinMode(IN6, OUTPUT);
  pinMode(IN7, OUTPUT);
  pinMode(IN8, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(IN1,HIGH); 
  digitalWrite(IN3,HIGH);
  digitalWrite(IN5,HIGH);
  digitalWrite(IN7,HIGH);
  delay(3000); //for 1 second//
  digitalWrite(IN1,LOW); 
  digitalWrite(IN3,LOW);
  digitalWrite(IN5,LOW);
  digitalWrite(IN7,LOW);
  digitalWrite(IN2,HIGH); 
  digitalWrite(IN4,HIGH);
  digitalWrite(IN6,HIGH);
  digitalWrite(IN8,HIGH);
  delay(3000);
  digitalWrite(IN2,LOW); 
  digitalWrite(IN4,LOW);
  digitalWrite(IN6,LOW);
  digitalWrite(IN8,LOW);

}
