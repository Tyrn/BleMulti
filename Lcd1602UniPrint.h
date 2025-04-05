#ifndef _LCD1602UNIPRINT_H
#define _LCD1602UNIPRINT_H

// Display mode: 1 - I2C; 2 - 10-pin.
#define _LCD_TYPE 1
#include <LCD_1602_RUS_ALL.h>

class Lcd1602UniPrint {
public:
  Lcd1602UniPrint(uint8_t lcd_Addr = 0x27, uint8_t lcd_cols = 16, uint8_t lcd_rows = 2)
    : d(lcd_Addr, lcd_cols, lcd_rows) {}
  
  // The length of a Unicode string in characters.
  static int len(const char *s);

  // Print a signed decimal number in the lower right corner.
  void print_dec_lr(const char *label, int value);

  // Print a signed decimal number in the upper right corner.
  void print_dec_ur(const char *label, int value);

  // Print a signed decimal number in the lower left corner.
  void print_dec_ll(const char *label, int value);

  // Print a signed decimal number in the upper left corner.
  void print_dec_ul(const char *label, int value);

  LCD_1602_RUS d;
private:
};

#endif
