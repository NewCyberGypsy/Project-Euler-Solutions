sum = 0
for i in range(1,1001):
    sum += i**i
sum = str(sum)
index = len(sum)
print(sum[index - 10: index])
