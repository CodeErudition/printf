#ifndef _MAIN_H

#define _MAIN_H
#define BUFFSIZE 1024

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <limits.h>

typedef unsigned int Uint;
/* PROTOTYPES (_printf) */
int _printf(const char *format, ...);
void conditions(const char *format, va_list arg_list, int indx, int char_cnt);

/* Custom putchar, puts and other functions */
char _putchar(char c);
int get_len(char *s);
int print_char(int c);
int print_str(char *str);
int p_print(void);
int print_int(int n);
int print_binary(Uint n);
int print_uint(Uint n);
int print_octal(Uint n);
int print_hex(Uint n, int uppercase);
#endif
