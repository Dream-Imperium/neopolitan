#include <stdlib.h>

#include "vanilla_cpu.h"
#include "vanilla_fns.h"

ulong
strtoul(const char *restrict s, char **restrict e, int b)
{
	return c_std_strtouvl((char *)s, b, 0, C_ULONGMAX, e, nil);
}
