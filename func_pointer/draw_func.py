import matplotlib.pylab as plt
import numpy as np

def f(x):
	return x*x - 2*x - 3

if __name__ == "__main__":
	x = np.arange(-5, 5, 0.1)
	y = f(x)
	plt.plot(x, y)
	plt.ylim(-4.5, +5)
	plt.show()
