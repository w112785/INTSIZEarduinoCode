void setup() {
  Serial.begin(9600);
  delay(1000);
  Serial.print("int8_t = "); Serial.println(sizeof(int8_t));
  Serial.print("int16_t = "); Serial.println(sizeof(int16_t));
  Serial.print("int = "); Serial.println(sizeof(int));
  Serial.print("uint = "); Serial.println(sizeof(uint));
  Serial.print("double = "); Serial.println(sizeof(double));
  Serial.print("float = "); Serial.println(sizeof(float));
  Serial.print("char = "); Serial.println(sizeof(char));
}

void loop() {
  // put your main code here, to run repeatedly:

}
