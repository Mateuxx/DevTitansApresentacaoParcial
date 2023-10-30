String up = "w\n";
String down = "s\n";
String left = "a\n";
String right = "d\n";

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin GPIO18 as an output.
  Serial.begin(9600);
  pinMode(18, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(19, OUTPUT);
  pinMode(17, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
   
  digitalWrite(18, HIGH); 
  digitalWrite(5, HIGH);
  digitalWrite(19, HIGH);
  digitalWrite(17, HIGH);

  Serial.println("Keyword: ");
  while(Serial.available() == 0){
    }
  
//w  digitalWrite(18, LOW); 
  
  String input = Serial.readString();
  
  
  if (input == up){
    Serial.println("passsou aquiii");  
    digitalWrite(18, HIGH); 
    delay(1);
    digitalWrite(18, LOW); 
    delay(1)   ;             
  }
  if(input == down) {
    Serial.println("passsou aquiii");  
    digitalWrite(5, HIGH); 
    delay(16);
    digitalWrite(5, LOW); 
    delay(16);
  }
  if(input == left) {
    Serial.println("passsou aquiii");  
    digitalWrite(19, HIGH); 
    delay(16);
    digitalWrite(19, LOW); 
    delay(16);
  }
  if(input == right) {
    Serial.println("passsou aquiii");  
    digitalWrite(17, HIGH); 
    delay(16);
    digitalWrite(17, LOW); 
    delay(16);
  }
}
