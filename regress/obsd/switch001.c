/*
 * from OBSD
 *
 * Returns 1 if sizeof(unsigned long) < sizeof(unsigned long long), but
 * should return 0.
 */
int
main(int argc, char *argv[])
{
#ifdef __i386__
	unsigned long long i = (unsigned long)~0 + (unsigned long long)2;

	switch (i) {
	case 1:
		return 1;
	}
#endif
	return 0;
}
