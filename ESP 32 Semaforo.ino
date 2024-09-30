const int ledRojo = 1;
const int ledVerde = 3;
const int ledAmarillo = 2;
const int pulsador = 6;
void setup () {
  pinMode (ledRojo, OUTPUT);
  pinMode (ledAmarillo, OUTPUT);
  pinMode (ledVerde, OUTPUT);
  pinMode (pulsador, INPUT);
}
void loop(){
  boolean estado = digitalRead(pulsador);
  if(estado == LOW){
    digitalWrite(ledVerde, LOW);
    delay(400);
    digitalWrite(ledVerde, HIGH);
    delay(400);
    digitalWrite(ledVerde, LOW);
    delay(400);
    digitalWrite(ledVerde, HIGH);
    delay(400);
    digitalWrite(ledVerde, LOW);
    delay(400);
    digitalWrite(ledVerde, HIGH);
    delay(400);
    digitalWrite(ledVerde, LOW);
    digitalWrite(ledAmarillo, HIGH);
    delay(600);
    digitalWrite(ledRojo, HIGH);
    delay(1200);
    digitalWrite(ledRojo, LOW);
    digitalWrite(ledAmarillo, HIGH);
    delay(600);
    digitalWrite(ledAmarillo, LOW);
    digitalWrite(ledVerde, HIGH);
}else {
    digitalWrite(ledVerde, HIGH);
  }
}


