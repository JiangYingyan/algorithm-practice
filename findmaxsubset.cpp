 #include<iostream>
 using namespace std;
int Compare(int A,int B){
    if(A > B)
        return A;
    else
        return B;
}
int main(){
    int FirstIndex = 0;
    int LastIndex = 0;
    int Max = 0;
    int Maxtemp = 0;
    int Index1 = -1;
    int Index2 = -1;
    int MarixSize;
    cout << "input marix size(no more than 10000):";
    cin >> MarixSize;
    int A[10000];
    cout << "input marix:";
    for(int i = 0 ; i < MarixSize; i++){
        cin >> A[i];
    }
    while(LastIndex < MarixSize){
        if(LastIndex == FirstIndex){
            if(A[LastIndex] <= 0 ){
                 LastIndex++;
                 FirstIndex = LastIndex;
            }
            else{

                Maxtemp = A[FirstIndex];
                Max = Compare(Max, Maxtemp);
                if(Max == Maxtemp){
                    Index1 = FirstIndex;
                    Index2 = LastIndex;
                }
                LastIndex++;
            }
        }
        if(LastIndex > FirstIndex){
            if(Maxtemp + A[LastIndex] <= 0){
                LastIndex++;
                FirstIndex = LastIndex;
                Maxtemp = 0;
            }
            if(Maxtemp + A[LastIndex] > 0){
                Maxtemp = Maxtemp + A[LastIndex];
                 Max = Compare(Max, Maxtemp);
                if(Max == Maxtemp){
                    Index1 = FirstIndex;
                    Index2 = LastIndex;
                }
                LastIndex++;
            }
        }
    }
    if(Index2 >= 0)
        cout << "First index is:" << Index1+1 <<"\n" <<"Second index is: " << Index2 + 1 <<"\n";
    cout <<"The max subset is :";
    int sum = 0;
    if(Index2 == -1){
        cout << "empty set";
    }
    else{
        for(int i = Index1;i <= Index2;i++){
            sum += A[i];
            cout << A[i] <<" ";
        }
    }
    cout << "\n"<<"The sum is:" << sum;
    return 0;
}

