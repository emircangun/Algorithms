class Node{
  Node left, right;
  int data;
  public Node(int data){
    this.data = data;
  }
};

public boolean find(int value){
  if (value == data) return true;
  else if (value > data){
    if (left == NULL) return false;
    else left.find(value);
  }else{
    if (right == NULL) return false;
    else right.find(value);
  }
}

