public class anonymity{
    public static void main(String[] args){
       A a = new A(); 
    }
}

class A{
    public A(){
        new B(this).print(); //匿名对象
    }

    public void print(){
        System.out.println("Hello From A"); 
    }
}

class B{
    A a;
    public B(A a){
        this.a = a;
    }
    public void print(){
        a.print();     
        System.out.println("Hello From B");
    }
}
