#include "correlator_multitau.h"
#include <stdio.h>
#include <stdlib.h>

unsigned int get_tau_(unsigned int l, unsigned int k_)
{
    unsigned int result=0;
    for(unsigned int k=1;k<=k_;k++)
	result+=1<<((k-1)/l);
	return result;
}

