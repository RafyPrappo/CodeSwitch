-- pattern --> What does it mean?

-- %a --> Any letter(a-z, A-Z)
-- %d --> Any digit(0-9)
-- %s --> Any whitespace (space, tab, newline)
-- %S --> Any non-whitespace("Hi There" ---> H,i,T,h,e,r,e)
-- %w --> Alphanumeric (letters + digits ---> "GTA5" ---> G,T,A,5)
-- %W --> Non-alphanumeric ("GTA5!" ---> !)
-- . --> Any character except newline ("abc!5 "---> a,b,c,!,5, " ")
-- + --> One or more repitions
-- * --> Zero or more repitions
-- ^ --> Start of string
-- $ --> End of sting

local sentence_ = "Banglar manush busty chaay"
print("=========================================")
print("Use of + and %S")
for word in string.gmatch(sentence_, "%S+") do
    print(word)
end
print("=========================================")


print("=========================================")
local sentence_2 = "11 maane egaro, 2 maane dui!"
print("Use of %d")
for word in string.gmatch(sentence_2, "%d") do
    print(word)
end --check the output, 11 did not come togather

--Now print it differently this time
print("This time with a +")
for word in string.gmatch(sentence_2, "%d+") do
    print(word)
end

print("=========================================")


print("=========================================")
print("Let's try %a")
for word in string.gmatch(sentence_, "%a") do
    io.write(word .. " ")
end
-- Do you know what will happen if you use %a+?
-- Try it youself XD
print("")
print("=========================================")

