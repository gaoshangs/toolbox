public class ToStr{

    public static void main(String[] args){
        Demo d1 = new Demo(); 
        Demo d2 = new Demo(); 
        Demo d3 = d2;
        d1.test();
        System.out.println(d1.toString());
        System.out.println(d2.toString());
        System.out.println(d3.toString());
        System.out.println("d1.hashCode="+d1.hashCode());
        System.out.println("d2.hashCode="+d2.hashCode());
        System.out.println("d3.hashCode="+d3.hashCode());
        System.out.println(d1.equals(d2));
        System.out.println(d2.equals(d3));
    }
}

class Demo{
    public void test(){
        System.out.println("test function"); 
    }
}
