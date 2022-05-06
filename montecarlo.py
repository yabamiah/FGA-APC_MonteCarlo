import numpy as np
import matplotlib.pyplot as plt

n=1e4
x = 1-2*np.random.random(int(n))
y = 1-2.*np.random.random(int(n))

insideX5,  insideY5  = x[(x*x+y*y)<=1],y[(x*x+y*y)<=1]
outsideX, outsideY = x[(x*x+y*y)>1],y[(x*x+y*y)>1]
insideX,  insideY  = x[(x*x+y*y)<=0.5],y[(x*x+y*y)<=0.5]
inside2X, inside2Y  = x[(x*x+y*y)<=0.4],y[(x*x+y*y)<=0.4]
inside3X, inside3Y  = x[(x*x+y*y)<=0.3],y[(x*x+y*y)<=0.3]
inside4X, inside4Y  = x[(x*x+y*y)<=0.2],y[(x*x+y*y)<=0.2]
inside6X, inside6Y  = x[(x*x+y*y)<=0.1],y[(x*x+y*y)<=0.1]


fig, ax = plt.subplots(1)

ax.scatter(insideX5, insideY5, c='r', alpha=0.8, edgecolor='#33415c')
ax.scatter(insideX, insideY, c='#ffffff', alpha=0.8, edgecolor='#33415c')
ax.scatter(inside2X, inside2Y, c='r', alpha=0.8, edgecolor='#33415c')
ax.scatter(inside3X, inside3Y, c='#ffffff', alpha=0.8, edgecolor='#33415c')
ax.scatter(inside4X, inside4Y, c='r', alpha=0.8, edgecolor='#33415c')
ax.scatter(inside6X, inside6Y, c='#ffffff', alpha=0.8, edgecolor='#33415c')
ax.scatter(outsideX, outsideY, c='#000000', alpha=0.8, edgecolor='#33415c')

plt.title('Dardos = 10⁴')


ax.set_aspect('equal')
plt.savefig("1e4.png")
