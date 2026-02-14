import java.util.Scanner;
class testing{
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int N = input.nextInt();

        int[] arr = new int[N];

        for (int i = 0; i < N; i++) {
            arr[i] = input.nextInt();
        }

        for (int i = 0; i < N-1; i++) {
            for (int j = 0; j < N-i-1; j++) {
                if (arr[j] > arr[j+1]) {
                    int temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                }
            }
        }

        for (int i = 0; i < N; i++) {
            System.out.print(arr[i] + " ");
        }

        input.close();
    }
}