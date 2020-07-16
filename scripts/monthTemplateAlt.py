months = [["January",31],["Febuary",28],["March",31],["April",30],["May",31],["June",30],["July",31],["August",31],["September",30],["October",31],["November",30],["December",30]]
for i in range(12):
	print("strcpy(Months[0].name,\"%s\");	Months[0].days = %s;" % (months[i][0],months[i][1]))
