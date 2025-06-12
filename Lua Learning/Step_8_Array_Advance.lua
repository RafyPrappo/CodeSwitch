local arr = {3, 2, 5, 4, 1}

io.write("The array before sorting: ")

for a = 1, #arr do
    if a == #arr then
        io.write(arr[a])
    else
        io.write(arr[a] .. " ")
    end
end


for a = 1, #arr-1 do
    local min_index = a

    for b = a+1, #arr do
        if arr[b]<arr[min_index] then
            min_index = b
        end
    end
    local temp = arr[a]
    arr[a] = arr[min_index]
    arr[min_index] = temp

end

io.write("\nThe array after sorting: ")

for a = 1, #arr do
    if a == #arr then
        io.write(arr[a])
    else
        io.write(arr[a] .. " ")
    end
end


-- Selection sort is used in this program to sort the array
-- Practice by using Bubble sort
-- Or you can search digits by using Linear and Binary searches 