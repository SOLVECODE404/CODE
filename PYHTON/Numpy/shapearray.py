import numpy as np

# y=np.array([[[1,2,3,4,9],[5,6,7,8,4]],[[1,2,3,4,5],[6,7,8,9,10]],[[1,2,3,4,9],[5,6,7,8,4]]])
# print(y.shape)

# it gives the dimension of the data that is row and column

# reshaping changes the dimension of array to one d two d three d
# m=np.array([1,2,3,4,5,6,7,8,9,10,11,12])
# for i in m:
#     print(i)
n=np.array([[1,2,3,4],[5,6,7,8]])
m=np.array([[4,3,2,1],[8,7,6,5]])

k=np.concatenate((n,m),axis=1)
j=np.stack((n,m),axis=1)
i=np.dstack((n,m))
print(j)


# for i in n:
#     for a in i:

#         print(a)
# for i in (np.nditer)(n[0:2,::2]):
#     print(i)
# y2=m.reshape(4,3)
# y3=m.reshape(2,3,2)
# print(y3)
# y4=(m.reshape(4,3).base)#view of reshaping
# y5=(n.reshape(-1))#2-D To 1-D of reshaping{flatten}
# print(y5)
# print(y4)
# print(n.size)#size of elements