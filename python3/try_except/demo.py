try:
    print('try...')
    #r = 10 / 0
    r = 10 / int('12')  
    print('result:', r)
except ValueError as e:
    print('ValueError:', e)
except ZeroDivisionError as e:
    print('ZeroDivisionError:', e)
else:
    print(r)
finally:
    print('finally...')
print('END')
