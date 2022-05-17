#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

/**
* struct print - struct for printer functions
* @type_arg: identifier
* @f: pointer to a printer functions
* Description: struct that stores pointers to a
* printer functions.
*/

typedef struct print
{
	char *type_arg;
	int (*f)(va_list, char *, unsigned int);
} print_t;

int _printf(const char *format, ...);
int prt_buff(char *buff, unsigned int nbuf);
int prt_prg(va_list __attribute__((unused)), char *, unsigned int);
int prt_chr(va_list arguments, char *buff, unsigned int ibuff);
int prt_str(va_list arguments, char *buff, unsigned int ibuff);
int prt_int(va_list arguments, char *buff, unsigned int ibuff);
int prt_bnr(va_list arguments, char *buff, unsigned int ibuff);
int prt_unt(va_list arguments, char *buff, unsigned int ibuff);
int prt_oct(va_list arguments, char *buff, unsigned int ibuff);
int prt_hex(va_list arguments, char *buff, unsigned int ibuff);
int prt_upx(va_list arguments, char *buff, unsigned int ibuff);
int prt_usr(va_list arguments, char *buff, unsigned int ibuff);
int prt_add(va_list arguments, char *buff, unsigned int ibuff);
int prt_rev(va_list arguments, char *buff, unsigned int ibuff);
int prt_rot(va_list arguments, char *buff, unsigned int ibuff);
int plint(va_list arguments, char *buff, unsigned int ibuff);
int plunt(va_list arguments, char *buff, unsigned int ibuff);
int ploct(va_list arguments, char *buff, unsigned int ibuff);
int plhex(va_list arguments, char *buff, unsigned int ibuff);
int plupx(va_list arguments, char *buff, unsigned int ibuff);
int phint(va_list arguments, char *buff, unsigned int ibuff);
int phunt(va_list arguments, char *buff, unsigned int ibuff);
int phoct(va_list arguments, char *buff, unsigned int ibuff);
int phhex(va_list arguments, char *buff, unsigned int ibuff);
int phupx(va_list arguments, char *buff, unsigned int ibuff);
int ppint(va_list arguments, char *buff, unsigned int ibuff);
int pnoct(va_list arguments, char *buff, unsigned int ibuff);
int pnhex(va_list arguments, char *buff, unsigned int ibuff);
int pnupx(va_list arguments, char *buff, unsigned int ibuff);
int psint(va_list arguments, char *buff, unsigned int ibuff);
int (*get_print_func(const char *s, int index))(va_list, char *, unsigned int);
int ev_print_func(const char *s, int index);
unsigned int handl_buff(char *buff, char c, unsigned int ibuff);
char *fill_binary_array(char *binary, long int int_in, int isneg, int limit);
char *fill_oct_array(char *bnr, char *oct);
char *fill_long_oct_array(char *bnr, char *oct);
char *fill_short_oct_array(char *bnr, char *oct);
char *fill_hex_array(char *bnr, char *hex, int isupp, int limit);

#endif
