n = 100
multiply = 1
sum = 0

while n > 1:
    multiply *= n
    n -= 1

for i in str(multiply):
    sum += int(i)
print(sum)
