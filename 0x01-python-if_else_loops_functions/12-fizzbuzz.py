#!/usr/bin/python3
def fizzbuzz():
    for i in range(1, 101, 1):
        if i % 3 == 0:
            if i % 5 == 0:
                print("FizzBuzz", end=" ")
            else:
                print("Fizz", end=" ")
        elif i % 5 == 0:
            print("Buzz", end=" ")
        else:
            print(i, end=" " if i != 100 else "")
