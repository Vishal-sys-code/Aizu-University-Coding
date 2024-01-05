import sys
import os

a,b,c = map(int, input().split())

for i in range(a,b):
    if c%i == 0:
        count = count+1

print(count)