
def main():
    name = input("Please enter your name: ")
    age = int(input("Please enter your age: "))

    print(f"Hello {name}! You are {age} years old")

    #The Branching Part starts here

    cond = input("Are you doing well?[y/n]: ")

    if cond == 'y':
        print(f"Great! May god always keep you happy.")
    elif cond == 'n':
        print(f"Don't worry {name}, Allah is always with you.")
    else:
        print("Please enter a valid input!!!")
        main()
main()