n = int(input("What element of the sequence do you want to receive: "))
k = 1
a = 1
if n >= 0:
    for k in range (1, n+1):
        a = (k * a + 1)/k
        k += 1

    print("%s sequence element = %s" % (k - 1, a))
else:
    print("Error")
input()