#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the sockMerchant function below.
def sockMerchant(n, ar):
    dic = {}
    count = 0
    for i in range(len(ar)):
        if ar[i] not in dic:
            dic[ar[i]] = 1
        else:
            dic[ar[i]] += 1

    for i in dic:
        count += int(dic[i]/2)
    
    return count

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')
    n = int(input())
    ar = list(map(int, input().rstrip().split()))

    result = sockMerchant(n, ar)
    fptr.write(str(result) + '\n')
    fptr.close()
