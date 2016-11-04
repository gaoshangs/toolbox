import javax.swing.*;

public class SetButton{
    public static void main(String args[]){
        JFrame mw = new JFrame("my window"); 
        mw.setSize(250, 200);
        JButton btn = new JButton("my button");
        mw.getContentPane().add(btn);
        mw.setVisible(true);
    }
}
