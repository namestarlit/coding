#include "header.h"
#include <unistd.h>

int _print(char c)
{
	return(write(1, &c, 1));
}
