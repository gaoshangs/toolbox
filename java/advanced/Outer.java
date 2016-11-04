public class Outer{
    private int size;
    class Inner{
        private int counter =10; 
        public void doStuff(){
            size++; 
        }
    }

    public static void main(String[] args){
        Outer outer = new Outer();
        Inner inner = outer.new Inner();
        inner.doStuff();
        System.out.println("size="+outer.size);
        System.out.println("counter="+inner.counter);
    }
}
