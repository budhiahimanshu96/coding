
import math

def answer(n):
    # your code here
    sieve = [True] * 25000
    sieve[0] = False
    sieve[1] = False
    for i in range(2, int(math.sqrt(25000)) + 1):
        pointer = i * 2
        while pointer < 25000:
            sieve[pointer] = False
            pointer += i
    
    primes = []
    for i in range(25000):
        if sieve[i] == True:
            primes.append(str(i))

    ans1 = ''.join(primes)
    return ans1[n:n+5]
        
print(answer(10000))