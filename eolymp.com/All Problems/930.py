phone=input()
count=0
number=[0, 1, 2, 3, 4, 5, 6, 7, 8, 9]
for i in number:
    if str(i) not in phone:
        count+=1
print(count)
for i in number:
    if str(i) not in phone:
        print(int(i), end=' ')
print()