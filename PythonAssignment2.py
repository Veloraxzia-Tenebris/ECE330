def myAtoi(s):
	counter = 1
	out = 0
	top = 2147483648 - 1
	bot = 2147483648 * -1
	s = s.lstrip(' ')
	s = s.replace("+", "", 1)
	if s.startswith("-"):
		counter = -1
		s = s.replace("-", "", 1)
	for i in range(len(s)):
		if not s[i].isnumeric():
			break
		out = (out * 10) + int(s[i])
	out *= counter
	if out > top:
		out = top
	elif out < bot:
		out = bot
	return out



def printmystuff(o):
	print(o)
	print(myAtoi(o))
	print("------------NEXT LINE------------")


print(myAtoi(""))
m = "2147483647"
printmystuff(m)
m = "2147483648"
printmystuff(m)
m = "-2147483648"
printmystuff(m)
m = "-2147483649"
printmystuff(m)
m = "        2147483647"
printmystuff(m)
m = "    2147483648"
printmystuff(m)
m = "       -2147483648"
printmystuff(m)
m = "      -2147483649"
printmystuff(m)
m = "        2147 b 483647"
printmystuff(m)
m = "    21474 b83648"
printmystuff(m)
m = "       -21474836b 48"
printmystuff(m)
m = "      -21474b83649"
printmystuff(m)
m = "      -00032"
printmystuff(m)
m = "      00032"
printmystuff(m)
m = "abcs"
printmystuff(m)
m = "+156"
printmystuff(m)