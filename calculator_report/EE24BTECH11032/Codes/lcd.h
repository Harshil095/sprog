#ifndef LCD_H
#define LCD_H

#include <avr/io.h>

// Function prototypes
void lcd_command(uint8_t cmd);
void lcd_data(uint8_t data);
void lcd_init();
void lcd_clear();
void lcd_set_cursor(uint8_t col, uint8_t row);
void lcd_print(const char *str);

#endif

