//sensor
const int Csen = 13;
const int Dsen = 12;
const int Esen = 11;
const int Fsen = 10;
const int Gsen = 9;
const int Asen = 8;
const int Bsen = 7;
const int C2sen = 6;

//LED for test
const int Cled = 2;
const int Dled = 3;
const int Eled = 4;
const int Fled = 5;

//sensor states
int Cstate = 0;
int Dstate = 0;
int Estate = 0;
int Fstate = 0;
int Gstate = 0;
int Astate = 0;
int Bstate = 0;
int C2state = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(57600);
  
  pinMode(Csen, INPUT);
  pinMode(Dsen, INPUT);
  pinMode(Esen, INPUT);
  pinMode(Fsen, INPUT);
  pinMode(Gsen, INPUT);
  pinMode(Asen, INPUT);
  pinMode(Bsen, INPUT);
  pinMode(C2sen, INPUT);

  pinMode(Cled, OUTPUT);
  pinMode(Dled, OUTPUT);
  pinMode(Eled, OUTPUT);
  pinMode(Fled, OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  readVibrationSensor();
  delay(300);
}

void readVibrationSensor(){
  Cstate = digitalRead(Csen);
  Dstate = digitalRead(Dsen);
  Estate = digitalRead(Esen);
  Fstate = digitalRead(Fsen);
  Gstate = digitalRead(Gsen);
  Astate = digitalRead(Asen);
  Bstate = digitalRead(Bsen);
  C2state = digitalRead(C2sen);

//  if(Fstate == HIGH){
//    digitalWrite(Fled, HIGH);
//  }else{
//    digitalWrite(Fled, LOW);
//  }

  Serial.print(Cstate);
  Serial.print("\t");
  Serial.print(Dstate);
  Serial.print("\t");
  Serial.print(Estate);
  Serial.print("\t");
  Serial.print(Fstate);
  Serial.print("\t");
  Serial.print(Gstate);
  Serial.print("\t");
  Serial.print(Astate);
  Serial.print("\t");
  Serial.print(Bstate);
  Serial.print("\t");
  Serial.print(C2state);
  Serial.print("\t");
  Serial.print("end");
  Serial.println("");
  
}



