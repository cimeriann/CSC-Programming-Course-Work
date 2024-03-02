# class Employee:
#     def __init__(self, payPerHour: int, hoursWorked: int):
#         self.payPerHour = payPerHour
#         self.hoursWorked = hoursWorked
#     def calculateTotalFee(self):
#         self.totalFee = self.hoursWorked * self.payPerHour
#         return self.totalFee
    
# employee = Employee(80, 20)

# print(employee.payPerHour)
# print(employee.hoursWorked)
# print(employee.calculateTotalFee())

class Count:
    def __init__(self, count = 0):
        self.count = count
def main():
    c = Count()
    times = 0
    for i in range(100):
        increment(c, times)

    print("count is", c.count)
    print("times is", times)

def increment(c, times):
    c.count += 1
    times += 1
    
main() # Call the main function