function FunctionName()
print("This is a function")
end

FunctionName() --> The function will not do it's work until we call it

--The function does not take any arguments
--Don't know what arguments are?
--Don't worry, let's check that out.

function Ghughumaach(argument1, argument2)
    print("Argument 1 is: " .. argument1)
    print("Argument 2 is: " .. argument2)
end

Ghughumaach("Hello", 100)

--The function above took 2 arguments. We can put any amount of arguments we want

function PrintList(lst)
    for a = 1, #lst do
        if a == #lst then
            io.write(tostring(lst[a]))
        else
            io.write(tostring(lst[a]) .. " ")
        end
    end
    print()
end



function Hello(...)
    local argument_list = {...}

    return argument_list
end



print("The function above can take " .. #Hello() .. " arguments") -- #Hello is basically calling the length of the list that I am returning from the Hello function
local lst = Hello()
io.write("And the argument list is: ")
PrintList(lst)

print("----------------------------------------------------------------------------")

print("The function above can take " .. #Hello("Tim", "Tam", "Tum") .. " arguments")
local lst = Hello("Tim", "Tam", "Tum")
io.write("And the argument list is: ")
PrintList(lst)

print("----------------------------------------------------------------------------")

print("The function above can take " .. #Hello(1, 2, 3, 4) .. " arguments")
io.write("And the argument list is: ")
PrintList(Hello(1, 2, 3, 4)) --> You see that? we can pass other functions in functions as arguments as well

print("----------------------------------------------------------------------------")

local lst = Hello(1, 4.4, "Hello", true) --> This time I took the returned value in a variable
print("The function above can take " .. #lst .. " arguments")
io.write("And the argument list is: ")
PrintList(lst)

print("----------------------------------------------------------------------------")

-- The funcions in lua is all the same like python, Just the syntax is different
-- The function that we can use undeclared amount of variables is Called VARIADIC FUNCTION
-- Now can you make a function that can add two integer values and both print and return the value?
-- Also, can you make it print "Please enter an integer!!!" if you put any other datatype by mistake?
-- Don't worry let me show you how to check the datatype of a variable, I am sure you can find the rest yourself.

local variable1 = 10

print("The datatype of the 1st variable is: " .. type(variable1)) --> Exactly like Python

local variable2 = "Hello"

print("The datatype of the 2nd variable is: " .. type(variable2))


