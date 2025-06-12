# Now using my loop and array basics, I will try to sort a list using Selection sort.

lst = [1,5,3,2,4]

print(f"The unsorted list is: {lst}")

for index_ in range(len(lst)-1):
    index_of_the_minimum_digit = index_
    for a in range(index_,len(lst)): #Notice: I started the second loop from the next index of the first loop, as We have already processed the previous index by picking it in the first loop.
        if lst[a]<lst[index_of_the_minimum_digit]:
            index_of_the_minimum_digit = a
    
    # temp = lst[a]
    # lst[a] = lst[index_of_the_minimum_digit]
    # lst[index_of_the_minimum_digit] = temp
    
    #The method above is a must to learn and understand for other langs. But we have an easier way in python.
    
    lst[index_], lst[index_of_the_minimum_digit] = lst[index_of_the_minimum_digit],lst[index_] #Criss-Cross

print("The sorted list is: ", lst)
    
    