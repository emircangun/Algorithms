//heapify the last element in a max heap
void up_heapify(int arr[], int n, int i){
  int largest = i; // i is the index of the root
  l = i * 2 + 1; // l is the index of the left child
  r = i * 2 + 2; // l is the index of the right child
  
  if(l < n && arr[l] > arr[i]){ // n is the size of the array
    largest = l;
  }
  if(r < n && arr[r] > arr[largest]){
    largest = r;
  }
  
  if(largest != i){
    swap(arr[largest], arr[i]);
    heapify(arr, n, largest);
  }
}

// max heap 
// root switched with last element, heapify it downwards
void down_heapify(int arr[], int n, int i){
  int min = i; // i is the index of the root
  l = i * 2 + 1; // l is the index of the left child
  r = i * 2 + 2; // l is the index of the right child
  
  if(l < n && arr[l] < arr[i]){ // n is the size of the array
    min = l;
  }
  if(r < n && arr[r] < arr[min]){
    min = r;
  }
  
  if(min != i){
    swap(arr[min], arr[i]);
    heapify(arr, n, min);
  }
}
