void ShowA () {
  PORTD = B10110000;
  PORTB = B00001101;
  activateRow();
  PORTD = B10000000;
  PORTB = B00000001;
  activateColumn();
  reset();
  PORTD = B01110000;
  PORTB = B00001101;
  activateRow();
  PORTD = B01000000;
  PORTB = B00000010;
  activateColumn();
  reset();
  PORTD = B11110000;
  PORTB = B00000000;
  activateRow();
  PORTD = B00100000;
  PORTB = B00000100;
  activateColumn();
  reset();
}
void ShowB () {
  PORTD = B00010000;
  PORTB = B00000000;
  activateRow();
  PORTD = B01000000;
  PORTB = B00000000;
  activateColumn();
  reset();
  PORTD = B11010000;
  PORTB = B00000110;
  activateRow();
  PORTD = B10000000;
  PORTB = B00000001;
  activateColumn();
  reset();
  PORTD = B00110000;
  PORTB = B00001001;
  activateRow();
  PORTD = B00000000;
  PORTB = B00000010;
  activateColumn();
  reset();
}
void ShowC () {
  PORTD = B00010000;
  PORTB = B00000000;
  activateRow();
  PORTD = B00100000;
  PORTB = B00000000;
  activateColumn();
  reset();
  PORTD = B11010000;
  PORTB = B00000111;
  activateRow();
  PORTD = B11000000;
  PORTB = B00000011;
  activateColumn();
  reset();
  PORTD = B10010000;
  PORTB = B00000011;
  activateRow();
  PORTD = B00000000;
  PORTB = B00000100;
  activateColumn();
  reset();
}
void ShowD () {
  PORTD = B11010000;
  PORTB = B00000111;
  activateRow();
  PORTD = B11100000;
  PORTB = B00000011;
  activateColumn();
  reset();
  PORTD = B00110000;
  PORTB = B00001000;
  activateRow();
  PORTD = B00100000;
  PORTB = B00000100;
  activateColumn();
  reset();
}
void ShowE () {
  PORTD = B00010000;
  PORTB = B00000000;
  activateRow();
  PORTD = B00100000;
  PORTB = B00000000;
  activateColumn();
  reset();
  PORTD = B11010000;
  PORTB = B00000110;
  activateRow();
  PORTD = B11000000;
  PORTB = B00000111;
  activateColumn();
  reset();
}
void ShowF () {
  PORTD = B00010000;
  PORTB = B00000000;
  activateRow();
  PORTD = B01000000;
  PORTB = B00000000;
  activateColumn();
  reset();
  PORTD = B11010000;
  PORTB = B00001110;
  activateRow();
  PORTD = B10000000;
  PORTB = B00000011;
  activateColumn();
  reset();
}
void ShowG () {
  PORTD = B00000000;
  PORTB = B00000000;
  activateRow();
  PORTD = B00100000;
  PORTB = B00000000;
  activateColumn();
  reset();
  PORTD = B11100000;
  PORTB = B00000111;
  activateRow();
  PORTD = B01000000;
  PORTB = B00000000;
  activateColumn();
  reset();
  PORTD = B11100000;
  PORTB = B00000110;
  activateRow();
  PORTD = B10000000;
  PORTB = B00000001;
  activateColumn();
  reset();
  PORTD = B11000000;
  PORTB = B00000000;
  activateRow();
  PORTD = B00000000;
  PORTB = B00000010;
  activateColumn();
  reset();
}
void ShowH () {
  PORTD = B00010000;
  PORTB = B00000000;
  activateRow();
  PORTD = B00100000;
  PORTB = B00000100;
  activateColumn();
  reset();
  PORTD = B11110000;
  PORTB = B00001110;
  activateRow();
  PORTD = B11000000;
  PORTB = B00000011;
  activateColumn();
  reset();
}
void ShowI () {
  PORTD = B00010000;
  PORTB = B00000000;
  activateRow();
  PORTD = B10000000;
  PORTB = B00000001;
  activateColumn();
  reset();
  PORTD = B11010000;
  PORTB = B00000111;
  activateRow();
  PORTD = B01000000;
  PORTB = B00000010;
  activateColumn();
  reset();
}
void ShowJ () {
  PORTD = B11110000;
  PORTB = B00000111;
  activateRow();
  PORTD = B10000000;
  PORTB = B00000001;
  activateColumn();
  reset();
  PORTD = B11110000;
  PORTB = B00001001;
  activateRow();
  PORTD = B01000000;
  PORTB = B00000010;
  activateColumn();
  reset();
  PORTD = B00110000;
  PORTB = B00001110;
  activateRow();
  PORTD = B00000000;
  PORTB = B00000010;
  activateColumn();
  reset();
  PORTD = B11010000;
  PORTB = B00001111;
  activateRow();
  PORTD = B00000000;
  PORTB = B00000111;
  activateColumn();
  reset();
}
void ShowK () {
  PORTD = B11100000;
  PORTB = B00001111;
  activateRow();
  PORTD = B00100000;
  PORTB = B00000100;
  activateColumn();
  reset();
  PORTD = B11010000;
  PORTB = B00000111;
  activateRow();
  PORTD = B00100000;
  PORTB = B00000010;
  activateColumn();
  reset();
  PORTD = B10110000;
  PORTB = B00001011;
  activateRow();
  PORTD = B00100000;
  PORTB = B00000001;
  activateColumn();
  reset();
  PORTD = B01110000;
  PORTB = B00001101;
  activateRow();
  PORTD = B10100000;
  PORTB = B00000000;
  activateColumn();
  reset();
  PORTD = B11110000;
  PORTB = B00001110;
  activateRow();
  PORTD = B01100000;
  PORTB = B00000000;
  activateColumn();
  reset();
}
void ShowL () {
  PORTD = B00000000;
  PORTB = B00000000;
  activateRow();
  PORTD = B00100000;
  PORTB = B00000000;
  activateColumn();
  reset();
  PORTD = B11110000;
  PORTB = B00000111;
  activateRow();
  PORTD = B11000000;
  PORTB = B00000111;
  activateColumn();
  reset();
}
void ShowM () {
  PORTD = B00010000;
  PORTB = B00000000;
  activateRow();
  PORTD = B00100000;
  PORTB = B00000100;
  activateColumn();
  reset();
  PORTD = B10110000;
  PORTB = B00001111;
  activateRow();
  PORTD = B01000000;
  PORTB = B00000010;
  activateColumn();
  reset();
  PORTD = B01110000;
  PORTB = B00001111;
  activateRow();
  PORTD = B10000000;
  PORTB = B00000001;
  activateColumn();
  reset();
}
void ShowN () {
  PORTD = B11000000;
  PORTB = B00000111;
  activateRow();
  PORTD = B00010000;
  PORTB = B00000100;
  activateColumn();
  reset();
  PORTD = B10110000;
  PORTB = B00001111;
  activateRow();
  PORTD = B00110000;
  PORTB = B00000100;
  activateColumn();
  reset();
  PORTD = B01110000;
  PORTB = B00001111;
  activateRow();
  PORTD = B01010000;
  PORTB = B00000100;
  activateColumn();
  reset();
  PORTD = B11110000;
  PORTB = B00001110;
  activateRow();
  PORTD = B10010000;
  PORTB = B00000100;
  activateColumn();
  reset();
  PORTD = B11110000;
  PORTB = B00001101;
  activateRow();
  PORTD = B00010000;
  PORTB = B00000101;
  activateColumn();
  reset();
  PORTD = B11110000;
  PORTB = B00001011;
  activateRow();
  PORTD = B00010000;
  PORTB = B00000110;
  activateColumn();
  reset();
}
void ShowO () {
  PORTD = B11100000;
  PORTB = B00000111;
  activateRow();
  PORTD = B11000000;
  PORTB = B00000011;
  activateColumn();
  reset();
  PORTD = B00010000;
  PORTB = B00001000;
  activateRow();
  PORTD = B00100000;
  PORTB = B00000100;
  activateColumn();
  reset();
}
void ShowP () {
  PORTD = B11110000;
  PORTB = B00000001;
  activateRow();
  PORTD = B01000000;
  PORTB = B00000000;
  activateColumn();
  reset();
  PORTD = B11010000;
  PORTB = B00001110;
  activateRow();
  PORTD = B11000000;
  PORTB = B00000001;
  activateColumn();
  reset();
  PORTD = B00110000;
  PORTB = B00001111;
  activateRow();
  PORTD = B01000000;
  PORTB = B00000010;
  activateColumn();
  reset();
}
void ShowQ () {
  PORTD = B11100000;
  PORTB = B00000111;
  activateRow();
  PORTD = B11000000;
  PORTB = B00000011;
  activateColumn();
  reset();
  PORTD = B00010000;
  PORTB = B00001000;
  activateRow();
  PORTD = B00100000;
  PORTB = B00000100;
  activateColumn();
  reset();
  PORTD = B11110000;
  PORTB = B00000111;
  activateRow();
  PORTD = B00000000;
  PORTB = B00000100;
  activateColumn();
  reset();
  PORTD = B11110000;
  PORTB = B00001011;
  activateRow();
  PORTD = B00000000;
  PORTB = B00000010;
  activateColumn();
  reset();
  PORTD = B11110000;
  PORTB = B00001101;
  activateRow();
  PORTD = B00000000;
  PORTB = B00000001;
  activateColumn();
  reset();
}
void ShowR () {
  PORTD = B00010000;
  PORTB = B00000001;
  activateRow();
  PORTD = B00100000;
  PORTB = B00000010;
  activateColumn();
  reset();
  PORTD = B11100000;
  PORTB = B00001110;
  activateRow();
  PORTD = B11100000;
  PORTB = B00000001;
  activateColumn();
  reset();
}
void ShowS () {
  PORTD = B00010000;
  PORTB = B00001011;
  activateRow();
  PORTD = B00100000;
  PORTB = B00000000;
  activateColumn();
  reset();
  PORTD = B11100000;
  PORTB = B00000110;
  activateRow();
  PORTD = B11000000;
  PORTB = B00000011;
  activateColumn();
  reset();
  PORTD = B11010000;
  PORTB = B00001001;
  activateRow();
  PORTD = B00000000;
  PORTB = B00000100;
  activateColumn();
  reset();
}
void ShowT () {
  PORTD = B11000000;
  PORTB = B00001111;
  activateRow();
  PORTD = B11110000;
  PORTB = B00001111;
  activateColumn();
  reset();
  PORTD = B00110000;
  PORTB = B00000000;
  activateRow();
  PORTD = B10000000;
  PORTB = B00000001;
  activateColumn();
  reset();
}
void ShowU () {
  PORTD = B00010000;
  PORTB = B00001000;
  activateRow();
  PORTD = B00100000;
  PORTB = B00000100;
  activateColumn();
  reset();
  PORTD = B11110000;
  PORTB = B00000111;
  activateRow();
  PORTD = B11000000;
  PORTB = B00000011;
  activateColumn();
  reset();
}
void ShowV () {
  PORTD = B00010000;
  PORTB = B00001100;
  activateRow();
  PORTD = B00100000;
  PORTB = B00000010;
  activateColumn();
  reset();
  PORTD = B11110000;
  PORTB = B00001011;
  activateRow();
  PORTD = B01000000;
  PORTB = B00000001;
  activateColumn();
  reset();
  PORTD = B11110000;
  PORTB = B00000111;
  activateRow();
  PORTD = B10000000;
  PORTB = B00000000;
  activateColumn();
  reset();
}
void ShowW () {
  PORTD = B00000000;
  PORTB = B00000000;
  activateRow();
  PORTD = B00100000;
  PORTB = B00000100;
  activateColumn();
  reset();
  PORTD = B11110000;
  PORTB = B00000111;
  activateRow();
  PORTD = B01000000;
  PORTB = B00000010;
  activateColumn();
  reset();
  PORTD = B11110000;
  PORTB = B00001001;
  activateRow();
  PORTD = B10000000;
  PORTB = B00000001;
  activateColumn();
  reset();
}
void ShowX () {
  PORTD = B11000000;
  PORTB = B00000011;
  activateRow();
  PORTD = B00100000;
  PORTB = B00000100;
  activateColumn();
  reset();
  PORTD = B10110000;
  PORTB = B00001101;
  activateRow();
  PORTD = B01000000;
  PORTB = B00000010;
  activateColumn();
  reset();
  PORTD = B01110000;
  PORTB = B00001110;
  activateRow();
  PORTD = B10000000;
  PORTB = B00000001;
  activateColumn();
  reset();
}
void ShowY () {
  PORTD = B10000000;
  PORTB = B00001111;
  activateRow();
  PORTD = B00100000;
  PORTB = B00000100;
  activateColumn();
  reset();
  PORTD = B01110000;
  PORTB = B00001111;
  activateRow();
  PORTD = B01000000;
  PORTB = B00000010;
  activateColumn();
  reset();
  PORTD = B11110000;
  PORTB = B00000000;
  activateRow();
  PORTD = B10000000;
  PORTB = B00000001;
  activateColumn();
  reset();
}
void ShowZ () {
  PORTD = B11100000;
  PORTB = B00000011;
  activateRow();
  PORTD = B00100000;
  PORTB = B00000000;
  activateColumn();
  reset();
  PORTD = B11100000;
  PORTB = B00000101;
  activateRow();
  PORTD = B01000000;
  PORTB = B00000000;
  activateColumn();
  reset();
  PORTD = B11100000;
  PORTB = B00000110;
  activateRow();
  PORTD = B10000000;
  PORTB = B00000000;
  activateColumn();
  reset();
  PORTD = B01100000;
  PORTB = B00000111;
  activateRow();
  PORTD = B00000000;
  PORTB = B00000001;
  activateColumn();
  reset();
  PORTD = B10100000;
  PORTB = B00000111;
  activateRow();
  PORTD = B00000000;
  PORTB = B00000010;
  activateColumn();
  reset();
  PORTD = B11000000;
  PORTB = B00000111;
  activateRow();
  PORTD = B00000000;
  PORTB = B00000100;
  activateColumn();
  reset();
}