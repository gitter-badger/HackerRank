#!/usr/bin/py
"""
def lonely_integer(arr):
	d = {}
	for i in range(len(arr)):
		d[arr[i]] = d.get(arr[i], 0) + 1

	for item in d.iteritems():
		if item[1] == 1:
			return item[0]

if __name__ is '__main__':
	n = int(raw_input())
	arr = map(int, raw_input().strip().split(' '))
	print lonely_integer(arr)

"""

def lonely_integer(arr):
	res = 0
	for i in range(len(arr)):
		res = res ^ arr[i]
	return res


if __name__ == '__main__':
	array_size = int(raw_input())
	arr = map(int, raw_input().strip().split(' '))
	print lonely_integer(arr)

