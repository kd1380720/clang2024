#include <stdio.h>
main()
{
	int i ;
	for (i = 32 ; i <= 126;i++)
	{
		printf("%x ", i);
		printf("%c ", i );
	}
}