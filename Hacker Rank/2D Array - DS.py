#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the hourglassSum function below.
def hourglassSum(arr):
    hourGlassSum = 0
    for i in range(len(arr)):
        for j in range(len(arr)):
            try:
                temp = arr[i][j] + arr[i][j+1] + arr[i][j+2] + arr[i+1][j+1] + arr[i+2][j] + arr[i+2][j+1] + arr[i+2][j+2]
                if temp > hourGlassSum:
                    hourGlassSum = temp
                if i is 0 and j is 0:
                    hourGlassSum = temp
            except Exception as e:
                pass

    return hourGlassSum

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    arr = []

    for _ in range(6):
        arr.append(list(map(int, input().rstrip().split())))

    result = hourglassSum(arr)

    fptr.write(str(result) + '\n')

    fptr.close()
