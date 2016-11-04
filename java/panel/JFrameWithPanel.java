import java.awt.*;  
import javax.swing.*;  

public class JFrameWithPanel {  

    public static void main(String[] args) {  

        JFrame frame = new JFrame("Frame With Panel");  
        Container contentPane = frame.getContentPane();  
        contentPane.setBackground(Color.BLUE); // 将JFrame实例背景设置为蓝绿色  
        contentPane.setLayout(new FlowLayout());//采用FlowLayout布局
        JPanel panel1 = new JPanel(); // 创建一个JPanel的实例  
        JPanel panel2 = new JPanel(); // 创建一个JPanel的实例  

        JButton btn1 = new JButton("Panel 1 btn1");  
        JButton btn2 = new JButton("Panel 1 btn2");  
        panel1.add(btn1); // 将JButton实例添加到JPanel中  
        panel1.add(btn2);
        panel1.setBackground(Color.YELLOW); // 将JPanel的实例背景设置为黄色  
        //panel1.setSize(300,200);

        JButton btn3 = new JButton("Panel 2 btn3");  
        JButton btn4 = new JButton("Panel 2 btn4");  
        panel2.add(btn3); // 将JButton实例添加到JPanel中  
        panel2.add(btn4);
        panel2.setBackground(Color.GREEN);
        //panel2.setSize(300,300);

        JButton btn = new JButton("面板外");

        contentPane.add(panel1); 
        contentPane.add(panel2);
        contentPane.add(btn);
        frame.setSize(800, 600);  
        frame.setVisible(true);  
    }  
}  
