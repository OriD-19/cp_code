n = int(input())

als = list(map(int, input().split(" ")))
vals = sorted(list(dict.fromkeys(vals)))

if len(vals) < 2:
    print("NO")
else:
    print(vals[1])