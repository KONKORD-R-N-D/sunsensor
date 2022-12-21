/********************_SERIAL_DEBUG_********************/

void average_debug() {
  if (millis() - last_time > timer) {
    last_time = millis();
    //Serial.println("aver: " + String(average(rz_01_pin, check_value)) + "\t pin_value: " + String(analogRead(rz_01_pin)));
    Serial.print(average(rz_01_pin, check_value));  //Фоторезистор №1 - FRONT
    Serial.print("\t");
    Serial.print(average(rz_02_pin, check_value));  //Фоторезистор №2 - LEFT
    Serial.print("\t");
    Serial.print(average(rz_03_pin, check_value));  //Фоторезистор №3 - BACK
    Serial.print("\t");
    Serial.print(average(rz_04_pin, check_value));  //Фоторезистор №4 - RIGHT
    Serial.println();
  }
}

/********************_LCD_DEBUG_********************/




/********************_START_TEST_DEBUG_********************/

void sun_position_debig() {
  if (millis() - last_time > debug_timer) {
    last_time = millis();
    uint16_t front = average(rz_01_pin, check_value);
    uint16_t left = average(rz_02_pin, check_value);
    uint16_t back = average(rz_03_pin, check_value);
    uint16_t right = average(rz_04_pin, check_value);

    Serial.print(average(rz_01_pin, check_value));  //Фоторезистор №1 - FRONT
    Serial.print("\t");
    Serial.print(average(rz_03_pin, check_value));  //Фоторезистор №3 - BACK
    Serial.print("\t");
    Serial.print(average(rz_02_pin, check_value));  ///Фоторезистор №2 - LEFT
    Serial.print("\t");
    Serial.print(average(rz_04_pin, check_value));  //Фоторезистор №4 - RIGHT
    Serial.print("\t");
    //sun_tracker(uint16_t _front, uint16_t _left, uint16_t _back, uint16_t _right)
    sun_tracker(front, left, back, right);
    Serial.println();
  }
}

/********************_END_TEST_DEBUG_********************/