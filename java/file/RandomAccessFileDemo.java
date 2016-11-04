import java.io.*;

public class RandomAccessFileDemo{
    public static void main(String args[]) throws IOException{
        System.out.println("输入要添加的字符串");
        BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
        String addStr = in.readLine();
        RandomAccessFile myFile = new RandomAccessFile("random.txt","rw");
        myFile.seek(myFile.length());
        myFile.writeBytes(addStr+"\n");
        myFile.close();
    }
}
