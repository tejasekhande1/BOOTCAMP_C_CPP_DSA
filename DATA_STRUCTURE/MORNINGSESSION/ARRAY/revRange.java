class Solution{
	public void revRange(int arr[],int n,int A,int B){
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
		s.revRange(arr,4,A,B);
		for(int i=0 ; i<arr.length ; i++){
			System.out.println(arr[i]);
		}
	}
}
