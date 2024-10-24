n = int(input())
seats = []

i = 0
while i < n:

    seats.append(input().split("|"))
    i += 1

found = False

for row in seats:
    if found:
        break

    if row[0] == "OO":
        row[0] = "++"
        found = True
    elif row[1] == "OO":
        row[1] = "++"
        found = True

if found:
    print("YES")
    for row in seats:
        print('|'.join(row))
else:
    print("NO")