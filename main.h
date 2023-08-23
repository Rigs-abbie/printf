#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/* FLAGS */
#define F_MINUS 1
#define F_PLUS 2
#define F_ZERO 4
#define F_HASH 8
#define F_SPACE 16

int _printf(const char *format, ...);
int our_putchar(char c);
int putss(char *c);
int _putchar(char c);
int get_width(const char *format, int *i, va_list list);
int is_digit(char);
int get_flags(const char *format, int *i);
int print_str(char *str);
int print_int(int num);
int print_char(char c);
int print_37(char c);


#endif
