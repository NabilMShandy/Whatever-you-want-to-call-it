# queue first in first out

def myQueue():
    myList = []
    while(True):
        print("1. add queue")
        print("2. remove queue")
        print("3. quit")
        
        choose = int(input("choose between 1, 2 or 3: "))
        
        match choose:
            case 1:
                ask = int(input("input your queue: "))
                myList.append(ask)
                print(f"your queue: {myList}")
                continue
                
            case 2:
                try:
                    myList.pop(0)
                    print(myList)
                except IndexError:
                    print("list kosong!")
                    continue
                
            case 3:
                exit()
                
myQueue()