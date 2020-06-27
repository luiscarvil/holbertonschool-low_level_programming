#include "holberton.h"
/**
 *rot13 - function that encodes a string using rot13.
 *@s: pointer
*Return: always 0.
  */
char *rot13(char *s)
{
int i;

for (i = 0; s[i] != '\0'; i++)
{
while ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
{
if ((s[i] >= 'n' && s[i] <= 'z') || (s[i] >= 'N' && s[i] <= 'Z'))
{
s[i] = s[i] - 13;
}
else
{
s[i] = s[i] + 13;
}
i++;
}
}
return (s);
}
