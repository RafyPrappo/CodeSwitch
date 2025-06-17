#Scope: Where a variable is accessible
#Variable lifetime: How long a variable exists in memory

#This is a global variable
x = 10

def demo_scope():
    # This is a local variable
    y = 5
    print("Inside function, x =", x)  # Can access global variable
    print("Inside function, y =", y)  # Can access local variable

demo_scope()

print("Outside function, x =", x)  # Still accessible
# print("Outside function, y =", y)  # This will cause an error because y is local

# Block scope in Python
for i in range(3):
    z = i * 2
    print("Inside loop, z =", z)

print("Outside loop, z =", z)  #Still accessible, Python doesn't block-scope variables inside loops

# Variable lifetime demo
def counter():
    a = 0  # a gets reset every time we call the function
    a += 1
    print("Counter value:", a)

counter()
counter()  # Always prints 1 again, because 'a' doesn't persist

# Global variable modification
def change_global():
    global x  # Tells Python we want to modify the global variable
    x = 99

change_global()
print("After change, x =", x)
