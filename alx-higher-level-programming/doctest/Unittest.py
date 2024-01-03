"""Unittest Module
    this module conducts several test on function that adds two numbers
"""

import unittest
import Add_number

class TestAddNumbers(unittest.TestCase):
    """ Class that test contains different method that tests the add_number 
        function

        Methods:
            test_add_number: This function conducts test for several numbers
    
    """
    def test_number(self):
        # test if add_number produces 6
        self.assertAlmostEqual(Add_number.add_number(2, 4), 6)
        self.assertAlmostEqual(Add_number.add_number(1, -1), 0)
        self.assertAlmostEqual(Add_number.add_number(3, 4), 3)
    
    def test_type_error(self):
        self.assertRaises(TypeError, Add_number.add_number, "2",4)
