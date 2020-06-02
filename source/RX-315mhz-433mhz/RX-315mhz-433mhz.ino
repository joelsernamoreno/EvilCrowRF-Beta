#include <RCSwitch.h>
#include <ELECHOUSE_CC1101_RCS_DRV.h>

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
  
  //setup cc1101
  ELECHOUSE_cc1101.setSpiPin(sck, miso, mosi, csn1);
  ELECHOUSE_cc1101.setMHZ(CC1101_1_Freq);
  ELECHOUSE_cc1101.Init(PA10);
  CC1101_1.enableReceive(gdo2_1);
  ELECHOUSE_cc1101.SetRx();

  ELECHOUSE_cc1101.setSpiPin(sck, miso, mosi, csn2);
  ELECHOUSE_cc1101.setMHZ(CC1101_2_Freq);
  ELECHOUSE_cc1101.Init(PA10);
  CC1101_2.enableReceive(gdo2_2);
  ELECHOUSE_cc1101.SetRx();
}

void loop() {
 
  if (mySwitch.available()) {
    
    Serial.print("Received ");
    unsigned long code = mySwitch.getReceivedValue();
    Serial.print( code, BIN);
    Serial.print(" / ");
    Serial.print( mySwitch.getReceivedBitlength() );
    Serial.print("bit ");
    Serial.print("Protocol: ");
    Serial.println( mySwitch.getReceivedProtocol() );

    mySwitch.resetAvailable();

  }
}
