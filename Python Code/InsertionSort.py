import random
# # def insertionSort(lst):
# #     for i in range(1, len(lst)):
# #         curr = lst[i]
# #         k = i - 1
# #         while k >= 0 and lst[k] > curr:
# #             lst [1 + k] = lst[k]
# #             k-=1
# #         lst[k + 1] = curr
# #         print(lst)
# # lst = [1, 9, 4.5, 10.6, 5.7, -4.5]
# # insertionSort(lst)

# s = {1, 3, 4}
# # s1 = {{1, 2}, {4, 5}}
# # s2 = {[1, 2], [4, 5]}
# s3 = {(1, 2), (4, 5)}
# # 2 * s
# d={"ages": 1, "brain": 3}
# print(list(d.keys()))


# while True:
#     print(1)
# print(s)
# # print(s1)
# # print(s2)
# print(s3)

# print(round(7.5))

# print(format("Programming", "13s"), end='#')
# print(format(111, "8d") ,end='#')
# print(format(924.656, "3.2f"))

# random.random()
# print(45//4)
# x = 0
# z = 20 if x > 0 else -100

# print(z)

# for d in range(0, 10, 0.1):
#     print(d)
#     sum += sum + d

# number = 9
# isPrime = True
# for i in range(2, number):
#     if  number % i == 0:
#         isPrime = False
#     print("i is ", i)
#     if isPrime:
#         print(number, " is prime.")
#         break
#     else:
#         print(number, "is not prime\
            #   ")

# j = 0
# for i in range(10, 1, -2):
#     print(i)
#     j+=i
# print(j)

# class A: 
#     def __init__(self) -> None:
#         self.x = 1
#         self.__y = 1
#     def getY(self):
#         return self.__y

# a = A()
# a.x = 45
# print(a.x)

def main():
    myCount = Count()
    times = 0
    for i in range(0, 100):
        increment(myCount, times)
    print("myCount.count = ", myCount.count, "times = ", times)

def increment(c, times):
    c.count += 1
    times += 1
class Count:
    def __init__(self) -> None:
        self.count = 0

main()

myList = [1, 5, 5, 5, 5, 1]
max = myList[0]
indexOfMax = 0
for i in range(1, len(myList)):
    if myList[i] > max: 
        mzx = myList[i]
        indexOfMax = i

print(indexOfMax)

myList.pop(1)
random.shuffle(myList)
myList.insert(3, 7)
print(myList)