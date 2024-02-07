import numpy as np
x=np.array([1,3,4,6])
# y=np.where(x==2)
# z=np.where(x%2!=0)
m=np.searchsorted(x,5)
n=np.searchsorted(x,[2,5])#it will tell where to input the data in the predifned array and return the index
print(n)
print(m)
# print(z)
# print(y)

