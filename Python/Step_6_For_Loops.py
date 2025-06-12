for a in range(10):
    print(f"Count: {a}")
    cond = input('Do you want me to stop?[y/n]: ')
    if cond == 'y':
        break


print("Second Loop Counting Starts Here............")
for a in range(0, 10, 2):
    print(f"Count: {a}") 
    
# for the second loop, the format is
# for a[this gets increased in every loop] in range(start, end, steps):