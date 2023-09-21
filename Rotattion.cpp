# CodingNinja-Rotation.cpp
Easy Problem
int findKRotation(vector<int> &arr)
{
	int n = arr.size();
	int low = 0, high = n-1;
	int ans = INT_MAX;
    int index = -1;
	while(low <= high)
	{
		int mid = (low + high)/2;
		if(arr[low] <= arr[high]){
			if(arr[low] < ans) {
                index = low;
                ans = arr[low];
            }
            break;
		}
        if (arr[low] <= arr[mid]){
            if(arr[low] < ans){
                index = low;
                ans = arr[low];
            }
            low = mid + 1;
        }
		else{
			high = mid - 1;
			 if(arr[mid] < ans){
                 index = mid;
                 ans = arr[mid];
             }
		}
	}
	return index;

}
       
