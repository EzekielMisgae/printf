#include "main.h"


/**
* handl_buff - concatenates the buffer characters
* @buff: buffer pointer
* @c: charcter to concatenate
* @ibuff: index of buffer pointer
* Return: index of buffer pointer.
*/

unsigned int handl_buff(char *buff, char c, unsigned int ibuff)
{
if (ibuff == 1024)
{
prt_buff(buff, ibuff);
ibuff = 0;
}
buff[ibuff] = c;
ibuff++;
return (ibuff);
}
