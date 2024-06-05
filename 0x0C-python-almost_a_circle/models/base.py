#!/usr/bin/python3

'''base class mod file'''


class Base():
    '''base class'''

    __nb_objects = 0

    def __init__(self, id=None):
        '''init method'''        
        if id is not None:
            self.id = id
        else:
            Base.__nb_objects += 1
            self.id = Base.__nb_objects
