int buzzer=5;
int LedR=2;
int LedV=3;
int LedJ=4;
void setup() {
  
  Serial.begin(9600);
  pinMode(10, INPUT); 
  pinMode(11, INPUT); 
  pinMode(LedR, OUTPUT);
  pinMode(LedV, OUTPUT);
  pinMode(LedJ, OUTPUT);
  pinMode(buzzer, OUTPUT);
}

void loop() {
  digitalWrite(LedR, HIGH);
  if((digitalRead(10) == 1)||(digitalRead(11) == 1)){
    Serial.println('!');
    digitalWrite(LedV, HIGH);
    
   { digitalWrite(buzzer, HIGH);
    delay(500);
    digitalWrite(buzzer, LOW);
    delay(1000);
  }  
    
  }
  else{
   
      Serial.println(analogRead(A0));
      digitalWrite(LedJ, HIGH);
      delay(1000);
      digitalWrite(LedJ, LOW);
      digitalWrite(LedV, LOW);
     
      
  }

  delay(100);
}
