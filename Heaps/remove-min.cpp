//reminder of down heapify
void down_heapify(int arr[], int n, int i){
  int min = i; // i is the index of the root
  l = i * 2 + 1; // l is the index of the left child
  r = i * 2 + 2; // l is the index of the right child
  
  if(l < n && arr[l] < arr[i]){ // n is the size of the array
    min = l;
  }
  if(r < n && arr[r] < arr[i]){
    min = r;
  }
  
  if(min != i){
    swap(arr[min], arr[i]);
    heapify(arr, n, i);
  }
}


//removing min 
void remove_min(int arr[], int n, int i){
  arr[i] = arr[n - 1];
  n = n - 1;
  down_heapify(arr, n, i);
}
