import java.io.*;

public class FileManage{
    public static void main(String args[]) throws IOException{
        String FilePath; 
        System.out.println("请输入一个绝对路径：");
        BufferedReader a = new BufferedReader(new InputStreamReader(System.in));
        FilePath = a.readLine();
        System.out.println(FilePath);
        File FileName = new File(FilePath);
        if(FileName.isDirectory()){
            File fileList[] = FileName.listFiles();
            for(File x:fileList){
                if(!x.isHidden()){
                    System.out.println(x+","); 
                }
            }
        }else{
            System.out.println("这是一个文件");
            System.out.println("绝对路径:"+FileName.getAbsolutePath());
            System.out.println(FileName.canRead() ? "可读" : "不可读");
            System.out.println(FileName.canWrite() ? "可写" : "不可写");
            System.out.println(FileName.isHidden() ? "隐藏文件" : "非隐藏文件");
        }
    }
} 
