#include "main.h"

/**
* prt_buff - prints buffer
* @buff: buffer pointer
* @nbuff: number of bytes to print
* Return: number of bytes printed.
*/

int prt_buff(char *buff, unsigned int nbuff)
{
return (write(1, buff, nbuff));
}
