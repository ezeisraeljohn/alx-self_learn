#/usr/bin/python3

class Square:
    def __init__(self, size = 0, position=(0, 0)):
        self.__size = size
        self.__position = position

        @property
        def size(self):
            return self.__size
        
        @size.setter
        def size(self, size):
            if type(size) is not int:
                raise TypeError("size must be an Integer")
            if size < 0:
                raise ValueError("size must be >= 0")
            else:
                self.__size = size
            
        @property
        def position(self):
            return self.__position
        
        @position.setter
        def position(self, position):
            if len(position) != 2 or position[0] < 0 or position[1] < 0:
                raise TypeError("position must be a tuple of 2 positive integers")
            self.__position = position
        
    def area(self):
         return self.__size * self.__size
        
    def my_print(self):
        if self.__size == 0:
             print()
                
        for i in range(self.__size):
            for k in range(self.__position[0]):
                print(" ", end="")
            for j in range(self.__size):
                print("#", end="")
            print()