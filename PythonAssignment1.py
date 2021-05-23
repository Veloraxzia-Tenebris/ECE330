x = int(input("Please enter an integer: "))
n = []
counter = 1
is_negative = False
out = 0
if x < 0:
	x *= -1
	is_negative = True
while (x / counter) >= 1:
	counter *= 10
while x >= 1:
	counter /= 10
	n.append(int(x / counter))
	a = x / counter
	b = int(x / counter)
	c = (int(x / counter) * counter)
	d = 1000000-c
	x -= round(int(x / counter) * counter)
counter = 1
while True:
	try:
		for i in range(len(n)):
			out += n[i] * counter
			counter *= 10
		if is_negative:
			out *= -1
			if out < (-1 * pow(2, 63)):
				raise OverflowError("The flipped number is too small.")
		if out > (pow(2, 63) - 1):
			raise OverflowError("The flipped number is too big.")
		##out = "{:19.0f}".format(out)
		print("The flipped number is {}".format(out))
		break
	except OverflowError as type:
		print("NaN")
		print(type)
		break