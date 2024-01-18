a,b = map(int, input().split())

def calculate_values(a,b):
    d = a//b
    r = a%b
    f = a/b
    return d, r, f

result = calculate_values(a,b);

print(f"{result[0]} {result[1]} {result[2]:.5f}")