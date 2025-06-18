# 1. Creating a dictionary
person = {"name": "Rafy", "age": 24,"city": "Dhaka"} #The syntax is "DictionaryName = {"key": value}"
print("1. Full Dictionary:", person)

# 2. Accessing values
print("2. Name:", person["name"]) # We grab the key to call the value. The syntax is "DictionaryName["key"]"
print("2. City using get():", person.get("city")) # Or we can use get()

# 3. Adding and updating values
person["age"] = 25  # Update existing
person["job"] = "Developer"  # Using the update syntax for a key that does not yet exist will make a new one.
print("3. After adding/updating:", person)

# 4. Deleting items
del person["city"]  # Delete a key
person.pop("job")  # Pop another key
print("4. After deletion:", person)

# 5. Looping through dictionary
print("5. Looping through keys:")
for key in person:
    print(key)

print("5. Looping through key-value pairs:")
for key, value in person.items():
    print(f"{key} -> {value}")

# 6. Dictionary functions
print("6. Keys:", list(person.keys()))
print("6. Values:", list(person.values()))
print("6. Items:", list(person.items()))
#Don't worry, I have not showed list() yet. It's okay to not understand a few things.

# 7. Nested Dictionary
students = {
    "101": {"name": "Rafy", "marks": 90},
    "102": {"name": "Tamim", "marks": 85}
}
print("7. Nested Dictionary Example:", students["101"]["name"])

# Bonus: Example to practice
inventory = {}
inventory["apple"] = 5
inventory["banana"] = 10
print("Bonus. Inventory:", inventory)

inventory["apple"] += 3
print(f"Now you have {inventory['apple']} apples.")
