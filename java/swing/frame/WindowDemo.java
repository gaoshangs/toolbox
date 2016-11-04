import javax.swing.*;
import java.awt.*;

public class WindowDemo{
    public static void main(String args[]){
        JButton btn1 = new JButton("button 1");
        MyWindow win1 = new MyWindow("window 1", btn1, Color.BLUE, 200, 200);
        win1.setVisible(true);
    }
}

class MyWindow extends JFrame{
    public MyWindow(String name, JButton btn, Color c, int w, int h){
        super(); 
        setTitle(name);
        setBackground(c);
        setSize(w, h);
        Container con = getContentPane();
        con.add(btn);
    }
}

