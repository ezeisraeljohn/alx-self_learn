#!/usr/bin/python3
for number1 in range(0, 10):
    for number2 in range(0, 10):

        if number1 == number2:
            continue
        print(f"{str(number1)+str(number2)}, ", end="")
