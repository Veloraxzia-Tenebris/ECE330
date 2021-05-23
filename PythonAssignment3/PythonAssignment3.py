import matplotlib.pyplot as plt
import numpy as np
import os

#Fix for file importing since Python's cwd is weird
dir_path = os.path.dirname(os.path.realpath(__file__))
os.chdir(dir_path)

'''Old method without using numpy
dataIn = open("MyFile.txt", "r")
data = dataIn.read().split(",")
dataIn.close()
for i in range(len(data)):
	data[i] = float(data[i])
'''
data = np.fromfile("MyFile.txt", sep = ",", dtype = np.float64)
#The next line normally wouldn't be there, but the plot doesn't look like the given image
data = data[0:50]

plt.figure("Signal")
plt.plot(data, linewidth = 0.5)

out = []
outx = []

for i in range(1, len(data) - 1):
	if (data[i] > data[i - 1]) and (data[i] > data[i + 1]):
		out.append(data[i])
		outx.append(i)

print("The peaks of this signal are: ")
print(out)

plt.figure("Signal with peaks circled")
plt.plot(data, linewidth = 0.5)
plt.plot(outx, out, "o", ms = 10, color = "none", mec = "black")
plt.show()