import random

def create_and_fill_array(size):
    array = [random.randint(1, 9)] + [random.randint(0, 9) for _ in range(size - 1)]
    return array

def add_arrays(array1, array2):
    result = []
    n = 0
    size1, size2 = len(array1), len(array2)
    max_size = max(size1, size2)
    for i in range(max_size):
        sum = n
        if i < size1:
            sum += array1[size1 - 1 - i]
        if i < size2:
            sum += array2[size2 - 1 - i]
        result.append(sum % 10)
        n = sum // 10
    if n:
        result.append(n)
    return result[::-1]

size1 = int(input("Введіть розмір першого масиву: "))
size2 = int(input("Введіть розмір другого масиву: "))
array1 = create_and_fill_array(size1)
array2 = create_and_fill_array(size2)
array3 = add_arrays(array1, array2)
print("Перший масив:", array1)
print("Другий масив:", array2)
print("Третій масив:", array3)