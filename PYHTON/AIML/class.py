#creating the list

print([])
# 1D -> Homo
print([1,2,3,4,5])
# 2D
print([1,2,3,[4,5]])
# 3D
print([[[1,2],[3,4]],[[5,6],[7,8]]])
# Hetrogenous
print([1,True,5.6,5+6j,'Hello'])
# Using Type conversion
print(list('hello'))


#acessing the items 


# Indexing
L = [[[1,2],[3,4]],[[5,6],[7,8]]]
#positive
#print(L[0][0][1])

# Slicing
L = [1,2,3,4,5,6]

print(L[::-1])