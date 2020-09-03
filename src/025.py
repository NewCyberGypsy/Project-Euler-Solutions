a = 0
b = 1
count = 1
while len(str(b)) != 1000:
    count += 1
    a, b = b, a + b
print(b)
print(count)
