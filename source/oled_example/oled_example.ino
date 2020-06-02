#include <Arduino.h>
#include <U8x8lib.h>

#ifdef U8X8_HAVE_HW_SPI
#include <SPI.h>
#endif

U8X8_SSD1306_128X32_UNIVISION_SW_I2C u8x8( SCL, SDA, U8X8_PIN_NONE);

void setup(void) {
  u8x8.begin();
  u8x8.setPowerSave(0);
  u8x8.setFlipMode(1);
}

void loop(void) {
  u8x8.setFont(u8x8_font_chroma48medium8_r);
  u8x8.drawString(0,0,"EvilCrow-RF");
  u8x8.drawString(0,1,"git: EvilCrow-RF");
  u8x8.drawString(0,2,"V0.9");
  u8x8.refreshDisplay();		// only required for SSD1606/7  
  delay(2000);
}
