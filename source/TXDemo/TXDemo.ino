#include <ELECHOUSE_CC1101_RCS_DRV.h>
#include <RCSwitch.h>

//CC1101 Pins
int sck = 13;
int miso = 12;
int mosi = 11;
int csn1 = 10;
int csn2 = 9;
int gdo0_1 = 6;
int gdo2_1 = 0;
int gdo0_2 = 5;
int gdo2_2 = 1;

float CC1101_1_Freq = 433.92;
float CC1101_2_Freq = 315.00;

RCSwitch mySwitch = RCSwitch();
RCSwitch CC1101_1 = RCSwitch();
RCSwitch CC1101_2 = RCSwitch();

void setup() {
  Serial.begin(9600); 

  ELECHOUSE_cc1101.setMHZ(CC1101_1_Freq);
  ELECHOUSE_cc1101.Init(PA10);
 
  // Transmitter on 
  mySwitch.enableTransmit(gdo0_1);

  // cc1101 set Transmit on
  ELECHOUSE_cc1101.SetTx();
}

void loop() {

  mySwitch.switchOn("11111", "00010");
  delay(1000);
  mySwitch.switchOff("11111", "00010");
  delay(1000);

  mySwitch.send(5393, 24);
  delay(1000);  
  mySwitch.send(5396, 24);
  delay(1000);  

  mySwitch.send("000000000001010100010001");
  delay(1000);  
  mySwitch.send("000000000001010100010100");
  delay(1000);

  mySwitch.sendTriState("00000FFF0F0F");
  delay(1000);  
  mySwitch.sendTriState("00000FFF0FF0");
  delay(1000);

  delay(20000);
}
