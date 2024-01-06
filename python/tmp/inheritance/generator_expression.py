#!/usr/bin/python3

sum_val = sum(i * i for i in range(10))
print(sum_val)

xvec = [10, 20, 30]
yvec = [7, 5, 3]

sum_val1 = sum(x * y for x, y in zip(xvec, yvec))
print(sum_val1)

# uniq_words = set(word for line in page for word in line.split())
# valedictorian = max((student.gpa, student.name) for student in graduates)

data = 'golf'
data_list = list(data[i] for i in range(len(data) - 1, -1, -1))
print(data_list)
