#include "main.h"
/**
 * _isalpha - Function that checks for alphabetic character.
 * @c:Check the data return.
 * Return: (1) if character is lower,uppercase and zero it is otherwise.
 */
int _isalpha(int c)
{
  if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
    {
      return (1);
    }
  else
    {
      return (0);
    }
  _putchar('\n');
}
