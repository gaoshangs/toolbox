public class Duotai{
    public static void main(String[] args){
        Animal animal = new Animal(); 
        animal.say();
        animal = new Dog();
        animal.say();
        animal = new Cat();
        animal.say();
        Cat cat = new Cat();
        cat.eat();
    }
}

class Animal{
    public void say(){
        System.out.println("Animal say~"); 
    }
}

class Dog extends Animal{
    public void say(){
        System.out.println("Dog say~"); 
    }
}

class Cat extends Animal{
    public void say(){
        System.out.println("Cat say~"); 
    }

    public void eat(){
        System.out.println("Cat eat~");
    }
}
