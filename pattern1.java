package hf;
 
public class pattern1{
	public static void main(String[] args) {
		for(int m = 0; m < 13; m++) {
			
				System.out.print(" ");
				for(int k = 0; k < 20; k++) {
					for(int i = 1; i <= 12; i++) {
						System.out.print("—");
					}
				}
				System.out.println();
				for(int i = 1; i <= 5; i++) {
					for(int  k = 0; k < 20; k++) {
						System.out.print("│ ");
						
						for(int j = 1; j <= 5; j++) {
							if(i == 1 && j == 1) {
								System.out.print("  ");
								continue;
							}
							if(i == 1 && j == 5) {
								System.out.print("  ");
								continue;
							}
							if(i == 5 && j == 1 ) {
								System.out.print("  ");
								continue;
							}
							if(i == 5 && j == 5) {
								System.out.print("  ");
								continue;
							}
							else {
								System.out.print("* ");
							}
							
						}
					}
					System.out.print("│  ");
					System.out.println();
				}
		}
		/*
		for(int k = 0; k < 4; k++) {
			for(int i = 1; i <= 13; i++) {
				System.out.print("—");
			}		
		}
		*/
	}
}