#include "main.h"

/**
* ppint - print integer with plus symbol
* @arguments: input string
* @buff: buffer pointer
* @ibuff: index for buffer pointer
* Return: number of chars printed
*/

int ppint(va_list arguments, char *buff, unsigned int ibuff)
{
int int_input;
unsigned int int_in, int_temp, i, div;

int_input = va_arg(arguments, int);
if (int_input < 0)
{
int_in = int_input * -1;
ibuff = handl_buff(buff, '-', ibuff);
}
else
{
int_in = int_input;
ibuff = handl_buff(buff, '+', ibuff);
}
int_temp = int_in;
div = 1;
while (int_temp > 9)
{
div *= 10;
int_temp /= 10;
}
for (i = 0; div > 0; div /= 10, i++)
{
ibuff = handl_buff(buff, ((int_in / div) % 10) + '0', ibuff);
}
return (i + 1);
}
