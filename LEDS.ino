void setup() {
  pinMode(0,OUTPUT);  //Establecer el pin 0 como salida
  pinMode(1,OUTPUT);  //Establecer el pin 1 como salida
  pinMode(2,OUTPUT);  //Establecer el pin 2 como salida
  pinMode(3,OUTPUT);  //Establecer el pin 3 como salida
  pinMode(4,OUTPUT);  //Establecer el pin 4 como salida
  pinMode(5,OUTPUT);  //Establecer el pin 5 como salida
}
void loop() {
  digitalWrite(0,HIGH); //Encender el pin 0   
  digitalWrite(1,HIGH); //Encender el pin 1
  digitalWrite(2,HIGH); //Encender el pin 2
  digitalWrite(3,HIGH); //Encender el pin 3
  digitalWrite(4,HIGH); //Encender el pin 4
  digitalWrite(5,HIGH); //Encender el pin 5
  delay(2000);    //Esperar 2 segundos 2 x 1000 = 2000
  digitalWrite(0,LOW); //Apagar el pin 0
  digitalWrite(1,LOW); //Apagar el pin 1
  digitalWrite(2,LOW); //Apagar el pin 2
  digitalWrite(3,LOW); //Apagar el pin 3
  digitalWrite(4,LOW); //Apagar el pin 4
  digitalWrite(5,LOW); //Apagar el pin 5
  delay(2000);    //Esperar 2 segundos 2 x 1000 = 2000
}
