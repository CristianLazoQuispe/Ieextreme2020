line = input()
n,t = line.split(" ")
n = int(n)
t = int(t)
line = input()
numbers = []
distribution = ['0' for i in range(t)]
for number in line.split(" "):
    distribution[int(number)]='1'
#print(distribution)
message = "".join(distribution)
del distribution
numbers.append(message)
cnt=0
for i in range(t):
    message = message[1:]+message[0]
    if not message in numbers:
        numbers.append(message)
        cnt+=1
    else:
        break
print(cnt)