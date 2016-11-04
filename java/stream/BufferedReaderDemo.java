import java.io.*;

class BufferedReaderDemo{
    public static void main(String args[]) throws IOException{
        String OneLine; 
        int count = 0;
        int len = 0;
        try{
            FileReader a = new FileReader("demo.txt"); 
            BufferedReader b = new BufferedReader(a);
            while((OneLine = b.readLine()) !=null ){
                count++; 
                len+= OneLine.length();
                System.out.println(OneLine);
            }
        System.out.println("字符总长度:"+len);
        }catch(IOException io){
            System.out.println("出错了！"+io); 
        }
    }
}
