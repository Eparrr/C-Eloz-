import numpy as np
import matplotlib.pyplot as plt
x = []
y = []
with open("131690321.txt","r") as f:
    for line in f.readlines():
        x.append(int(line.split(' ')[1]))
        y.append(int(line.split(' ')[0]))
print(x)
print(y)
z = np.array(x)
w = np.array(y)
plt.scatter(z,w)
plt.show()