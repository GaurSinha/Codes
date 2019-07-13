
    
#include<iostream>
using namespace std;
int p=0;
bool canPlace(int board[][10],int i,int j,int n){
	//column 
	for(int x=0;x<i;x++){
		if(board[x][j]==1){
			return false;
		}
	}
	//diag 
	int x=i,y=j;
	//left diag 
	while(x>=0 and y>=0){
		if(board[x][y]==1){
			return false;
		}
		x--; y--;
	}
	x=i,y=j;
	//right diag 
	while(x>=0 and y<n){
		if(board[x][y]==1){
			return false;
		}
		x--; y++;
	}
	return true;
}

bool nQueen(int board[][10],int i,int n){

	if(i>=n){
	
	for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
			if(board[i][j]==1){
					cout<<"{"<<i+1<<"-"<<j+1<<"}";
				}
			}
			cout<<'\t';
		
		}
			p++;
   	return false;
   }
	//rec case
	//int cnt=0;
        for(int j=0;j<n;j++){
		if(canPlace(board,i,j,n)){
			board[i][j] =1;
			bool aageKaSolveHua= nQueen(board,i+1,n);
            if(aageKaSolveHua){
                return true;
            }
            
        }
          board[i][j]=0;
          
        }
       
           return false;
           // return false;
       //     board[i][j]=0;
      
           
			
		
       
       
	
	
}

int main(){
	int board[10][10]={0};
	int n;
	cin>>n;
	
nQueen(board,0,n);

  	cout<<endl;
  	cout<<p;



	return 0;
}


