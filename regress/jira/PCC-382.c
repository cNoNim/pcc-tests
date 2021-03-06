/*
 * PCC-382
 * negative zero problem in float/double variables
 */

#include <math.h>

int main(int argc, char *argv[])
{
#ifndef __vax__
	double d;
	float f;

	f = -0.0;
	if (signbit(f) == 0)
		return 1;

	d = -0.0;
	if (signbit(d) == 0)
		return 1;
#endif
	return 0;
}
