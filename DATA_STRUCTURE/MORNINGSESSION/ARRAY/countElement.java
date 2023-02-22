import java.util.*;
class Solution{
	public int countElements(int arr[],int n){
		int cnt=0;
		for(int i=0 ; i<n ; i++){
			for(int j=0 ; j<n ; j++){
				if(arr[i] < arr[j]){
					cnt++;
					break;
				}
			}
		}	
		return cnt;
	}
	public static void main(String[]args){
		Solution s = new Solution();
		int[] arr = {3,2,1};
		System.out.println("Count of Elements : "+s.countElements(arr,3));
	}
}
