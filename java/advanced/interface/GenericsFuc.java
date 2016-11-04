public class GenericsFuc{
    public static <X1, X2> void say(X1 a, X2 b){
        System.out.println("say a = "+a+", b="+b); 
    }

    //使用通配符(?)避免泛型类型擦除
    public static void tongpei(Point<?,?> point){
        System.out.println("tongpei x= "+point.getX()+", y="+point.getY()); 
    }
    //由于未指定point 的泛型类型，所以point的类型自动向上转为Object 

    public static void cachu(Point point){
        System.out.println("cachu x= "+point.getX()+", y="+point.getY()); 
    }

    public static void main(String[] args){
        Point<Integer, String> p1 = new Point<Integer, String>();
        p1.setX(123);
        p1.setY("abc");
        cachu(p1);
        tongpei(p1);
        // p1.printPoint(p1.getX(), p1.getY());
        //say(p1.getX(), p1.getY());

    }
}

class Point<T1, T2>{
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

    //泛型方法
    public<V1, V2> void printPoint(V1 a, V2 b){ 
        System.out.println("a="+a+",b="+b);
    }
}
