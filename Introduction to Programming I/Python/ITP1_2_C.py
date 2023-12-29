'''
Sorting three numbers: [PSEUDOCODES]

1. Compare pairwise
def func(x,y,z):
    if x>y:
        x,y = y,x
    if x>z:
        x,z = z,x
    if y>z:
        y,z = z,y
    return x,y,z

2. Using Maximum and Minimum Functions
def func(x,y,x):
    smallest = min(x,y,z)
    largest = max(x,y,z)
    middle = (x+y+z) - smallest - largest
    return smallest,middle,largest
'''

a, b, c = map(int, input().split())

