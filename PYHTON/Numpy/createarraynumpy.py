import numpy as np
x=np.array([1,2,3,4])
print(x)
print(type(x)) 

#if we pass tuple it would convert in as array

y=np.array((1,2,3,4,5))
print(y)
print(type(y))


#0-D array

d=np.array(23)

#1-D array

e=np.array([1,2,3])

# 2-d array

f=np.array([[1,2,3],[4,5,6]])

# 3-d array

g= np.array([[[1,2,3],[4,5,6]],[[7,8,9],[1,2,3]]])
print(g)
print(g.ndim)#show the dimension of an array


#creating the array with dimension

u=np.array([1,2,3],ndmin=5)#it will create it as 5 dimension array

print(u)
print(u.ndim)