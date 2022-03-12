from collections import defaultdict

n = int(input())
diction = defaultdict(list)
person = [list(map(int,input().split())) for _ in range(n)]

direction = list(input().rstrip())

for _ in range(n):
    diction[person[_][1]].append((person[_][0],direction[_]))

for line in diction:
    stack = []

    for y,d in sorted(diction[line]):
        if stack and stack[-1] == "R" and d =="L":
            print("Yes")
            exit()
        stack.append(d)
print("No")