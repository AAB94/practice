A = [(5,6),(5,10),(1,2),(1,8)]

A.sort(key=lambda x: (x[0],-x[1]))

print(A)
