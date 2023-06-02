int Ldr = 33;
int buzzer = 19;

void setup() 
{       
    Serial.begin(9600);
     delay(100);
   
    pinMode(Ldr,INPUT);
    pinMode(buzzer,OUTPUT);
    
}

 void loop() {
   int sensorValue = analogRead(A0);

 int LdrValue = analogRead(Ldr);
Serial.println(LdrValue);

if(LdrValue > 100)
digitalWrite(buzzer,HIGH);
else
digitalWrite(buzzer,LOW);
delay(100);
}
