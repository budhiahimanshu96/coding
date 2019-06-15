"""
Created on Thu May 30 17:25:32 2019

@author: Himanshu
"""

def func(x):
    a = x.split('.')
    ans = 0
    for i in range (0,len(a)):
        v = int(a[i])
        if v==0:
            v=0.01
        if i==0:
            ans += (v * 10000)
        elif i==1:
            ans += (v * 100)
        else: 
            ans += v
    return ans

def solution(l):
    l.sort(key=func)
    return l
    # Your code here
    
    
list = ["1.11", "2.0.0", "1.2", "2", "0.1", "1.2.1", "1.1.1", "2.0"]

print(solution(list))