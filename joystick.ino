#define pinVRx A2
#define pinVRy A1
#define pinSW 31

void  setup() {
  // put your setup code here, to run once:
  pinMode(pinVRx, INPUT);
  pinMode(pinVRy, INPUT);
  pinMode(pinSW, INPUT);

  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int valorVRx = analogRead(pinVRx);
  int valorVRy = analogRead(pinVRy);
  bool statusSW = digitalRead(pinSW);

  Serial.print("valor VRx: ");
  Serial.print(valorVRx);

  Serial.print("valor VRy: ");
  Serial.print(valorVRy);

  if (!statusSW) {
      Serial.println("Botao pressionado.");
  } else {
      Serial.println("Botao solto.");
  }
}
