k = 7
a = input()
ans = []

for char in a:
    ans.append(chr(ord(char)-k))

for i in range(len(ans)):
    print(ans[i], end='')
# a = range(20)
# print(a, type(a))
# print(''.join())
#print(ans.join(' '))
