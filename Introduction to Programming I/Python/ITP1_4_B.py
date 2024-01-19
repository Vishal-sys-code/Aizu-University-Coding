import math
r = float(input())

area = math.pi*r*r
circumference = 2*math.pi*r

# print(f"{area:.6f} {circumference:.6f}")
# print("------------")
print("{:.6f} {:.6f}". format(area, circumference))