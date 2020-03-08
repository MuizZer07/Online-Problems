#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the repeatedString function below.
def repeatedString(s, n):
    count = 0 
    count1 = 0

    nw = n % len(s)

    for i in range(len(s)):
        if s[i] == 'a':
            count+=1
            if nw > i:
                count1+=1

    print(nw, count, count1)
    count = (count * int(n/len(s))) + count1

    return count

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    s = input()

    n = int(input())

    result = repeatedString(s, n)

    fptr.write(str(result) + '\n')

    fptr.close()
