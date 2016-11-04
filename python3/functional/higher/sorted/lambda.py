students = [('john', 'A', 15), ('jane', 'B', 12), ('dave', 'B', 10)]
print(sorted(students, key= lambda student:student[2], reverse=True))
