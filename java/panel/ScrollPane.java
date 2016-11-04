import javax.swing.*;
import java.awt.*;
public class ScrollPane{
    public static void main(String args[]){
        MyWindow win = new MyWindow("Scroll pane test", 200, 100); 
        Container con = win.getContentPane();
        JTextArea textA = new JTextArea(20, 30);
        JScrollPane jsp = new JScrollPane(textA);
        con.add(jsp);
        win.setVisible(true);
    }
}

class MyWindow extends JFrame{
    MyWindow(String name, int w, int h){
        setTitle(name);
        setSize(w, h);
    }
}
