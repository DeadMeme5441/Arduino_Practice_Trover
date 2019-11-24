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
  digitalWrite(IN1,LOW); //for Valve 1
  digitalWrite(IN2,LOW); //for Valve 1
  digitalWrite(IN3,LOW); //for Valve 2
  digitalWrite(IN4,LOW); //for Valve 2
  digitalWrite(IN5,LOW); //for Valve 3
  digitalWrite(IN6,LOW); //for Valve 3
  digitalWrite(IN7,LOW); //for Valve 4
  digitalWrite(IN8,LOW); //for Valve 4
  
  delay(2000);
  digitalWrite(IN1,HIGH);//Valve 1 ON
  digitalWrite(IN3,HIGH);//Valve 2 ON
  digitalWrite(IN5,HIGH);//Valve 3 ON - PUMP 8"
  
  delay(1000);
  digitalWrite(IN6,HIGH);//Valve 3 ON - CLOSE 8"
  
  delay(1000);
  digitalWrite(IN4,HIGH);//Valve 2 ON - GOTO 5"
  digitalWrite(IN7,HIGH);//Valve 3 ON - PUMP 5"
  
  delay(1000);
  digitalWrite(IN8,HIGH);//Valve 3 ON - CLOSE 5"
  
  delay(1000);
}

