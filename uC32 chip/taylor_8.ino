
void setup() {
  // put your setup code here, to run once:

  // configure PORT E for output
  TRISE = 0x00;

  // initialize n
  int n = 0;
}

void loop() {
  // put your main code here, to run repeatedly:

  // write i to PORT E to display its binary pattern
  int i;

  for (i=0; i<256; i++){
    PORTE = i;

    // delay .25 seconds 
    delay(250);  
  }
}
