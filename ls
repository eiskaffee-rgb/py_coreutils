#!/usr/bin/python3
#last updated: january 13 2020
#written by moxniso and x0rpt
#ls, list the contents of a directory

import os, sys

def LS():
    try:
        path = sys.argv[1]
        
    except IndexError:
        path = os.getcwd()
    
    contents_of_path = os.listdir(path)
    for file in contents_of_path:
        print(file)
LS()
