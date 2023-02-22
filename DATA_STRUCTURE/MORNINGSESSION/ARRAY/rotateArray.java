class Solution{
	public void rotateArray(int arr[],int n,int k){
		for(int i=0 ; i<k ; i++){
			int last = arr[n];
			for(int j=n ; j>0 ; j--){
				arr[j] = arr[j-1];
			}
			arr[0] = last;
		}
	}
	public static void main(String[]args){
		Solution s = new Solution();
		int arr[] = {1,2,3,4,5,6,7};
		int n = 7;
		int k = 3;
		System.out.println("Array Before Rotate : ");
		for(int i=0 ; i<n ; i++){
			System.out.print("|"+arr[i]+"|");
		}
		s.rotateArray(arr,n-1,k);
		System.out.println("\nArray After Rotate : ");
		for(int i=0 ; i<n ; i++){
			System.out.print("|"+arr[i]+"|");
		}
		System.out.println();
	}
}
