import sys
def incorrect():
	print("Prints a list of leap years seperated by space")
	print("Format: ./leapYears.py start end ")
	print("Example: ./leapyears.py 2000 2020")
	print("Output: 2000 2004 2008 2012 2016 2020")
	

if ( len(sys.argv) != 3 ) or ():
	incorrect()
	

if len(sys.argv) == 3:
	
	try:
		start = int(sys.argv[1]) 
		end = int(sys.argv[2])
		for i in range(start,end+1):
			if ( (i % 4 == 0) and not(i % 100 == 0 ) ) or (i % 400== 0) :
				sys.stdout.write(str(i) + " ")
	except ValueError :
	 	incorrect()
	
