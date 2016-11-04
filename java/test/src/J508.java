import java.applet.*;import javax.swing.*;import java.awt.event.*;
public class J508 extends Applet{
    static JTextField text1,text2;
    Sqr s=new Sqr();//创建监视器
    public void init(){
        text1=new JTextField(10);
        text2=new JTextField(10);
        add(text1);
        add(text2);
        text1.addActionListener(s);//类Sqr的实例s作为text1的监视器
    }
}
class Sqr implements ActionListener{
    public void actionPerformed(ActionEvent e){//实现接口ActionListener
        if(e.getSource()==J508.text1){
            long n=Long.parseLong(J508.text1.getText());
            //将text1的文本转换成long型数据
            J508.text2.setText(String.valueOf(n*n));
            //将n*n转化为字符串
        }
        else{}
    }
}