#include "main.h"

/**
* prt_rev - writes the str in reverse
* @arguments: input string
* @buff: buffer pointer
* @ibuff: index for buffer pointer
* Return: number of chars printed.
*/

int prt_rev(va_list arguments, char *buff, unsigned int ibuff)
{
char *str;
unsigned int i;
int j = 0;
char nill[] = "(llun)";

str = va_arg(arguments, char *);
if (str == NULL)
{
for (i = 0; nill[i]; i++)
ibuff = handl_buff(buff, nill[i], ibuff);
return (6);
}
for (i = 0; str[i]; i++)
;
j = i - 1;
for (; j >= 0; j--)
{
ibuff = handl_buff(buff, str[j], ibuff);
}
return (i);
}
