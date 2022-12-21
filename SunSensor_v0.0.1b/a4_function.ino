int average(int8_t _pin, int8_t _check_value) {
  //Фильтр для значений фоторезистора
  uint16_t val = 0;
  for (int8_t i = 0; i < _check_value; i++) {
    val += analogRead(_pin);
  }
  return (val / _check_value);
}

/********************_START_TEST_********************/

void sun_tracker(uint16_t _front, uint16_t _left, uint16_t _back, uint16_t _right) {
  if (_front < _back) Serial.print("FRONT");
  else Serial.print("BACK");

  if (_left < _right) Serial.print("\t LEFT");
  else Serial.print("\t RIGHT");
}

  /********************_END_TEST_********************/