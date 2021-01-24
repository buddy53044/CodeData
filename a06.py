import math
a, b, c = map(int, input().split(' '))

if b**2-(4*a*c) > 0:
    ans1 = int((-b+math.sqrt(b**2-(4*a*c)))/(2*a))
    ans2 = int((-b-math.sqrt(b**2-(4*a*c)))/(2*a))
    print("Two different roots x1=%d , x2=%d" % (ans1, ans2))
elif b**2-(4*a*c) == 0:
    ans = int((-b+math.sqrt(b**2-(4*a*c)))/(2*a))
    print("Two same roots x=%d" % ans)
else:
    print("No real root")
