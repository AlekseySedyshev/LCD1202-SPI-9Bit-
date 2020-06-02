//Library has been modified for STM32F0xx by Aleksey Sedyshev
//https://github.com/AlekseySedyshev

#ifndef LCD_1202_h
#define LCD_1202_h

#include "stm32f0xx.h"  

#define SPI1_DR_8bit 			*((__IO uint8_t *)&SPI1->DR)		// Limit for spi bus 8 bit

#define   HI				1
#define   LO				0

#define   RES_ON()			GPIOA->BRR |=1<<2		//RES->0
#define   RES_OFF()			GPIOA->BSRR |=1<<2		//RES->1

#define   CS_HI()				GPIOA->BSRR |=1<<4	
#define   CS_LO()				GPIOA->BRR |=1<<4

//=====================================
#define   LCD_COMMAND 					0
#define 	LCD_DATA 							0xFF
#define 	LCD_STACK_DEPTH 			8
#define 	LCD_SCREEN_WIDTH 			96
#define 	LCD_SCREEN_HEIGHT			8
#define 	LCD_PRINT_INT_MAX_WIDTH 11

extern char LCD_CurrentX;
extern char LCD_CurrentY;
extern const char LCD_ZERO;
extern const char LCD_FILL;
//=====================================

typedef enum {
true	=				1,
false	=				0
} bool;

void lcd_init(void);
void lcd_write(char cd, const char * data, unsigned short int len, unsigned short int repeat);
void lcd_clear(void);
void lcd_gotoxy(char x, char y);
void lcd_print_char(char c);
void lcd_print_string(const char *s);
void lcd_print_int(int value);
void lcd_print_Hex(int value);

#endif
