//down heapify for a min map
void down_heapify(int arr[], int n, int i){
  // i is the index of the root
  int l = i * 2 + 1; // l is the index of the left child
  int r = i * 2 + 2; // l is the index of the right child
  
  if (arr[l] < arr[r]) min == l;
  else min == r;
  
  if(arr[min] < arr[i]){
    swap(arr[min], arr[i]);
    down_heapify(arr, n, min);
  }
}


//removing min 
void remove_min(int arr[], int n, int i){
  arr[i] = arr[n - 1];
  n = n - 1;
  down_heapify(arr, n, i);
}


