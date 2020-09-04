total = 0
for i in range(2,10**6):
    sum = 0
    for j in str(i):
        sum += int(j)**5
    if sum == i:
        total += sum
print(total)
