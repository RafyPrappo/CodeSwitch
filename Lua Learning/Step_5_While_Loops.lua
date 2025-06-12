local count = 0  -- Optional but clean to declare as local

while count <= 10 do
    io.write("Do you want me to stop? [y/n]: ")
    local cond = io.read()

    if cond == "y" then
        break
    elseif cond == "n" then
        print("Count: " .. count)
        count = count + 1
    else
        print("Please enter a valid input")
    end
end


-- Something to notice here that I used io.wript() instead of print(). 
-- Change the io.write to print an see what happens.
-- The print() command causes the code to print and then jump to another line like using '\n'
-- While io.write() makes it stay in the same line.
-- equivalent to pythons input("Enter name: ") command
-- BUT in some terminals like windows and vs code, this can sometimes cause input to appear misaligned or delayed especially on the first loop or when inputs happen quickly after each other.
-- I faced the same issue when I tried to use print(), in the first loop, it was not taking input.