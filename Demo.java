
public class Demo {
	public static void main(String[] args) {
	
	for(int m = 0; m <4; m++) {
		
		for(int i = 0; i <= 5; i++) {
			
			for(int k = 0; k <8; k++) {
				
				for(int j = 5; j > i; j--) {
					System.out.print(" "+ " ");
				}
				
				for(int j = 0; j <= i; j++) {
					System.out.print("i" + " ");
				}
				for(int j = 1; j <= i; j++) {
					System.out.print("i" + " ");
				}
				for(int j = 5; j > i; j--) {
					System.out.print(" " + " ");
				}	
			}
			System.out.println();
		}
		
		for(int i = 0; i <=4 ; i++) {
			
			for(int k = 0; k <8; k++) {
				for(int j = 0; j <= i; j++) { 
					System.out.print(" " + " ");
				}
				for(int j = i; j <= 4; j++) {
					System.out.print("i" + " " );
				}
				for(int j = 4; j > i; j--) {
					System.out.print("i" + " ");
				}
				for(int j = 0; j <= i; j++) {
					System.out.print(" "+ " ");
				}	
			}
			System.out.println();
		}
		
	}
		
		
	}

}
//H.W -- 10 pattern problems
