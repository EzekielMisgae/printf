#include "main.h"

/**
* prt_unt - prints an unsigned int
* @arguments: number to print
* @buff: buffer pointer
* @ibuff: index for buffer pointer
* Return: number of chars printed.
*/

int prt_unt(va_list arguments, char *buff, unsigned int ibuff)
{
unsigned int int_in, int_temp, i, div;

int_in = va_arg(arguments, unsigned int);
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
return (i);
}
