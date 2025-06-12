local arr = {4,3,2,5,1.5}

for a = 1, 5 do
    if a == 5 then
        io.write(arr[a])
    else
        io.write("" .. arr[a] .. " ")
    end
end

local arr2 = {"Tim", 1, 1.5, 10, true}

print()
print("The length of the second array is: " .. #arr2) --> This is Equivalent to Python's len(arr2)

print("The Second array is below-")
for a = 1, #arr2 do
    if a == #arr2 then
        io.write(tostring(arr2[a]) .. "\n\n")
    else
        io.write("" .. tostring(arr2[a]) .. " ")
    end
end

--Did you notice I started the loop with 1 and not 0 like python and other langs?
--In Lua, Indexing starts with 1
--Meaning the first element can be called by arr[1] and not arr[0]


print("The first element of the first array is: " .. arr[1])


--Try arr[0] and check the error message
--UNDERSTANDING THE ERROR MESSAGES IS WITHOUT ANY DOUBT ONE OF THE MOST IMPORTANT PARTS OF PROGRAMMING



--Had to use tostring() to convert the values into string. It was needed to print the boolean.
--Try it without Type Casing.
--Type Casing means converting the data type.
--Only Strings, Integers and Floats are directly printable.
--Other data types needs to be coverted to sting before printing.