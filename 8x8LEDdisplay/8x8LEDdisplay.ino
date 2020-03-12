// the led matrix is common anothe, meaning that when row is low and column is high then the respective led turns on
//defining everything
#define L1  2  // row
#define L2  3  // column
#define D0  4  // input 1 || Row/Column 1
#define D1  5  // input 2 || Row/Column 2
#define D2  6  // input 3 || Row/Column 3
#define D3  7  // input 4 || Row/Column 4
#define D4  8  // input 5 || Row/Column 5
#define D5  9  // input 6 || Row/Column 6
#define D6  10 // input 7 || Row/Column 7
#define D7  11 // input 8 || Row/Column 8

const byte dlow = 0.5; // Small delay time
char rx_byte;

void setup() {
  Serial.begin(9600); //9600 bits per second
  DDRD = DDRD | B11111100; //this sets 2-7 as outputs
  DDRB = B00001111; //this sets 8-11 as outputs and 12-13 as inputs
  reset();
}
// the loop function runs over and over again forever
void loop() {
  if (Serial.available() > 0){
    rx_byte = Serial.read();
    Serial.print(rx_byte);
    int x = 0;
    while (rx_byte == 'a') {
      ShowA();
    }
    while (rx_byte == 'b') {
      ShowB();
    }
    while (rx_byte == 'c') {
      ShowC();
    }
    while (rx_byte == 'd') {
      ShowD();
    }
    while (rx_byte == 'e') {
      ShowE();
    }
    while (rx_byte == 'f') {
      ShowF();
    }
    while (rx_byte == 'g') {
      ShowG();
    }
    while (rx_byte == 'h') {
      ShowH();
    }
    while (rx_byte == 'i') {
      ShowI();
    }
    while (rx_byte == 'j') {
      ShowJ();
    }
    while (rx_byte == 'k') {
      ShowK();
    }
    while (rx_byte == 'l') {
      ShowL();
    }
    while (rx_byte == 'm') {
      ShowM();
    }
    while (rx_byte == 'n') {
      ShowN();
    }
    while (rx_byte == 'o') {
      ShowO();
    }
    while (rx_byte == 'p') {
      ShowP();
    }
    while (rx_byte == 'q') {
      ShowQ();
    }
    while (rx_byte == 'r') {
      ShowR();
    }
    while (rx_byte == 's') {
      ShowS();
    }
    while (rx_byte == 't') {
      ShowT();
    }
    while (rx_byte == 'u') {
      ShowU();
    }
    while (rx_byte == 'v') {
      ShowV();
    }
    while (rx_byte == 'w') {
      ShowW();
    }
    while (rx_byte == 'x') {
      ShowX();
    }
    while (rx_byte == 'y') {
      ShowY();
    }
    while (rx_byte == 'z') {
      ShowZ();
    }
  }
}

void reset () {
  PORTD = B00000000;
  PORTB = B00000000;
  activateColumn();
  PORTD = B00000000;
  PORTB = B00000000;
  activateRow();
  delay(dlow);
}

void activateRow () {
  digitalWrite(L1, HIGH); // Enable first buffer
  delay(dlow); // Small delay
  digitalWrite(L1, LOW);
}

void activateColumn () {
  digitalWrite(L2, HIGH); // Enable first buffer
  delay(dlow); // Small delay
  digitalWrite(L2, LOW);
}
