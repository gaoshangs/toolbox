import types
def fn():
    pass
print("type('abc') == str:", type('abc') == str)
print("type(123) == int:", type(123) == int)
print("type(fn) == types.FunctionType", type(fn) == types.FunctionType)
print("type(abs) == types.BuiltinFunctionType:")
print(type(abs) == types.BuiltinFunctionType)
print("type(lambda x: x) == types.LambdaType:")
print(type(lambda x: x) == types.LambdaType)
print("type((x for x in range(10))) == types.GeneratorType:")
print(type((x for x in range(10))) == types.GeneratorType)
