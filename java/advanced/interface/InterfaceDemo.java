import static java.lang.System.*;
public class InterfaceDemo{
    public static void main(String[] args){
        Segment segment = new Segment(); 
        segment.writeData("aaa");
        out.println(segment.readData());
        segment.test();

        out.println("-------");
        //out.println(obj.doFix());//SataHdd没有这个变量
        SataHdd obj = new Sumsang(); 
        obj.writeData("aaa");
        out.println(obj.readData());
    }    
}

interface SataHdd{
    public void writeData(String data);
    public String readData();
}

interface FixHdd{
    public boolean doFix();
}

class Segment extends Common implements SataHdd,FixHdd{
    public void writeData(String data){
        out.println("Segment write someting"); 
    }

    public String readData(){
        return "Segment read something"; 
    }

    public boolean doFix(){
        return true; 
    }
}

class Sumsang implements SataHdd{
    public void writeData(String data){
        out.println("Sumsang write someting"); 
    }

    public String readData(){
        return "Sumsang read something"; 
    }
}

class Common{
    public void test(){
        out.println("Common test func"); 
    }
}

