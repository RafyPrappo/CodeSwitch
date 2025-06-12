function Main()

    print("Please enter your name: ")
    local name = io.read()

    print("Please enter your age: ")
    local age = tonumber(io.read()) -- tonumber() is equivalent to int() in python

    print("Hello " .. name .. " You are " .. age .. " years old.")

    --The Branching Part Begins Here
    print("Are you doing well?[y/n]")

    local cond = io.read()

    if cond == "y" then
        print("Great! May god always keeps you happy " .. name .. ".")

    elseif cond == "n" then
        print("Don't worry " .. name .. " Allah is always with you.")
    else
        Main()

    end
end

Main()

-- To introduce recursion, I had to use a function here. We will continue function in another file. For now, just remember the below is the basic syntax of functions in lua.

function Function_name(parameters)

    -- Your coding logics


end