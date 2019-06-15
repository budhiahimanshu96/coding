"""
Created on Thu May 30 17:49:17 2019

@author: Himanshu
"""

def solution(x, y):
    a = 2
    b = x
    ans = 1
    i = a
    while i<=x:
        ans += i
        i+=1
        
    i = b
    j = 2
    while j<=y:
        ans += i
        i+=1
        j+=1
    return str(ans)
    # Your code here
    

print(solution(5,10))