#include <stdlib.h>

#include "vanilla_cpu.h"
#include "vanilla_fns.h"

void *
bsearch(const void *k, const void *b, size_t n, size_t m,
    int (*f)(const void *, const void *))
{
	return c_std_bsearch((void *)k, (void *)b, m, n, (ctype_cmpfn)f);
}
