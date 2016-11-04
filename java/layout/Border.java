import javax.swing.*;
import java.awt.*;
public class Border{
    public static void main(String args[]){
        JLabel lab1, lab2, lab3, lab4, lab5;
        JFrame mw = new JFrame("BorderLayout Show");
        mw.setSize(300, 200);
        Container con = mw.getContentPane();
        con.setLayout(new BorderLayout());
        lab1 = new JLabel("东标签");
        lab2 = new JLabel("南标签", JLabel.CENTER);
        lab3 = new JLabel("西标签", JLabel.CENTER);
        lab4 = new JLabel("北标签", JLabel.CENTER);
        lab5 = new JLabel("中标签");
        con.add(lab1, "East");
        con.add(lab2, "South");
        con.add(lab3, "West");
        con.add(lab4, "North");
        con.add(lab5, "Center");
        mw.setVisible(true);
    }
}
