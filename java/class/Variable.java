public class Variable{
    public static String name = "小花";
    public static int total; 

    public int a;

    {
        int b = 2; 
    }

    public Variable(){
        total++; 
    }

    public void test1(){
        int x = 3;
        if(x == 3){
            int y = 4; 
        }
        //System.out.println("name="+name+"\na="+a+",\nb="+b+",\nx="+x);
        name = "小明";
        System.out.println("name="+name+"\na="+a+",\nx="+x);
    }

    public static void test2(){
        System.out.println("total="+Variable.total); 
    }

    public static void main(String[] args){
        Variable var1 = new Variable();
        var1.test2();
        Variable var2 = new Variable();
        var2.test2();
       // System.out.println(Variable.name);
       // Variable var = new Variable();
       // var.test1();
       // System.out.println("name="+Variable.name);
    }
}
