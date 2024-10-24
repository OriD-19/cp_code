n = int(input())

cookies = list(map(int, input().split(" ")))

odds = 0

for cookie in cookies:
    if cookie % 2:
        odds += 1

if odds % 2:
    print(odds)
else:
    print(n - odds)