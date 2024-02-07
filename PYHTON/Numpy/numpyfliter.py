import numpy as np

x=np.array([1,3,4,2])
z=np.array([True,False,True,False])
m=x[z]
print(m)

K=np.array([1,2,3,4])
emptyarray=[]
for i in K:
    if i >2:
        emptyarray.append(True)
    else:
        emptyarray.append(False)
print(emptyarray)

#one more method also to do this is 

empty=K>2 #dont need to write for loop does the same work
v=K[empty]
print(v)
