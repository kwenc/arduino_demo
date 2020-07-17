int odebraneDane = 0; //Pusty ciąg odebranych danych

void setup() {
  Serial.begin(9600); //Inicjalizacja UART
}

void loop() {
  int potencjometr = analogRead(A5); //Odczytanie wartości ADC
  
  if(Serial.available() > 0) { //Czy Arduino odebrano dane
    odebraneDane = Serial.read(); //Jeśli tak, to odczytaj 1 znak
  }
  
  switch (odebraneDane) {
    case 'd':
      Serial.println(potencjometr, DEC);
    break;
    case 'h':
      Serial.println(potencjometr, HEX);
    break;
    case 'o':
      Serial.println(potencjometr, OCT);
    break;
    case 'b':
      Serial.println(potencjometr, BIN);
    break;
  }
  
  delay(1000); //Opóźnienie dla wygody
}
