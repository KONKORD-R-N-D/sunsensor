void setup() {
  Serial.begin(9600);
  Serial.println("Front, Left, Back, Right");  //Подпись графиков в мониторе порта
}

void loop() {
  //average_debug();
  sun_position_debig();
}
