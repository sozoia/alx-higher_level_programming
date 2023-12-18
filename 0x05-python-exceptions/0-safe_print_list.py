#!/usr/bin/python3

def safe_print_list(my_list=[], x=0):

    i = 0

    while True:
        try:
            if x > i:
                print(my_list[i], end="")
                i += 1
            else:
                print()
                break
        except (IndexError):
            print()
            break

    return i
    


my_list = [1, 2, 3, 4, 5]

nb_print = safe_print_list(my_list, 2)
print("nb_print: {:d}".format(nb_print))
nb_print = safe_print_list(my_list, len(my_list))
print("nb_print: {:d}".format(nb_print))
nb_print = safe_print_list(my_list, len(my_list) + 2)
print("nb_print: {:d}".format(nb_print))

