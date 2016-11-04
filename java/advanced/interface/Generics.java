public class Generics{
    public static void main(String[] args){
        Pointer<Integer, Integer> p1 = new Pointer<Integer, Integer>(); 
        p1.setX(123);
        p1.setY(456);
        int x = p1.getX();
        int y = p1.getY();
        System.out.println("This point is :x="+x+",y="+y);

        Pointer<String, Double> p2 = new Pointer<String, Double>();
        p2.setX("东经");
        p2.setY(23.23);
        System.out.println(p2.getX()+":"+p2.getY());
    }
}

class Pointer<T1, T2>{
    T1 x;
    T2 y;

    public void setX(T1 x){
        this.x = x; 
    }

    public T1 getX(){
        return this.x; 
    }

    public void setY(T2 y){
        this.y = y; 
    }

    public T2 getY(){
        return this.y; 
    }
}
