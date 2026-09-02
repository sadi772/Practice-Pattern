package hf;

public class pattern{
	public static void main(String[] args) {
		for(int m = 0; m <3; m++) {
			for(int i = 0; i <= 2; i++) {
				for(int k = 0; k <3; k++) {
					for(int j = 0; j <= 2; j++) {
						System.out.print("*" + " ");
					}
					for(int j = 0; j <= 2; j++) {
						System.out.print(" " + " ");
					}
					
				}
				System.out.println();
			}
			
			for(int i = 0; i <= 2; i++) {
				for(int k = 0; k <3; k++) {
					for(int j = 0; j <= 2; j++) {
						System.out.print(" " + " ");
					}
					for(int j = 0; j <= 2; j++) {
						System.out.print("*" + " ");
					}
					
				}
				System.out.println();
			}
		}
	}
}