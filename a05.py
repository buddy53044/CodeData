t = int(input())

for i in range(t):
    a, b, c, d = map(int, input().split(' '))
    if b-a == c-b:

        print(a, b, c, d, int(d+(b-a)))

    else:

        print(a, b, c, d, int(d*(b/a)))
# t = int(input())
# for i in range(t):
#     # a = list(map(int, input().split(' ')))
#     a = [int(num) for num in input().split(' ')]

