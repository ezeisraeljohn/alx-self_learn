#!/usr/bin/python3
def uppercase(string):
    for letter in string:
        ending = "" if not(letter == string[-1]) else "\n"
        if ord(letter) >= 97 and ord(letter) <= 122:
           print(chr(ord(letter)-32), end=ending)
        else:
            print(letter, end=ending)

