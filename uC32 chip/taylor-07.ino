// CSCI 313
// Class Exercise 0 Solution
// Reads pushbuttons 1-4, if one is pushed, light LEDS 1, 3, 5, 7 respectively

// Define IO devices using names on I/0 shield

  extern "C"{
    void asmSetup();
    void asmLoop();
  }

const int BTN1 = 4;
const int BTN2 = 34;
const int BTN3 = 36;
const int BTN4 = 37;

const int LD1 = 26;
const int LD3 = 28;
const int LD5 = 30;
const int LD7 = 32;


void setup() {
  // put your setup code here, to run once:

  pinMode(BTN1, INPUT);

  pinMode(LD1, OUTPUT);
  

}

void loop() {
  // put your main code here, to run repeatedly:

  asmLoop();
  
}
