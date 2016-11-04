public class AbstractDemo{

    public static void main(String[] args){
        People obj = new Child(); 
        obj.eat();
        obj = new Teacher();
        obj.eat();
    }
}

abstract class People{
   abstract public void eat();
//   abstract public void say();
}

class Child extends People{
    public void eat(){
        System.out.println("Child eat something"); 
    }
}

class Teacher extends People{
    public void eat(){
        System.out.println("Teacher eat something"); 
    }
}
