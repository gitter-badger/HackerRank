def sum(a, b):
	return (a + b)
T = int(raw_input())
for _ in range(T):
	num1, num2 = map(int, raw_input().split(' '))
	print sum(num1, num2)
