#include <dht.h>

dht DHT;
int mtr1=5;
int mtr2=6;

#define DHT11_PIN 8

void setup(){
  Serial.begin(9600);
  pinMode(mtr1,OUTPUT);
  pinMode(mtr2,OUTPUT);
  digitalWrite(mtr1,LOW);
  digitalWrite(mtr2,55);
 
  
}

void loop()
{
  
  
  int chk = DHT.read11(DHT11_PIN);
  Serial.print("Temperature = ");
  Serial.println(DHT.temperature);
 if(DHT.temperature>34){
  digitalWrite(mtr1,LOW);
    digitalWrite(mtr2,0);
 }
  Serial.print("Humidity = ");
  Serial.println(DHT.humidity);
  delay(2000);
//  while(DHT.temperature<50)
  
     
}
