String password = "ABCDEF";

void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.println("Please enter your password: ");

  while(Serial.available() == 0){
    }

  String input = Serial.readString();

  Serial.println(input);

  if(input == "a\n"){
    Serial.println("Password correct");
  }
    else
      Serial.println("Password incorrect");
}
