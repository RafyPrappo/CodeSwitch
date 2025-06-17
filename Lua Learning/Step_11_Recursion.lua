-- Down here is a function where we can print the counting table.
-- But we didn't use any loop.
-- This is a recursive function.
-- A recursive function is a function that calls itself.
-- As if you are Indian Baba Ramdev who can kiss his own ass using his yoga skills.

function countingTable(n, count)
    count = count or 0
    if count == 10 then
        print(n .. " x " .. count .. " = " .. (n * count))
        return
    end
    print(n .. " x " .. count .. " = " .. (n * count))
    countingTable(n, count + 1)
end

-- Wait a minute.....
-- If the function above is too complex to understand
-- Let's make a function that prints a count down

function countdown(count)
    count = count or 5
    if count == 0 then  -- Breaking condition
        print(0)
        print("Go! Go! Go!")
        return
    end
    print(count)
    countdown(count - 1)  -- Next step
end

-- Call functions
countingTable(9)
print("The countdown starts now..........")
countdown()
