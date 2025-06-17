-- This is a global variable
x = 10

function demo_scope()
    -- This is a local variable
    local y = 5
    print("Inside function, x =", x)  -- Can access global variable
    print("Inside function, y =", y)  -- Can access local variable
end

demo_scope()

print("Outside function, x =", x)  -- Still accessible
-- print("Outside function, y =", y)  -- This will cause an error because y is local

-- Block scope in Lua
for i = 0, 2 do
    z = i * 2  -- This becomes global if we don't use 'local'
    print("Inside loop, z =", z)
end

print("Outside loop, z =", z)  -- Still accessible if declared without 'local'

-- Variable lifetime demo
function counter()
    local a = 0  -- a gets reset every time we call the function
    a = a + 1
    print("Counter value:", a)
end

counter()
counter()  -- Always prints 1 again, because 'a' doesn't persist

-- Global variable modification
function change_global()
    x = 99  -- Modifies the global variable directly
end

change_global()
print("After change, x =", x)
