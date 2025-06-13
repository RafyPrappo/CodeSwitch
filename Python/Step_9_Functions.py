# Function with no arguments
def function_name():
    print("This is a function")

function_name()  # --> The function will not do its work until we call it

# The function does not take any arguments
# Don't know what arguments are?
# Don't worry, let's check that out.

def ghughumaach(argument1, argument2):
    print("Argument 1 is:", argument1)
    print("Argument 2 is:", argument2)

ghughumaach("Hello", 100)

# The function above took 2 arguments. We can put any amount of arguments we want


def print_list(lst):
    for a in range(len(lst)):
        if a == len(lst) - 1:
            print(lst[a])
        else:
            print(lst[a], end=" ")
    print()


def hello(*args):
    argument_list = list(args)
    return argument_list


# #hello(...) doesn't exist, so we store result then use len()
print("The function above can take", len(hello()), "arguments")
lst = hello()
print("And the argument list is: ", end="")
print_list(lst)

print("----------------------------------------------------------------------------")

print("The function above can take", len(hello("Tim", "Tam", "Tum")), "arguments")
lst = hello("Tim", "Tam", "Tum")
print("And the argument list is: ", end="")
print_list(lst)

print("----------------------------------------------------------------------------")

print("The function above can take", len(hello(1, 2, 3, 4)), "arguments")
print("And the argument list is: ", end="")
print_list(hello(1, 2, 3, 4))  # --> You see that? We can pass other functions in functions as arguments as well

print("----------------------------------------------------------------------------")

lst = hello(1, 4.4, "Hello", True)  # --> This time I took the returned value in a variable
print("The function above can take", len(lst), "arguments")
print("And the argument list is: ", end="")
print_list(lst)

print("----------------------------------------------------------------------------")

# The functions in Python work the same way as Lua, just the syntax is different
# The function that can use undeclared number of variables is called a VARIADIC FUNCTION

# Now can you make a function that can add two integer values and both print and return the value?
# Also, can you make it print "Please enter an integer!!!" if you put any other datatype by mistake?
# Don't worry let me show you how to check the datatype of a variable, I'm sure you can find the rest yourself.

variable1 = 10
print("The datatype of the 1st variable is:", type(variable1))  # --> Exactly like Lua

variable2 = "Hello"
print("The datatype of the 2nd variable is:", type(variable2))