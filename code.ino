int led=3;
int pir=2;
int ldr_value;
bool pir_value;

void setup() {
 pinMode(led,OUTPUT);
 pinMode(pir,INPUT);
 Serial.begin(9600);

}

void loop() {
ldr_value =analogRead(A0);
pir_value = digitalRead(pir);

if(ldr_value <450){
  if(pir_value == HIGH){
    digitalWrite(led,HIGH);
  Serial.println("Motion detected");
  delay(3000);

  }else{
     digitalWrite(led,LOW);
  Serial.println("Motion stopped!");
  }

}else{
   digitalWrite(led,LOW);
  
}

Serial.print("LDR value is :");
Serial.println(ldr_value);
delay(100);

}

