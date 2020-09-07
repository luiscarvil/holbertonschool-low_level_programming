#include <unistd.h>
#include <stdio.h>

_putchar(char c)
{
  return (write(1, &c, 1));
}
