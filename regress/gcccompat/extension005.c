/* 
 *  6.4 Nested Functions
 */

void foo() {
	int a = 1;

	void bar(){
		int b = 4 ;
	}
}

int main(int argc, char *argv[])
{
	foo(); 

	return 0; 
}
