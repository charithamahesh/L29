#function to perform basic arithmetic operations
def calculate(a,b):
    add=a+b
    sub=a-b
    multiply=a*b

    return add,sub,multiply

#taking input from the user
num1=float(input("enter the first number:"))
num2=float(input("enter the second number:"))

add,sub,multiply=calculate(num1,num2)

print(f"add:{add}")
print(f"sub:{sub}")
print(f"multiply:{multiply}")
