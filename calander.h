#include <stdio.h>
#include <string.h>

#define FEBUARY 2 //allows program to check for leap days

//populates array with the name of each month, Starting from January at index 0, and the ammount of days in that month.


#define isLeap(x) ( ((x%4 == 0) && !(x%100 == 0)) || (x % 400 == 0) )


struct month
{
	int days;
	char name[10];
};

#define INIT_MONTHS \
	strcpy(Months[0].name,"January");	Months[0].days = 31;\
	strcpy(Months[1].name,"Febuary");	Months[1].days = 28;\
	strcpy(Months[2].name,"March");		Months[2].days = 31;\
	strcpy(Months[3].name,"April");		Months[3].days = 30;\
	strcpy(Months[4].name,"May");		Months[4].days = 31;\
	strcpy(Months[5].name,"June");		Months[5].days = 30;\
	strcpy(Months[6].name,"July");		Months[6].days = 31;\
	strcpy(Months[7].name,"August");	Months[7].days = 31;\
	strcpy(Months[8].name,"September");	Months[8].days = 30;\
	strcpy(Months[9].name,"October");	Months[9].days = 31;\
	strcpy(Months[10].name,"November");	Months[10].days = 30;\
	strcpy(Months[11].name,"December");	Months[11].days = 30;\


struct Date
	{
		int day;
		int month;
		int year;
	} ;

int calcDayOfWeek(struct Date);

//compares two strings , but the first letter's case doesnt matter
int compareString(char*,char*);

int daysFrom1979(int finalYear);





