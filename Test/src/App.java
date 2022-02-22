import javax.sound.sampled.SourceDataLine;

public class App {
    public static void main(String[] args) throws Exception {
        int c=add(8,9);
        System.out.println("Hi, World!");
        System.out.println(c);
    }
    public static  int add(int a,int b){
        int c=0;
        c=a+b;
        return c;
    }
}
