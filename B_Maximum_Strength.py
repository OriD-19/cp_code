t = int(input())

while t:

    L, R = input().split(" ")

    zeroes = ""
    if len(L) < len(R):
        for i in range(len(R) - len(L)):
            zeroes += "0"
    
    L = zeroes + L

    digit_diff = [abs(int(L[0]) - int(R[0]))]

    for i in range(1, len(R)):
        if digit_diff[i - 1] == 0:
            digit_diff.append(abs(int(L[i]) - int(R[i])))
        else:
            digit_diff.append(9)
    
    print(sum(digit_diff))

    t -= 1