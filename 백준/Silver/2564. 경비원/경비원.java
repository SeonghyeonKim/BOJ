import java.util.Arrays;
import java.util.Scanner;

class Point {
	int x, y;
	
	Point(int x, int y) {
		x = x;
		y = y;
	}
}

public class Main {
	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		
		int N=sc.nextInt(), M=sc.nextInt(), Q=sc.nextInt();
		Point[] arr = new Point[Q];
		Point dg = new Point(0, 0);
		
		for(int i=0; i<Q; i++) {
			arr[i] = new Point(0,0);
			arr[i].x = sc.nextInt();
			arr[i].y = sc.nextInt();
		}
		
		dg.x = sc.nextInt();
		dg.y = sc.nextInt();
		
		int ans = 0;
		for(int i=0; i<Q; i++) {
			if(dg.x==1) {
				if(arr[i].x==1) {
					ans += Math.abs(arr[i].y-dg.y);
				}
				else if(arr[i].x==2) {
					ans += Math.min(arr[i].y+dg.y, N+N-arr[i].y-dg.y) + M;
				}
				else if(arr[i].x==3) {
					ans += arr[i].y+dg.y;	
				}
				else if(arr[i].x==4) {
					ans += N-dg.y+arr[i].y;
				}
			}
			else if(dg.x==2) {
				if(arr[i].x==1) {
					ans += Math.min(arr[i].y+dg.y, N+N-arr[i].y-dg.y) + M;
				}
				else if(arr[i].x==2) {
					ans += Math.abs(arr[i].y-dg.y);
				}
				else if(arr[i].x==3) {
					ans += dg.y + M-arr[i].y;		
				}
				else if(arr[i].x==4) {
					ans += M+N-dg.y-arr[i].y;
				}
			}
			else if(dg.x==3) {
				if(arr[i].x==1) {
					ans += arr[i].y+dg.y;	
				}
				else if(arr[i].x==2) {
					ans += -dg.y + M+arr[i].y;		
				}
				else if(arr[i].x==3) {
					ans += Math.abs(arr[i].y-dg.y);
				}
				else if(arr[i].x==4) {
					ans += Math.min(arr[i].y+dg.y, M+M-arr[i].y-dg.y) + N;
				}
			}
			else if(dg.x==4) {
				if(arr[i].x==1) {
					ans += N+dg.y-arr[i].y;
				}
				else if(arr[i].x==2) {
					ans += M+N-dg.y-arr[i].y;
				}
				else if(arr[i].x==3) {
					ans += Math.min(arr[i].y+dg.y, M+M-arr[i].y-dg.y) + N;
				}
				else if(arr[i].x==4) {
					ans += Math.abs(arr[i].y-dg.y);
				}
			}
		}
		System.out.println(ans);
		
		sc.close();
	}
}
