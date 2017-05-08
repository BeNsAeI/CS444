import matplotlib.pyplot as plt

ionumbers = []

with open('rawio.txt') as f:
    rawio = f.read()
    for line in rawio.split('\n'):
            if len(line) > 0: # some lines are empty
                ionumbers.append(int(line.split()[-1][:-1]))

plt.ylabel('Disk sector')
plt.xlabel('Request number')

plt.plot(ionumbers)
plt.show()
