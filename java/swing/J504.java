import java.applet.*;
import javax.swing.*;
class MyPanel extends JPanel{
    JButton button1,button2;
    JLabel Label;
    MyPanel(String s1,String s2,String s3){
        //Panel对象被初始化为有两个按钮和一个文本框
        button1=new JButton(s1);button2=new JButton(s2);
        Label=new JLabel(s3);
        add(button1);add(button2);add(Label);
    }
}
public class J504 extends Applet{
    MyPanel panel1,panel2;
    JButton Button;
    public void init(){
        panel1=new MyPanel("确定","取消","标签，我们在面板1中");
        panel2=new MyPanel("确定","取消","标签，我们在面板2中");
        Button=new JButton("我是不在面板中的按钮");
        add(panel1);add(panel2);add(Button);
        setSize(300,200);
    }
    public static void main(String args[]){
        init(); 
    }
}
