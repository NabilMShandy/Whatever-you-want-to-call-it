def dig_pow(n, p):
    # use list comprehension to change integer into list, dont forge to change the n into str too
    splitN = [int(i) for i in str(n)]
    
    # Counting how many characters do n has 
    lenN = len(splitN)
    
    # variable to save the sequence value
    sums = 0
    
    for i in range(lenN):
        sums += splitN[i]**(p+i)
    
    # if sum = (n*(sum/nn)), return the sums//n else return -1
    if sums == (n*(sums//n)):
        return sums//n
    else:
        return -1

print(dig_pow(46288, 3))

# Some numbers have funny properties. For example:
#     89 --> 8¹ + 9² = 89 * 1
#     695 --> 6² + 9³ + 5⁴= 1390 = 695 * 2
#     46288 --> 4³ + 6⁴+ 2⁵ + 8⁶ + 8⁷ = 2360688 = 46288 * 51
    
#     Given two positive integers n and p, we want to find a positive integer k, if it exists, such that the sum of the digits of n raised to consecutive powers starting from p is equal to k * n.
    
#     In other words, writing the consecutive digits of n as a, b, c, d ..., is there an integer k such that :
#     (a**p + b**(p+1) + c**(p+2) + ...) = n * KeyboardInterrupt
    
#     If it is the case we will return k, if not return -1.

#     Note: n and p will always be strictly positive integers.