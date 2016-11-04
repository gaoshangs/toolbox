import java.util.*;
class Demo{
    public static void main(String args[]){
        Hashtable <Object, Object> has=new Hashtable <Object, Object> ();
        has.put("one",new Integer(1));
        has.put("two",new Integer(2));
        has.put("three",new Integer(3));
        has.put("four",new Double(12.3));
        System.out.println(has.get("one"));
        /*
        Set s=has.keySet();
        for(Iterator<String> i=s.iterator();i.hasNext();){
            System.out.println(has.get(i.next()));
        }
        */
    }
}
