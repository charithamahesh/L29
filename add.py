#function to perform basic arithmetic operations
def calculate(a,b):
    add=a+b
    sub=a-b

    return add,sub

#taking input from the user
num1=float(input("enter the first number:"))
num2=float(input("enter the second number:"))

add,sub=calculate(num1,num2)

print(f"add:{add}")
print(f"sub:{sub}")
