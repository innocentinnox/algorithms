def binary_search(list, target):
    start, end = 0, len(list) - 1
    while(start <= end):
        # mid = (start + end) // 2
        mid = start + (end-start) // 2 # Prevent overflow
        if list[mid] == target:
            return mid
        elif mid < target:
            start = mid + 2
        else:
            end = mid - 1
    return -1

list1 = [10,20,30,40,50,60,70,80,90,100]
find = int(input("Enter number to search: "))
print(f"Index of {find} is: ", binary_search(list1, find));










# left = 2_000_000_000;
# right = 2_100_000_000;

# print((left+(right-left)/2))


