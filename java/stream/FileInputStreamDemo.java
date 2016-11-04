import java.io.*;
public class FileInputStreamDemo{
    public static void main(String args[]){
        char ch;
        int data;
        try{
            FileInputStream a = new FileInputStream(FileDescriptor.in);
            FileOutputStream b = new FileOutputStream("FileInput.txt");
            System.out.println("请输入字符，以#号结束");
            while((ch = (char)a.read()) != '#'){
                b.write(ch); 
            }
            a.close();
            b.close();
            System.out.println();
            FileInputStream c = new FileInputStream("FileInput.txt");
            FileOutputStream d = new FileOutputStream(FileDescriptor.out);
            while(c.available()>0){
                data = c.read(); 
                d.write(data);
            }
            c.close();
            d.close();
        }catch(FileNotFoundException e){
            System.out.println("找不到文件!"); 
        }catch(IOException e){}
    }
}
