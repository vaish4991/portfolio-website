public class arm {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        System.out.println("Enter a number: ");
        int num=s.nextInt();
        int originalNum = num, sum = 0;
        int digits = 0;
        


        // Count number of digits
        while (num != 0) {
            num /= 10;
            digits++;
        }

        num = originalNum;
        // Check Armstrong condition
        while (num != 0) {
            int digit = num % 10;
            sum += Math.pow(digit, digits);
            num /= 10;
        }

        // Output result
        if (sum == originalNum)
            System.out.println(originalNum + " is an Armstrong number.");
        else
            System.out.println(originalNum + " is not an Armstrong number.");
    }
}