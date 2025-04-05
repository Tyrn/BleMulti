#include <Lcd1602UniPrint.h>

int Lcd1602UniPrint::len(const char *s) {
  int len = 0;
  while (*s)
    len += (*s++ & 0xc0) != 0x80;
  return len;
}

void Lcd1602UniPrint::print_dec_lr(const char *label, int value) {
  d.setCursor(16 - len(label) - String(value).length(), 1);
  d.print(label);
  d.print(value, DEC);
}

void Lcd1602UniPrint::print_dec_ur(const char *label, int value) {
  d.setCursor(16 - len(label) - String(value).length(), 0);
  d.print(label);
  d.print(value, DEC);
}

void Lcd1602UniPrint::print_dec_ll(const char *label, int value) {
  d.setCursor(0, 1);
  d.print(label);
  d.print(value, DEC);
}

void Lcd1602UniPrint::print_dec_ul(const char *label, int value) {
  d.setCursor(0, 0);
  d.print(label);
  d.print(value, DEC);
}

void Lcd1602UniPrint::print_label_lr(const char *label) {
  d.setCursor(16 - len(label), 1);
  d.print(label);
}

void Lcd1602UniPrint::print_label_ur(const char *label) {
  d.setCursor(16 - len(label), 0);
  d.print(label);
}

void Lcd1602UniPrint::print_label_ll(const char *label) {
  d.setCursor(0, 1);
  d.print(label);
}

void Lcd1602UniPrint::print_label_ul(const char *label) {
  d.setCursor(0, 0);
  d.print(label);
}
