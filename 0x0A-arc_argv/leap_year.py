year = int(input("enter the year to check: "))

if year % 4 == 0:
    if year % 100 == 0:
        if year % 400 == 0:
            print("a leap year")
        else:
            print("not a leap year")
    else:
        print("a leap year")

    
else:
    print("not a leap year") 