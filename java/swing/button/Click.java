import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

public class Click{
    public static void main(String args[]){
        ButtonDemo btn = new ButtonDemo(200, 100);
        btn.setVisible(true);
    }
}

class ButtonDemo extends JFrame implements ActionListener{
    public ButtonDemo(int w, int h){
        setSize(w, h);
        JButton btn1 = new JButton("RED"); 
        JButton btn2 = new JButton("GREEN"); 
        btn1.setForeground(Color.RED);
        btn2.setForeground(Color.GREEN);
        btn1.addActionListener(this);
        btn2.addActionListener(this);
        Container con = getContentPane();
        con.setLayout(new FlowLayout());
        con.setBackground(Color.BLUE);
        con.add(btn1);
        con.add(btn2);
    }

    public void actionPerformed(ActionEvent e){
        Container con = getContentPane();
        if(e.getActionCommand() == "RED"){
            con.setBackground(Color.RED);
        }else{
            con.setBackground(Color.GREEN); 
        }
    }
}
