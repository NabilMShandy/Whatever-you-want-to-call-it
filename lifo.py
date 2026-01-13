#stack lifo last in first out

def myStack():
    myList = []
    while(True):
        print("1. Add stack")
        print("2. Remove stack")
        print("3. Exit")
    
        ask = int(input("Choose: "))
        
        match ask:
            case 1:
                inputList = int(input("Input your list: "))
                myList.append(inputList)
                print(f"your list: {myList}")
            
            case 2:
                try:
                    myList.pop(-1)
                    print(f"your list: {myList}")
                except IndexError:
                    print("your list is empty!")
            
            case 3:
                exit()

myStack()