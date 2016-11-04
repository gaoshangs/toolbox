from operator import itemgetter
students = [('john', 'A', 15), ('jane', 'B', 12),('cane', 'B', 12), ('dave', 'B', 10)]
print(sorted(students, key= itemgetter(2, 0)))
