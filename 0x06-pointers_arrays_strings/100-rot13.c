#include "main.h"
/**
 * rot13 - Function that reverses the content of an array of integers.
 *
 * @str: s is the array
 *
 * Return: Always 0.
 */
char *rot13(char *str)
{
int i = 0, z;
char s[] =  "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char s1[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
for (; str[i] != '\0'; i++)
{
for (z = 0; z <= 51; z++)
{
if (s[z] == str[i])
{
str[i] = s1[z];
}
}
}
return (str);
}
