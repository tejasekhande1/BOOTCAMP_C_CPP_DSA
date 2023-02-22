class Solution{
	public void revArray(int arr[],int n){
		int A = 0;
		int B = n-1;
		while(A<B){
			int temp = arr[A];
			arr[A] = arr[B];
			arr[B] = temp;
			A++;
			B--;
		}
	}
	public static void main(String[]args){
		Solution s = new Solution();
		int arr[] = {1,2,3,4};
		int A = 2;
		int B = 3;
		s.revArray(arr,4);
		for(int i=0 ; i<arr.length ; i++){
			System.out.println(arr[i]);
		}
	}
}
