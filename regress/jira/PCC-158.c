/* 
 * PCC-158
 *  pcc does not support the attribute "always_inline"
 *
 */
struct _TEB;

static inline __attribute__((always_inline)) struct _TEB * __attribute__((__stdcall__)) NtCurrentTeb(void)
{
	    struct _TEB *teb;
#ifdef __i386__
		     __asm__(".byte 0x64\n\tmovl (0x18),%0" : "=r" (teb));
#endif
			      return teb;
}

struct _TEB * foo(void)
{
	    return NtCurrentTeb();
}


int main(int argc, char *argv[]) { return 0; }
