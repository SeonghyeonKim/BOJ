import java.util.Arrays;
import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		
		int N=sc.nextInt();
		int[] arr = new int[N];
		
		for(int i=0; i<N; i++) 
			arr[i] = sc.nextInt();
		
		int ans=0;
		int cnt1=1, cnt2=1;
		for(int i=0; i<N-1; i++) {
			if(arr[i] <= arr[i+1]) cnt1++;
			else {
				ans = Math.max(ans, cnt1);
				cnt1=1;
			}			
			
			if(arr[i] >= arr[i+1]) cnt2++;
			else {
				ans = Math.max(ans, cnt2);
				cnt2=1;
			}
		}
		ans = Math.max(ans, cnt1);
		ans = Math.max(ans, cnt2);
		
		System.out.println(ans);
		
		sc.close();
	}
}
