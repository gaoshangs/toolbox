L = [('Bob', 75), ('Adam', 92), ('Bart', 66), ('Cart', 66), ('Lisa', 88)]
def by_name(t):
    return t[0].lower()
def by_score(t):
    return t[1]
names = sorted(L, key=by_name, reverse=True)
scores = sorted(names, key=by_score, reverse=True)
print(scores)
