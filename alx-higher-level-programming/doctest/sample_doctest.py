#!/usr/bin/python3

"""
example usage

>>> x(2, 5)
10

"""

def x(a, b):
	""" Returns a * b

	work with numbers:
	>>> x(2, 4)
	8

	Doesn't work with undefined variables:

	>>> x(a, 3)
	Traceback (most recent call last):
	...
	NameError: name 'a' is not defined

	Works with string:
	>>> x('a', 3)
	'aaa'

	"""
	return a * b


