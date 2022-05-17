#include "main.h"

/**
* prt_str - writes the string to stdout
* @arguments: input string
* @buff: buffer pointer
* @ibuff: index for buffer pointer
* Return: On success 1.
*/

int prt_str(va_list arguments, char *buff, unsigned int ibuff)
{
char *str;
unsigned int i;
char nill[] = "(null)";

str = va_arg(arguments, char *);
if (str == NULL)
{
for (i = 0; nill[i]; i++)
ibuff = handl_buff(buff, nill[i], ibuff);
return (6);
}
for (i = 0; str[i]; i++)
ibuff = handl_buff(buff, str[i], ibuff);
return (i);
}
