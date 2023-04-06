import numpy as np
import matplotlib.pyplot as plt
x = []
y = []
with open("C:/Users/Hp/Desktop/Laba_3/lab.txt","r") as f:
    for line in f.readlines():
        x.append(float(line.split(' ')[1]))
        y.append(int(line.split(' ')[0]))
print(x)
print(y)
w = np.array(x)
z = np.array(y)
plt.scatter(w,z)
plt.show()