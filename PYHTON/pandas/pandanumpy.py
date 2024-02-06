import pandas as pd 
import numpy as np 
random_array = np.random.randint(10,52,(7,4))
# my_panda = pd.DataFrame(random_array,index = ['sub1','sub2','sub3','sub4','sub5','sub6','sub7'],columns = ['student1','student2','student3','student4'])
my_panda = pd.DataFrame(random_array)
print(my_panda)