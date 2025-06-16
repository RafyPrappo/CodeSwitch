for a=0,10 do
    io.write("Count: " .. a .. "\n")
    io.write("Do you want me to stop?[y/n]")
    cond = io.read()
    if cond == "y" then
        break
    elseif cond == "n" then
    else
        io.write("Please enter a valid input!!!\n")
    end
end


io.write("The Second Loop Count Starts From Here.\n")
for a=0,10,2 do
    io.write("Count: " .. a .. "\n")
    io.write("Do you want me to stop?[y/n]")
    cond = io.read()
    if cond == "y" then
        break
    elseif cond == "n" then
    else
        io.write("Please enter a valid input!!!\n")
    end
end

-- In python, we had a loop that directly caught the elements in a list or a string.
-- We did not need any range or index
-- These loops are called generic loops
-- Let's dive in then

local lst = {"a","b","c","d","e"}

for index, element in ipairs(lst) do
    print("The index of " .. element .. " is " .. index) -- ipairs is used to iterate through lists
end

local person = {name = "Rafy", age = 23, city = "Dhaka"} -- pairs is used to iterate through dictionaries

for key, value in pairs(person) do
    print("The key is: " .. key)
    print("And the value is: " .. value)
end

-- Can you relate?
-- In lua, direct loops through data structures are like running the loop in python where we used enumerate

local sentence = "Hellu, I am under the water, here too much raining wooooo!!"

for word in string.gmatch(sentence, "%S+") do
    print("The word is: " .. word)
end

-- WTF is "%S+"?
-- Is there other shits like this? 
-- Check Patterns.Lua
-- You will for sure find your answer.


-- The format is for a = Start, End, Steps