public class StaticVar{
    static int i;
    int j;

    public static void main(String[] args){
        StaticVar sta1 = new StaticVar();
        sta1.i = 10;
        sta1.j = 20;
        System.out.println("i="+sta1.i+",j="+sta1.j);
        
        StaticVar sta2 = new StaticVar();
        System.out.println("i="+sta2.i+",j="+sta2.j);
    }
}
