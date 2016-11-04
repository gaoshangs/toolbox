import java.io.*;

public class Copy{
    public static void main(String args[]) throws IOException{
        FileInputStream a  = new FileInputStream("dog.gif");
        FileOutputStream b = new FileOutputStream("dog_copy.gif");
        byte data[] = new byte[a.available()];
        a.read(data);
        b.write(data);
        a.close();
        b.close();
        System.out.println("复制gif图片完成");
    }
}
