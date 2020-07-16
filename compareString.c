#include <stdio.h>
#include <string.h>

#include "calander.h"

int compareString(char* a, char* b)
{
	printf("%d",!(*a == *b || *a == (*b)-32));
	//first char
	if( !(*a == *b || *a == (*b)-32) )
	{
		return 0;
	}
	else
	{
		a++;
		b++;
		while (*a == *b)
		{
			
			a++;
			b++;
			if(*a == 0 && *b == 0)
			{
				return 1;
			}
		}
		return 0;
		
	}
	
		
}