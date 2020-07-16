#include <stdio.h>
#include <string.h>

#include "calander.h"

int daysFrom1979(int finalYear)
{
	int days = 0;
	int currentYear = 1979;
	if (finalYear > 1979)
	{
		for (;currentYear < finalYear; currentYear++)
		{
			if (isLeap(currentYear)) days += 366; else days += 365;
		}
	}
	return days;
}