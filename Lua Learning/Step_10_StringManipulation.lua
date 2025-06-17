-- 1. Declaring strings
local str1 = "Hello"
print("The length of the string 'str1' is: " .. #str1)  -- '#' is used to get length in Lua

local str2 = "World"  -- No fixed size needed for strings

-- 2. Taking input from user
io.write("Enter your first name: ")
local name = io.read()  -- Takes input until newline (whole line if no limit given)
print("The first name is: " .. name)

-- 3. Copying strings
-- Strings are immutable, so copying is just assigning
local haha = "haha"
local hihi = haha
print(hihi)

-- 4. Concatenating Strings
local hehe = "hehe"
local hoho = "hoho"

local hyhy = hehe .. hoho  -- We Use '..' to concatenate in Lua
print(hyhy)

hoho = hoho .. hehe
print(hoho)

-- 5. Comparing Strings
local comp_1 = "Rafy"
local comp_2 = "Radar"

if comp_1 == comp_2 then
    print("Same string")
elseif comp_1 < comp_2 then
    print(comp_1 .. " is less than " .. comp_2)
else
    print(comp_1 .. " is greater than " .. comp_2)
end

-- 6. Case-insensitive comparison (manual approach using string.lower)
local comp_3 = "Word"
local comp_4 = "worD"

if string.lower(comp_3) == string.lower(comp_4) then
    print("Same (case-insensitive)")
else
    print("Not same")
end

-- 7. Finding a substring
local sentence_ = "Hello, I am under the water, here too much raining wooooo"

if string.find(sentence_, "water") then
    print("Found")
else
    print("Not Found")
end

-- 8. Slicing strings (use string.sub)
local sliced = string.sub(sentence_, 11, 25)  -- Extract characters from index 11 to 25
print("Sliced string: " .. sliced)

-- 9. Bonus: Replacing strings (gsub), splitting, joining
local replaced = string.gsub(sentence_, "water", "lava")  -- Replace 'water' with 'lava'
print(replaced)

-- Splitting strings manually (Lua has no built-in split function)
function split(str, delimiter)
    local result = {}
    for match in (str .. delimiter):gmatch("(.-)" .. delimiter) do
        table.insert(result, match)
    end
    return result
end

local split_words = split(sentence_, " ")
for i, word in ipairs(split_words) do
    io.write(word)
    if i ~= #split_words then
        io.write(" ")
    end
end
print()

-- Joining words (manual approach)
function join(tbl, delimiter)
    local result = ""
    for i, word in ipairs(tbl) do
        result = result .. word
        if i ~= #tbl then
            result = result .. delimiter
        end
    end
    return result
end

local joined = join(split_words, " ")
print(joined)
