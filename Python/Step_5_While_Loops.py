count = 0

while count<=10:
    print(f"Count: {count}")
    cond = input("Do you want me to stop?[y/n]: ")
    
    if cond == 'y':
        break
    elif cond == 'n':
        continue
    else:
        print("Please enter a valin input!!!")
    
    count+=1