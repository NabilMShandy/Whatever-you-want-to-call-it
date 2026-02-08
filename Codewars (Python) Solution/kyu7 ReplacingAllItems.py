def replace_all(obj, find, replace):
    empty = []
    if type(obj) == list:
        for i in range(len(obj)):
            if obj[i] == find:
                empty.append(replace)
            else:
                empty.append(obj[i])
        return empty
    else:
        return str(obj).replace(find, replace)


print(replace_all([1, 2, 3, 4, 4, 4], 2, 4))

# Write function replaceAll (Python: replace_all) that will replace all occurrences of an item with another.

# Python / JavaScript: The function has to work for strings and lists.

# Example: replaceAll [1,2,2] 1 2 -> in list [1,2,2] we replace 1 with 2 to get new list [2,2,2]

# replaceAll(replaceAll(array: [1,2,2], old: 1, new: 2) // [2,2,2]