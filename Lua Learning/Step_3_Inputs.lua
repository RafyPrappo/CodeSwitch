
print("Please enter your name: ")
local name = io.read()

print("Please enter your age: ")
local age = tonumber(io.read()) -- tonumber() is equivalent to int() in python

print("Hello " .. name .. " You are " .. age .. " years old.")
print("Are you doing well?")
