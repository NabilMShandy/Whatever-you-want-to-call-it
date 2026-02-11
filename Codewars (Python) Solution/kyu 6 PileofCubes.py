def find_nb(m):
    counter = 0
    n = 0
    num = 1
    while n < m:
        n += (num**3)
        counter += 1
        num += 1
    
    if n == m:
        return counter
    else:
        return -1