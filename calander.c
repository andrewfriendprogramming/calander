#include <stdio.h>
#include <string.h>

#include "calander.h"

struct month Months[12];

int main()
{
	int weekCount = 1;
	int loop = 0;
	char dayOfTheWeek[10];
	int yearOfCalender;
	INIT_MONTHS;//Creates an array called "Months" that contains details about months, Jan is 0, Dec is 11

	//ask the user for the day of the week the year starts on, and the year
	printf("What year do you want the calender for?\t");
	scanf("%d",&yearOfCalender);
	
	weekCount = (daysFrom1979(yearOfCalender) % 7) + 1;

	if(isLeap(yearOfCalender))
	{
		Months[1].days = 29;
	}



	for (int currentMonth = 0; currentMonth < 12; currentMonth++)
	{
		printf("%s\n",Months[currentMonth].name);
		printf("M  T  W  T  F  S  S \n");
		int k = 0;
		while (k < weekCount-1)
		{
			printf("...");loop++;k++;
		}
		
		loop = 0;
		for(int currentDay = 1 ; currentDay <= Months[currentMonth].days;currentDay++)
		{
				
				
				printf("%.2d ",currentDay);
				
				if (weekCount==7)
				{
					printf("\n");
					weekCount = 0;
					
				} 
				weekCount++;
				
				
		} 
		printf("\n\n");

	}

}



