#function to perform basic arithmetic operations
def calculate(a,b):
    add=a+b
    sub=a-b
    multiply=a*b
    divide=a/b

    return add,sub,multiply,divide

#taking input from the user
num1=float(input("enter the first number:"))
num2=float(input("enter the second number:"))

add,sub,multiply,divide=calculate(num1,num2)

print(f"add:{add}")
print(f"sub:{sub}")
print(f"multiply:{multiply}")
print(f"divide:{divide}")
