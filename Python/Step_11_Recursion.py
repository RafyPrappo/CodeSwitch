# Down here is a function where we can print the counting table.
# But we didn't use any loop.
# This is a recursive function.
# A recursive function is a function that calls itself.
# As if you are Indian Baba Ramdev who can kiss his own ass using his yoga skills.

def counting_table(n, count=0):
    if count == 10:
        print(f"{n} x {count} = {n * count}")
        return
    print(f"{n} x {count} = {n * count}")
    counting_table(n, count + 1)

# Wait a minute.....
# If the function above is too complex to understand
# Let's make a function that prints a count down

def countdown(count=5):
    if count == 0:  # Breaking condition
        print(0)
        print("Go! Go! Go!")
        return
    print(count)
    countdown(count - 1)  # Next step

# Call functions
counting_table(9)
print("The countdown starts now..........")
countdown()
