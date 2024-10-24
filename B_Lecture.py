n, m = list(map(int, input().split(" ")))
words = {}

while m:
    a, b = input().split(" ")
    words[a] = b
    m -= 1

lecture = input().split(" ")
translate = []

for word in lecture:
    if len(word) <= len(words[word]):
        translate.append(word)
    else:
        translate.append(words[word])

print(*translate)