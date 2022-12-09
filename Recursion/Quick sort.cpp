class Solution{
    public:
    //Function to sort an array using quick sort algorithm.
    void quickSort(int arr[], int l, int r)
    {
        if(l >= r){
            return ;
        }
        
        int pivotidx = partition(arr , l , r); // pivot idx nikal lo 
        
        quickSort(arr , l , pivotidx - 1);  // left side sort karo
        quickSort(arr , pivotidx +1 , r);   // right part sort karo
    }
    
    public:
    int partition (int arr[], int l, int r)
    {
       int pivot = arr[l];  // taking 1st ele as pivot
       
       // counting how many no are smaller than and equ to  pivot 
      
       int cnt = 0;
       for(int i = l+1 ; i <=r ;i++) {
           if(arr[i] <= pivot ) 
                cnt++;
       }
       
       int pivotidx = l + cnt;
       swap(arr[l] , arr[pivotidx]); //placing pivot at its correct posstion
       
       
       int i = l , j = r;
       
       while(i < pivotidx && j>pivotidx){
           
           while(arr[i] <= pivot) i++;
           while(arr[j] > pivot) j--;
           
           if(i < pivotidx && j>pivotidx) swap(arr[i++] , arr[j--]);
       }
       return pivotidx;
    }
};


// TC- O(N*LOGN)
//   SC - 1
