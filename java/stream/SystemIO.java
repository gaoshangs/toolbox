import java.io.*;
public class SystemIO{
    public static void main(String args[]) throws IOException{
        byte a[] = new byte[128];
        System.out.println("请输入字符串");
        int count = System.in.read(a);
        System.out.println("输入的字符串是:\n");

        for(int i =0; i<count; i++){
            System.out.print((char)a[i]+"");
        }
        System.out.println("");

        for(int i =0; i<count-1; i++){
            System.out.print((char)a[i]+"");
        }
        System.out.println("");
        Class InClass = System.in.getClass();
        System.out.print("in所在类:"+InClass.toString());

        System.out.println("");
        Class OutClass = System.out.getClass();
        System.out.print("out所在类:"+OutClass.toString());
    }
}
