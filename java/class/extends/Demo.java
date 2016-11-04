public class Demo{
   public static void main(String[] args){
       // People p1 = new People("小明", 54, 17.0);
       // p1.say();
       Teacher teach = new Teacher("小明", 54, 17.0);
       teach.setData("黄冈", "数学", 23);
       teach.say();
   } 
}

class People{
    String name;
    int age;
    double height;
    People(String name, int age, double height){
        this.name = name; 
        this.age = age; 
        this.height = height; 
        System.out.println("This is People construct");
    }

    void say(){
        System.out.println("我叫"+name+",今年"+age+"岁,身高"+height);  
    }
}

class Teacher extends People{
    String school;
    String subject;
    int seniority;

    Teacher(String name, int age, double height){
        super(name, age, height); 
        System.out.println("This is Teacher construct");
    }

    void setData( String school, String subject, int seniority){
        this.school = school; 
        this.subject= subject; 
        this.seniority = seniority; 
    } 

    void say(){
        System.out.println("我叫"+name+",今年"+age+"岁,身高"+height); 
        System.out.println("学校"+school+",科目"+subject+"工龄"+seniority); 
    }
}
