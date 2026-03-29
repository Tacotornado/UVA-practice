

def FindLDP(n):
    n = abs(n) # handling negative numbers, this was the bug
    primes = set()
    # find largest prime divisor
    ldp = -1
    
    if n == 1 or n == 2:
        ldp = -1
        return ldp
    
    # removing 2 factors
    while n % 2 == 0:
        ldp = 2
        n //= 2
        primes.add(2)
        
    #removing factors of 3
    while n % 3 == 0:
        ldp = 3
        n //= 3
        primes.add(3)
        
    i = 5
    while i * i <= n:
        while n % i == 0:
            ldp = i
            n //= i
            primes.add(i)
        while n % (i + 2) == 0:
            ldp = i + 2
            n //= (i + 2)
            primes.add(i + 2)
        i += 6
        
    if n > 4:
        ldp = n
        primes.add(n)
    
    if len(primes) == 1: # checking if more than 1 prime divisor exists
        ldp = -1
    return ldp
        

def main():
    #input is a set of lines of ints, terminating line is a single 0
    line = int(input())
    while(line != 0):
        print(FindLDP(line))
        
        line = int(input())
        
main()