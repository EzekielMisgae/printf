#include "main.h"

/**
* plhex - prints a long decimal in hexadecimal
* @arguments: input string
* @buff: buffer pointer
* @ibuff: index for buffer pointer
* Return: number of chars printed
*/

int plhex(va_list arguments, char *buff, unsigned int ibuff)
{
long int int_input, i, isnegative, count, first_digit;
char *hexadecimal, *binary;

int_input = va_arg(arguments, long int);
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

binary = malloc(sizeof(char) * (64 + 1));
binary = fill_binary_array(binary, int_input, isnegative, 64);
hexadecimal = malloc(sizeof(char) * (16 + 1));
hexadecimal = fill_hex_array(binary, hexadecimal, 0, 16);
for (first_digit = i = count = 0; hexadecimal[i]; i++)
{
if (hexadecimal[i] != '0' && first_digit == 0)
first_digit = 1;
if (first_digit)
{
ibfuf = handl_buff(buff, hexadecimal[i], ibuff);
count++;
}
}
free(binary);
free(hexadecimal);
return (count);
}
