#include "main.h"

/**
* prt_bnr - prints decimal in binary
* @arguments: input string
* @buff: buffer pointer
* @ibuff: index for buffer pointer
* Return: number of chars printed.
*/

int prt_bnr(va_list arguments, char *buff, unsigned int ibuff)
{
int int_input, count, i, first_one, isnegative;
char *binary;

int_input = va_arg(arguments, int);
isnegative = 0;
if (int_input == 0)
{
ibuff = handl_buff(buff, '0', ibuff);
return (1);
}
if (int_input < 0)
{
int_input = (int_input * -1) - 1;
isnegative = 1;
}
binary = malloc(sizeof(char) * (32 + 1));
binary = fill_binary_array(binary, int_input, isnegative, 32);
first_one = 0;
for (count = i = 0; binary[i]; i++)
{
if (first_one == 0 && binary[i] == '1')
first_one = 1;
if (first_one == 1)
{
ibuff = handl_buff(buff, binary[i], ibuff);
count++;
}
}

free(binary);
return (count);
}
