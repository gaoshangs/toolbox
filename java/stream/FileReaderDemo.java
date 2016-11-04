import java.io.*;

public class FileReaderDemo{
    public static void main(String[] args)throws IOException{
        char a[] = new char[1000]; 
        FileReader b = new FileReader("demo.txt");
        int num = b.read(a);
        String str = new String(a, 0, num);
        System.out.println("读取的字符个数为:"+num);
        System.out.println("内容为:\n"+str);
    }
}
