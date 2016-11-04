public class StaticInner{
    public static void main(String[] args){
       Outer.Inner inner = new Outer.Inner(); 
       inner.doStuff();
    }
}

class Outer{
    private static int size;
    static class Inner{
        public void doStuff(){
            size++; 
            System.out.println("Outer.size="+size);
        } 
    }
}
