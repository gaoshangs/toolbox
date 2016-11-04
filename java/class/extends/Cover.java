public class Cover{
    public static void main(String[] args){
        People p1 = new People("人类", 23); 
        p1.say();
        Student stu1 = new Student("小花", 25, 98);
        stu1.say();
        stu1.say("哈哈");
    }
}

class People{
   String name;
   int age;
   People(String name, int age){
        this.name = name;
        this.age = age;
   }
   void say(){
        System.out.println("People, People name = "+name+", age="+age);
   }
}

class Student extends People{
    int score;
    Student(String name, int age, int score){
        super(name, age); 
        this.score = score;
    }
    void say(){
        System.out.println("Student, Student name = "+name+", age="+age); 
    }

    void say(String word){
        System.out.println("Student say "+word); 
    }
}
