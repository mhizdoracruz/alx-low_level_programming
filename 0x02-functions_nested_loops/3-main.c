#ifndef MAIN_H
#define MAIN_H
#include "main.h"
#include <unistd.h>

int _islower(int c)
{
	 int r;

	  r = _islower('H');
	  _putchar(r + '0');
	  r = _islower('o');
	  _putchar(r + '0');
	  r = _islower(108);
	  _putchar(r + '0');
	  _putchar('\n');
	  
	  return (0);
}

#endif
