class Animal(object):
    def run(self):
        print('Animal is runing...')

class Dog(Animal):
    def run(self):
        print('Dog is running...')

class Cat(Animal):
    def eat(self):
        print('Cat eat fish')
dog = Dog()
cat = Cat()
dog.run()
cat.run()
cat.eat()
print('dog is instance of Animal:', isinstance(dog, Animal))
print('cat is instance of Animal:', isinstance(cat, Animal))
