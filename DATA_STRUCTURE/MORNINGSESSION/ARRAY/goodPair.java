
// FIND GOOD PAIR IN GIVEN ARRAY

class Solution{
	public int goodPair(int arr[],int n,int key){
		for(int i=0 ; i<n ; i++){
			for(int j=i+1 ; j<n ; j++){
				if(arr[i] + arr[j] == key){
					return 1;
				}
			}
		}
		return 0;
	}
	public static void main(String[]args){
		Solution s = new Solution();
		int[] arr = {1,2,2};
		int key = 4;
		System.out.println("RESULT : "+s.goodPair(arr,3,key));
	}
}
