#include "common_work.h"
#include <stdio.h>

void changePtrPtr(int **pPtr, int * const p)
{
#ifdef _ANSWER_
	*pPtr = NULL;
	pPtr++;
	*pPtr = p;
#endif
}