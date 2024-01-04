#!/usr/bin/python3

''' class Rectangle '''


class Rectangle:
    '''class Rectangle'''
    
    def __init__(self, width=0, height=0):
        self.__width = width
        self.__height = height
    

    def width(self):
        return (self.__width)
    
    def width(self, value):
        if isinstance(value,int):
            if value <= 0:
                raise ValueError("width must be >= 0")
            self.__width = value
        else:
            raise TypeError("width must be an integer")
    
    def height(self):
        return (self.__height)

    def height(self, value):
        if isinstance(value,int):
            if value <= 0:
                raise ValueError("height must be >= 0")
            self.__height = value
        else:
            raise TypeError("height must be an integer")

