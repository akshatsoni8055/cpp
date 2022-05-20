import java.util.Scanner;

class Temp {
    public static void main (String[] args) {

        Scanner scan = new Scanner(System.in);

        String name = scan.nextLine();

        System.out.println(name);

        int [] arr = {1,2,3,4,5};

        for (int a:arr) System.out.println(a);

        try {
            System.out.println(arr[6]);
        } catch (Exception e) {
            System.out.println(e);
        }

    }
}