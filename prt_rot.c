#include "main.h"

/**
* prt_rot - writes the str in ROT13
* @arguments: input string
* @buff: buffer pointer
* @ibuff: index for buffer pointer
* Return: number of chars printed.
*/

int prt_rot(va_list arguments, char *buff, unsigned int ibuff)
{
char alf[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
char *str;
unsigned int i, j, k;
char nill[] = "(avyy)";

str = va_arg(arguments, char *);
if (str == NULL)
{
for (i = 0; nill[i]; i++)
ibuff = handl_buff(buff, nill[i], ibuff);
return (6);
}
for (i = 0; str[i]; i++)
{
for (k = j = 0; alf[j]; j++)
{
if (str[i] == alf[j])
{
k = 1;
ibuff = handl_buff(buff, rot[j], ibuff);
break;
}
}
if (k == 0)
ibuff = handl_buff(buff, str[i], ibuff);
}
return (i);
}
