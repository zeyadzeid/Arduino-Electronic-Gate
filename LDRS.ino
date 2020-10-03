 int ldr= A0, p=0, value=0, btn=6, btn_state, buzzer=10, valBtn=0, value2=0;

void setup() {
   pinMode(btn,INPUT);
   pinMode(buzzer, OUTPUT);
   pinMode(ldr,INPUT);
   Serial.begin(9600);
}
void loop() {
  value= analogRead(ldr);
valBtn= digitalRead(btn);
if (valBtn == HIGH){
  btn_state=1;
  }
else{
  btn_state=0;
  }
if (btn_state==1){
if(value==10) {
  p=1;
  Serial.println("a person entered");
  Serial.print("no. of persons in the room:" );
  Serial.print(p);
  Serial.print("ldr reading: ");
  Serial.print(value);
  }
  else if(value==15){
   p=2;
  Serial.println("a person entered");
  Serial.print("no. of persons in the room:" );
  Serial.print(p);
  Serial.print("ldr reading: ");
  Serial.print(value);
  }
 else if(value==20) {
  p=3;
  Serial.println("a person entered");
  Serial.print("no. of persons in the room:" );
  Serial.print(p);
  Serial.print("ldr reading: ");
  Serial.print(value);
  }
  else if(value==25) {
  p=4;
  Serial.println("a person entered");
  Serial.print("no. of persons in the room:" );
  Serial.print(p);
  Serial.print("ldr reading: ");
  Serial.print(value);
  }
  else if(value==30) {
  p=5;
  Serial.println("a person entered");
  Serial.print("no. of persons in the room:" );
  Serial.print(p);
  Serial.print("ldr reading: ");
  Serial.print(value);
  }
else if (value>=31){
    p=6;
    }
if (p>=6){
  digitalWrite(buzzer, HIGH);
   
  }
    
       }   }
