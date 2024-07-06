item_list = [2, 17, 19, 23, 45, 99]

def binarySearch(item_list, item):
    left = 0
    right = len(item_list)-1
    while(left <= right):
        mid = (left+right)//2
        guess = item_list[mid]
        if(guess == item):
            return mid
        elif(guess < item):
            left = mid+1
        else:
            right = mid-1
    return -1

value = int(input('Enter Value to be searched : '))
index = binarySearch(item_list, value)
print('index at ', index)