# 1. Declaring strings
str1 = "Hello"
print(f"The length of the string 'str1' is: {len(str1)}")  # len() gives the length of the string

str2 = "World"  # In Python, strings don't need a fixed length

# 2. Taking input from user
name = input("Enter your first name: ")  # input() automatically reads a full line
print(f"The first name is: {name}")

# 3. Copying Strings
haha = "haha"
hihi = haha  # Simply assigning one to another is enough in Python (strings are immutable)

print(hihi)

# 4. Concatenating Strings
hehe = "hehe"
hoho = "hoho"

hyhy = hehe + hoho  # Concatenation using + operator
print(hyhy)

# More concatenation
hoho += hehe  # Equivalent to hoho = hoho + hehe
print(hoho)

# 5. Comparing Strings
comp_1 = "Rafy"
comp_2 = "Radar"

# Direct comparison with ==
if comp_1 == comp_2:
    print("Same string")
elif comp_1 < comp_2:
    print(f"{comp_1} is less than {comp_2}")  # Lexicographical comparison (dictionary order)
elif comp_1 > comp_2:
    print(f"{comp_1} is greater than {comp_2}")
else:
    print("Not same string")

# 6. Case-insensitive comparison
comp_3 = "Word"
comp_4 = "worD"

if comp_3.lower() == comp_4.lower():
    print("Same (case-insensitive)")
else:
    print("Not Same")

# 7. Finding a substring
sentence_ = "Hello, I am under the water, here too much raining wooooo"
if "water" in sentence_:
    print("Found")
else:
    print("Not Found")

# 8. Slicing strings
slice_ = sentence_[10:25]  # Just like array slicing
print(f"Sliced string: {slice_}")

# 9. Bonus: Replace, Split, Join
replaced = sentence_.replace("water", "lava")  # Replace part of string
print(replaced)

split_words = sentence_.split(" ")  # Split into list by space
print(split_words)

joined_back = " ".join(split_words)  # Join back with spaces
print(joined_back)
