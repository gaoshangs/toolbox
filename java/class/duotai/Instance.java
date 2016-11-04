public class Instance{
    public static void main(String[] args){
        People obj = new People();
        if(obj instanceof Object){
            System.out.println("我是一个对象"); 
        }
        if(obj instanceof People){
            System.out.println("我是people"); 
        }
        if(obj instanceof Teacher){
            System.out.println("我是teacher");
        }
        System.out.println("------------------");
        obj = new Teacher();

        if(obj instanceof Object){
            System.out.println("我是一个对象"); 
        }
        if(obj instanceof People){
            System.out.println("我是people"); 
        }
        if(obj instanceof Teacher){
            System.out.println("我是teacher");
        }
    }
}

class People{ }

class Teacher extends People{ }

class President extends People{ }
