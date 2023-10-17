#ifndef _MAIN_H

#define _MAIN_H
#define BUFFSIZE 1024

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <limits.h>

/* ============= PROTOTYPES (_printf)================== */

int _printf(const char *format, ...);

/* =================== Custom putchar, puts and other functions ================= */
char _putchar(char c);
int get_len(char *s);
int print_char(int c);
int print_str(char *str);
int p_print(void);
int print_int(int n);
int p_print(void);
int print_int(int n);
int print_str_rev(char *str);
int print_binary(int n);
int print_unsigned(unsigned int n);
int print_octal(unsigned int n);

/* Custom specifiers Prototype*/
int print_hex(unsigned int n, int uppercase);
#endif
