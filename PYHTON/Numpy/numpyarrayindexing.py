#for one-d array[index]
#for two-d array[row,col]
#for three-d array[which 2 d row,then row,then column]

# we can print the values also in indexing in slicing method
# like for 2d array [row,1:4]in which row how many values u
# need till where

import numpy as np

x=np.array([[1,2,3,4],[5,6,7,8]])
print(x[0:2,2])
print(x[0:2,1:4])

print(x.dtype)#displays data type

y=np.array([1.1,2.1,3.3])
l=y.astype("i")
m=y.astype(bool)
print(l)
print(m)
print(y)
print(type(y))

a=y.view()
print(a)
n=y.copy()
print(n)