count = 0
for i in range(3,10**6+1):
    sum = 0
    for j in str(i):
        j = int(j)
        if j == 0:
            sum += 1
        elif j == 1:
            sum += 1
        elif j == 2:
            sum += 2
        elif j == 3:
            sum += 6
        elif j ==  4:
            sum += 24
        elif j == 5:
            sum += 120
        elif j == 6:
            sum += 720
        elif j == 7:
            sum += 5040
        elif j == 8:
            sum += 40320
        else:
            sum += 362880
    if sum == i:
        count += sum
print(count)
