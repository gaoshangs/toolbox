class Animal(object):
    def run(self):
        print('Animal is runing...')

    def run_twice(self):
        self.run()

class Dog(Animal):
    def run(self):
        print('Dog is running...')

class Cat(Animal):
    def run(self):
        print('Cat is running...')

    def eat(self):
        print('Cat eat fish')

def run_twice(animal):
    animal.run()

dog = Dog()
cat = Cat()

dog.run_twice()
cat.run_twice()

run_twice(dog)
run_twice(cat)
