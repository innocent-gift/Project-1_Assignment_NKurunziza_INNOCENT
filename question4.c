// 1. Fixed: Added 'const int' before waterPump to define its data type
const int moisturePin = A1;
const int waterPump = 8;

void setup() {
  pinMode(waterPump, OUTPUT);
  
  // Optional: Start serial communication so you can see the moisture values
  Serial.begin(9600); 
}

void loop() {
  int moistureLevel = analogRead(moisturePin);
  
  // Optional: Print the value to the Serial Monitor to help you calibrate
  Serial.print("Moisture Level: ");
  Serial.println(moistureLevel);

  // Your logic: If soil is dry (value is low), turn on the pump
  if (moistureLevel <= 200) {
    digitalWrite(waterPump, HIGH);
  } else {
    digitalWrite(waterPump, LOW);
  }
  
  delay(1000);
}

