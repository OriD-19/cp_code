from sys import stdin, stdout

# stdin = open("herding.in", "r")
# stdout = open("herding.out", "w")

cows = list(map(int, stdin.readline().strip().split(" ")))

cows.sort()


