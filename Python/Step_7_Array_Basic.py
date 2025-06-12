# In Python we have lists, which are very easy to declare and use.
# Although Python also supports arrays (via libraries like array or numpy), 
# we'll focus on lists for now as they are more common and beginner-friendly.

lst = [1, 'Rafy', 1.5, False]  # Python lists can hold different types of data in the same list

# We can measure the length of a list using len()
print(f'The length of the list is {len(lst)}')

# Accessing elements by index
for a in range(len(lst)):
    print(f"{lst[a]} is at Index {a}")
    
# Indexing starts at 0
# lst[0] returns the first item, lst[1] the second, and so on
# So, lst[a] accesses each item based on the counter 'a'

print()# We can use an empty print for an extra enter or line gap. It can also be done by putting \n before the word 'Here' of the print command down below.
print('Here comes another type of for loop in Python:')

# Direct element iteration — no need for range() or indexing
for item in lst:
    print(item)

#Use the list above when you don't need to know the index.
