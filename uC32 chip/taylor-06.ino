extern "C"{
  void asmSetup();
  void asmLoop();
}

#// declare extern to access in other file
extern int count;

void setup() {
  // put your setup code here, to run once:

  // Set Port E for output
  TRISE = TRISE & ~0x00ff;

  // set switches for input, PORTD pins 8-11
  TRISD = TRISD & ( 0x0f << 8 );

  // start count at 0 and output
  count = 0;
  PORTE = 0xff;
  delay(1000);
  PORTE=count;
}

void loop() {
  // put your main code here, to run repeatedly:

  asmLoop();
  
}
