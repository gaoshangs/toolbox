import javax.swing.*;
import java.awt.*;

public class MyPanel {
    JButton btn;
    public static void main(String args[]){
        MyWindow win = new MyWindow("Pannel测试", 300, 400);
        Container con = win.getContentPane();
        con.setBackground(Color.BLUE);
        con.setLayout(new FlowLayout());

        PanelDemo panel1 = new PanelDemo("确认", "取消", "标签，面板1");
        PanelDemo panel2 = new PanelDemo("确认", "取消", "标签，面板2");
        panel1.setBackground(Color.YELLOW);
        panel2.setBackground(Color.GREEN);

        JButton btn = new JButton("不在面板按钮");
        con.add(panel1);
        con.add(panel2);
        con.add(btn);
        win.setVisible(true);
    }
}

class PanelDemo extends JPanel{
    JButton btn1, btn2;
    JLabel lab1;
    PanelDemo(String s1, String s2, String s3){
        btn1 = new JButton(s1); 
        btn2 = new JButton(s2); 
        lab1 = new JLabel(s3);
        add(btn1);add(btn2);add(lab1);
    }
}

class MyWindow extends JFrame{
    public MyWindow(String name, int w, int h){
        setTitle(name);
        setSize(w, h);
    }
}
