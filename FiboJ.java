



import java.math.BigInteger;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {

      Scanner sc = new Scanner(System.in);

      int n = sc.nextInt();
      Integer fibo = new Integer(ifib(n));

    // BigInteger no tiene limite.
    BigInteger bg = (getFibonnaci(n));
    System.out.print("BigInteger: "+bg);

    // long, desde –9,223,372,036,854,775,808 hasta 9,223,372,036,854,775,807
    // overflows en fib(93
    if (n<93){
      long lo = lfib(n);
      System.out.println("long: "+lo);
    }
    else{
      System.out.printf("%-37s" , "long overflows en el: ");
      System.out.print("93th term.\n");
    }

    // int, desde –2,147,483,648 hasta 2,147,483,647
    // overflows en fib(47)
    if (n<47){
      int in = fibo.intValue();
      System.out.println("int: "+in);
    }
    else{
      System.out.printf("%-37s" , "int overflows en el:");
      System.out.print("47th term.\n");
    }

    // short , desde –32,768 hasta 32,767
    // overflows en fib(24)
    if (n<24){
      short sh = fibo.shortValue();
      System.out.println("short: "+sh);
    }
    else{
      System.out.printf("%-37s" , "short overflows en el: ");
      System.out.print("24th term.\n");
    }

    // byte, desde –128 hasta 127
    // overflows en fib(12)
    if (n<12){
      byte b = fibo.byteValue();
      System.out.println("byte: "+b);
    }
    else{
      System.out.printf("%-37s" , "byte overflows en el: ");
      System.out.print("12th term.\n");
    }


  }

  public static BigInteger getFibonnaci(int n) {

     BigInteger x = BigInteger.ZERO, y = BigInteger.ONE, z = BigInteger.ONE;
     int count = 0;

     while (count < n) {
        x = y;
        y = z;
        z = y.add(x);
        count++;
     }
     return x;
  }

  static long lfib(int n) {
    long x = 0, y = 1, z = 1;
    for (int i = 0; i < n; i++) {
      x = y;
      y = z;
      z = x + y;
    }
    return x;
  }

  static int ifib(int n) {
    int x = 0, y = 1, z = 1;
    for (int i = 0; i < n; i++) {
      x = y;
      y = z;
      z = x + y;
    }
    return x;
  }
}
