public class Construct{
    String name;
    int age;
    Construct(String name1, int age1){
        name = name1;
        age = age1;
        System.out.println("主人你好，我的名字叫"+name+"，今年我"+age+"岁了");
    }

    void hungry(){
        System.out.println("主人，"+name+"饿了^_^"); 
    }

    public static void main(String[] args){
        Construct dog1 = new Construct("小花", 2);
        dog1.hungry();
    }
}
