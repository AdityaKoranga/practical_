
#include<iostream>
using namespace std;


int main(){
    int choice,temp,sum;
    int matrix1[3][3],matrix2[3][3],matrix3[3][3];
    while(1){
        cout<<"\nEnter 1 for operations( transpose of matrix) which require 1 matrix:\n";
        cout<<"Enter 2 for operations(addition  or multiplication of matrix) which require 2 matrix:\nEnter 0 to exit:\n";
        cin>>choice;
        if(choice==1){
            cout<<"Enter the matrix elements: "<<endl;
            for(int i=0;i<3;i++){
                for(int j=0;j<3;j++){
                    cin>>matrix1[i][j];
                }
            }
            cout<<"The matrix is: \n";
            for(int i=0;i<3;i++){
                for(int j=0;j<3;j++){
                    cout<<matrix1[i][j]<<" ";
                }
                cout<<"\n";
            }

            cout<<"The Transpose matrix is: \n";
            for (int i=1; i<3; i++) {
                for (int j = 0; j < i; j++) {
                    temp = matrix1[i][j];
                    matrix1[i][j] = matrix1[j][i];
                    matrix1[j][i] = temp;
                }
            }
            for(int i=0;i<3;i++){
                for(int j=0;j<3;j++){
                    cout<<matrix1[i][j]<<" ";
                }
                cout<<("\n");
            }
            printf("\n\n");
        }
        else if(choice==2){
            cout<<"Enter the matrix1 elements:"<<endl;
            for(int i=0;i<3;i++){
                for(int j=0;j<3;j++){
                    cin>>matrix1[i][j];
                }
            }
            cout<<"Enter the matrix2 elements"<<endl;
            for(int i=0;i<3;i++){
                for(int j=0;j<3;j++){
                    cin>>matrix2[i][j];
                }
            }
            cout<<"The matrices are: \n";
            cout<<"Matrix 1: \n";
            for(int i=0;i<3;i++){
                for(int j=0;j<3;j++){
                    cout<<matrix1[i][j]<<" ";
                }
                cout<<endl;
            }
            cout<<"Matrix 2: \n";
            for(int i=0;i<3;i++){
                for(int j=0;j<3;j++){
                    cout<<matrix2[i][j]<<" ";
                }
                cout<<endl;
            }
            cout<<"The addition of the two matrices: \n";
            for(int i=0;i<3;i++){
                for(int j=0;j<3;j++){
                    matrix3[i][j]=matrix1[i][j]+matrix2[i][j];
                }
            }
            for(int i=0;i<3;i++){
                for(int j=0;j<3;j++){
                    cout<<matrix3[i][j]<<" ";
                }
                cout<<endl;
            }
            
            cout<<"The multiplication of the two matrices: \n";
            for(int i=0;i<3;i++){
                for(int j=0;j<3;j++){
                sum = 0;
                    for(int k=0;k<3;k++){
                        sum = sum + matrix1[i][k] * matrix2[k][j];
                    }
                matrix3[i][j] = sum;
                }
            }
            for(int i=0;i<3;i++){
                for(int j=0;j<3;j++){
                    cout<<matrix3[i][j]<<" ";
                }
                cout<<endl;
            }

        }
        else if(choice==0){
            exit(0);
        }
        else{
            printf("Invalid choice, Please choose among 1 and 2!\n\n");
        }
    }
    return 0;
}
