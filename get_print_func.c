#include "main.h"

/**
* get_print_func - selects the correct function to perform the operation.
* @s: argument indentifier
* @index: index for argument indentifier
* Return: pointer to a function.
*/

int (*get_print_func(const char *s, int index))(va_list, char *, unsigned int)
{
print_t pr[] = {
{"c", prt_chr}, {"s", prt_str},
{"i", prt_int}, {"d", prt_int},
{"b", prt_bnr}, {"u", prt_unt},
{"o", prt_oct}, {"x", prt_hex},
{"X", prt_upx}, {"S", prt_usr},
{"p", prt_add}, {"li", plint},
{"ld", plint}, {"lu", plunt},
{"lo", ploct}, {"lx", plhex},
{"lX", plupx}, {"hi", phint},
{"hd", phint}, {"hu", phunt},
{"ho", phoct}, {"hx", phhex},
{"hX", phupx}, {"#o", pnoct},
{"#x", pnhex}, {"#X", pnupx},
{"#i", prt_int}, {"#d", prt_int},
{"#u", prt_unt}, {"+i", ppint},
{"+d", ppint}, {"+u", prt_unt},
{"+o", prt_oct}, {"+x", prt_hex},
{"+X", prt_upx}, {" i", psint},
{" d", psint}, {" u", prt_unt},
{" o", prt_oct}, {" x", prt_hex},
{" X", prt_upx}, {"R", prt_rot},
{"r", prt_rev}, {"%", prt_prg},
{"l", prt_prg}, {"h", prt_prg},
{" +i", ppint}, {" +d", ppint},
{"+ i", ppint}, {"+ d", ppint},
{" %", prt_prg}, {NULL, NULL},
};
int i = 0, j = 0, first_index;

first_index = index;
while (pr[i].type_arg)
{
if (s[index] == pr[i].type_arg[j])
{
if (pr[i].type_arg[j + 1] != '\0')
index++, j++;
else
break;
}
else
{
j = 0;
i++;
index = first_index;
}
}
return (pr[i].f);
}
