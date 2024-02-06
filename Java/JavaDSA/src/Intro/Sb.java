package Intro;

public class Sb {
    public static void main(String[] arr){

        StringBuilder builder = new StringBuilder();
        builder.append("Hello");
        builder.append(123);
        builder.append(true);
        builder.reverse();
        System.out.println(builder);
    }
}
