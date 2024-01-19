def calculate(a,b,op):
    if op == '+':
        return a + b
    elif op == '-':
        return a-b
    elif op == '*':
        return a*b
    elif op == '/':
        return a//b 
    else:
        return -1

while True:
    input_str = input().strip()
    if input_str == "?":
        break
    a,op,b = input_str.split()
    a,b = int(a), int(b)
    result = calculate(a,b,op)
    print(result)