def factorize(str filename):
	# cdef int p = 0, q = 0, n = 0
	cdef str num, content

	with open(filename) as f:
		content = f.read()

	for num in content.splitlines():
		n = int(num)
		if n % 2 == 0:
			p, q = 2, n // 2
		else:
			for p in range(3, (n // 3) + 1, 2):
				if (n % p == 0):
					q = n // p
					break
			else:
				p, q = n, 1

		if (p > q):
			print("{:d}={:d}*{:d}".format(n, p, q))
		else:
			print("{:d}={:d}*{:d}".format(n, q, p))
	return (0)
