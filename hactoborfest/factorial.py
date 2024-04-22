from distutils.log import fatal
from pprint import pprint


def factorial(n):
    if n==0:
        return 1
    return n*factorial(n-1)
n=int(input())

print(factorial(n))