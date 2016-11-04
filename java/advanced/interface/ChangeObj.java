public class ChangeObj{

    public static void main(String[] args){
        A a = new A(); 
        B b = new B();
        a = b;
        System.out.println((a instanceof A));
        System.out.println((a instanceof B));
        B c = (B) a;
    }
}

class A{}
class B extends A{}
