#include "main.h"
#include <stdio.h>

/**
* prt_chr - writes the character c to stdout
* @arguments: input char
* @buff: buffer pointer
* @ibuf: index for buffer pointer
* Return: On success 1.
*/

int prt_chr(va_list arguments, char *buff, unsigned int ibuff)
{
char c;
c = va_arg(arguments, int);
handl_buff(buff, c, ibuff);
return (1);
}
