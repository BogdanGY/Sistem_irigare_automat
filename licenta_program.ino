int senzor = A0;
int releu = 7;

void setup() {
  Serial.begin(9600);

  pinMode(releu, OUTPUT);

  // Pompa oprita la pornire
  digitalWrite(releu, LOW);
}

void loop() {

  int valoare = analogRead(senzor);

  Serial.print("Valoare senzor: ");
  Serial.println(valoare);

  if (valoare < 800) {

    Serial.println("SOL UMED -> POMPA OPRITA");
    digitalWrite(releu, HIGH);

  } else {

    Serial.println("SOL USCAT -> POMPA PORNITA");
    digitalWrite(releu, LOW);

  }

  delay(1000);
}