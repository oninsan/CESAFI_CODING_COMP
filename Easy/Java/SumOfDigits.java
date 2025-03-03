import java.util.Scanner;

public class SumOfDigits {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    System.out.print("Enter a number: ");
    int num = sc.nextInt();
    sc.close();

    int sum = 0, n = Math.abs(num);
    while (n > 0) {
      sum += n % 10;
      n /= 10;
    }

    System.out.println(sum);
  }
}
