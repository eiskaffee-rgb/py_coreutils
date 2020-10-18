#!/usr/bin/python3
#last updated: january 13 2020
#written by moxniso
#cp, the copying command

import os, sys, shutil

def CP():
	try:
		original = sys.argv[1]
		new = sys.argv[2]
		try:
			if not os.path.isfile(original):
				if not os.path.isdir(original):
					print("No such file or directory exists.")
					return
				else:
					shutil.copytree(original, new)
			else:
					shutil.copyfile(original, new)
		except FileExistsError:
			if os.path.isfile(new):
				warn = input("Are you sure you want to overwrite this file? (y or n): ")
				if warn == 'y':
					os.remove(new)
					CP()
				else:
					return
			elif os.path.isdir(new):
				warn = input("Are you sure you want to overwrite this directory? (y or n): ")
				if warn == 'y':
					shutil.rmtree(new)
					CP()
				else:
					return
	except IndexError:
		print("Not enough parameters.")
CP()
