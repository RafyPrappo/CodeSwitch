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

-- The format is for a = Start, End, Steps