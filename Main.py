
def Display(iArr):

    for y in range(0,len(iArr)):

        if iArr[y] % 11 == 0:
            print(iArr[y],end="\t")

    print()
            
def main():

    print("Enter Count of Elements")

    iSize = int(input())

    iElements = [0]*iSize

    if len(iElements) == 0:
        print("Unable to Allocate Memory")
        return

    print("Enter ",iSize," Elements")

    for x in range (0,iSize):
        iElements[x] = int(input())

    Display(iElements)

if __name__ == "__main__":
    main()