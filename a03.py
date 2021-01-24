# a = input().split(' ')
# b = list(map(int, a))
# s = (b[0]*2+b[1]) % 3
# if s == 0:
#     print("��桅��")
# if s == 1:
#     print("���")
# if s == 2:
#     print("憭批��")
M, D = map(int, input().split())

s = (M*2+D) % 3


if(s == 2):

    print("安")

elif(s == 1):

    print("安")

elif(s == 0):

    print("安")
