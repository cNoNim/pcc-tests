/* pcc-bug
 * Subject:    compiler error: valcast
 * From:       czarkoff () gmail ! com
 */
#include <stdio.h>
  
int main(int argc, char *argv[])
{
	int c;

	do {
		break ;
	}while (c = getchar() != EOF); // original while stmt  

	return 0; 
}

