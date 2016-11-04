public class Force{
    public static void main(String[] args){
        Point p = new Point(); 
        p.setX(123);
        p.setY(456);
        System.out.println((p.getX() instanceof Object));
        System.out.println((p.getX() instanceof Integer));
    }
}

class Point{
   Object x;
   Object y;
   public void setX(Object x){
        this.x = x;
   }

   public void setY(Object y){
        this.y = y; 
   }

   public Object getX(){
        return this.x; 
   }

   public Object getY(){
        return this.y; 
   }
}
