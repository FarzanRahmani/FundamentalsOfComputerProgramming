#We also have operators that convert booleans to other booleans

	B1 and B1  - returns true if both B1 and B2 are True
	B1 or B2    - returns true if either B1 or B2 are True
	not B1   - returns true if B1 is False.  
	
For example

if x <= y: 
	print("less than or equal")

#Is the same as 

if x < y or x == y: 
	print("less than or equal")

If you have statements with both 'and' and 'or' the 'and' operators get evaluated first, however it is probably better if you simply put parentheses around things to be clear.  