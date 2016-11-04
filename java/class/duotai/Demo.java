public class Demo{
    public static void main(String[] args){
        Master ma = new Master();
        ma.feed(new Cat(), new Fish());
        ma.feed(new Dog(), new Gutou());
    }    
}

class Master{
    public void feed(Animal animal, Food food){
        animal.eat(food);
    }
}

class Animal{
    public void eat(Food food){
       System.out.println("动物吃"+food.getFood()); 
    }
}

class Food{
    public String getFood(){
        return "食物";
    }
}


class Cat extends Animal{
    public void eat(Food food){
        System.out.println("猫吃"+food.getFood()); 
    }
}

class Dog extends Animal{
    public void eat(Food food){
        System.out.println("狗吃"+food.getFood()); 
    }
}

class Fish extends Food{
    public String getFood(){
        return "鱼";
    }
}

class Gutou extends Food{
    public String getFood(){
        return "骨头";
    }
}
