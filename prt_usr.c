#include "main.h"

/**
 * prt_usr - prints a string and values of
 * non-printed chars
 * @arguments: input string
 * @buff: buffer pointer
 * @ibuff: index for buffer pointer
 * Return: number of chars printed
 */

int print_usr(va_list arguments, char *buf, unsigned int ibuf)
{
unsigned char *str;
char *hexadecimal, *binary;
unsigned int i, sum, op;

str = va_arg(arguments, unsigned char *);
binary = malloc(sizeof(char) * (32 + 1));
hexadecimal = malloc(sizeof(char) * (8 + 1));
for (sum = i = 0; str[i]; i++)
{
if (str[i] < 32 || str[i] >= 127)
{
ibuff = handl_buff(buff, '\\', ibuff);
ibuff = handl_buff(buff, 'x', ibuff);
op = str[i];
binary = fill_binary_array(binary, op, 0, 32);
hexadecimal = fill_hex_array(binary, hexadecimal, 1, 8);
ibuff = handl_buff(buff, hexadecimal[6], ibuff);
ibuff = handl_buff(buff, hexadecimal[7], ibuff);
sum += 3;
}
else
ibuff = handl_buff(buff, str[i], ibuff);
}
free(binary);
free(hexadecimal);
return (i + sum);
}
