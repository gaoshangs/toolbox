import java.io.*;

public class FileWriterDemo{
    public static void main(String args[]){
        try{
            FileWriter a = new FileWriter("writer.txt");
            for(int i = 32;i<127;i++){
                a.write(i); 
            }
            a.close();
        }catch(IOException e){
            System.out.println("出错了！"+e); 
        } 
    }
}
