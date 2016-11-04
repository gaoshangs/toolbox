public class RepeatLoad{
    void test(){
        System.out.println("method test!"); 
    } 

    void test(int a){
        System.out.println("a = "+a); 
    }

    void test(int a, int b){
        System.out.println("a+b="+(a+b)); 
    }

    void test(double a){
        System.out.println("double a="+a); 
    }

    public static void main(String[] args){
        RepeatLoad load = new RepeatLoad();
        load.test(); 
        load.test(10); 
        load.test(10, 11); 
        load.test(10.2); 
    }
}
