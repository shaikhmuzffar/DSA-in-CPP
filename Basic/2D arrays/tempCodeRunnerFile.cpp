
    int key=0;

    for(int row=0; row<rows; row++){
        for(int col=0; col<cols;col++){
            if(arr[row][col]==key){
                cout<<key<<" present at ind"<<row<<", "<<col;
            }else{
                return false;