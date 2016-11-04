import java.io.*; 
public class FileWriterDemo{
    public static void main(String args[]) throws IOException{
        System.out.println("输入要添加的字符串");
        BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
        String addStr = in.readLine();
        FileWriter writer = new FileWriter("writer.txt", true);
        writer.write(addStr);
        writer.close();
    }
}
