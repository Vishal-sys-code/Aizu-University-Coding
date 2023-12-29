n = int(input())
hours = n//3600
rem = n%3600
minutes = rem//60
seconds = rem%60

print(f"{hours}:{minutes}:{seconds}")