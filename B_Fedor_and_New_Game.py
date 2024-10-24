n, m, k = list(map(int, input().split(" ")))

players = []

for _ in range(m):
    players.append(int(input()))

fedor = int(input())

ans = 0
for player in players:
    ans += sum(map(int, [*bin(fedor ^ player)[2:]])) <= k

print(ans)