from random import randint

def create_and_fill_array(size):
    array = [randint(1, 9)] + [randint(0, 9) for _ in range(size - 1)]
    return array

def compare_arrays(array1, array2):
    size1, size2 = len(array1), len(array2)

    if size1 > size2:
        return 1
    elif size1 < size2:
        return -1
    else:
        if array1[0] > array2[0]:
            return 1
        elif array1[0] < array2[0]:
            return -1
    return 0

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

def subtract_arrays(array1, array2):
    size1, size2 = len(array1), len(array2)
    
    if compare_arrays(array1, array2) == -1:
        array1 = [0] * (size2 - size1) + array1
    elif compare_arrays(array1, array2) == 1:
        array2 = [0] * (size1 - size2) + array2

    result_size = max(size1, size2)
    result = [0] * result_size
    m = 0

    for i in range(result_size):
        digit1 = array1[result_size - 1 - i]
        digit2 = array2[result_size - 1 - i]
        diff = digit1 - digit2 - m
        if diff < 0:
            diff += 10
            m = 1
        else:
            m = 0

        result[result_size - 1 - i] = diff

    while len(result) > 1 and result[0] == 0:
        result.pop(0)

    return result

size1 = int(input("Введіть розмір першого масиву: "))
size2 = int(input("Введіть розмір другого масиву: "))

array1 = create_and_fill_array(size1)
array2 = create_and_fill_array(size2)

question = int(input("Введіть 1 для додавання, 2 для віднімання: "))
if question == 1:
    array3 = add_arrays(array1, array2)
elif question == 2:
    comparison = compare_arrays(array1, array2)
    if comparison == 1:
        array3 = subtract_arrays(array1, array2)
    elif comparison == -1:
        array3 = subtract_arrays(array2, array1)
else:
    print("Невірний вибір")

print("Перший масив:", array1)
print("Другий масив:", array2)
print("Третій масив:", array3)