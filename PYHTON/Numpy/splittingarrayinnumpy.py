import numpy as np

x=np.array([1,2,3,4,5,6,7,8,9,1,2,3,4])
#the first one is get trhe max value on split of array and then further on 
y=np.array_split(x,4)
print(y)

z=np.array([[1,2,3],[4,5,6],[7,8,9],[3,2,1]])
m=(np.array_split(z,3,axis=1))  
#for axis 1 we can use the hsplit methods also
print(m)