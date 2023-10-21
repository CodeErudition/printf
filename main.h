#ifndef _MAIN_H

#define _MAIN_H
#define SR_NULL 6
#define UNKNOWN 7

#include <stdarg.h>
#include <stddef.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* PROTOTYPES (_printf) */
int _printf(const char *format, ...);
/* Custom putchar, puts and other functions */
char _putchar(char c);
int print_str(char *str);
#endif

