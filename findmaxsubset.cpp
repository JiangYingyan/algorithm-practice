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
    int Index1 = 0;
    int Index2 = 0;
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
            if(A[LastIndex] < 0 ){
                 FirstIndex = LastIndex = LastIndex++;
            }
            else{
                Maxtemp = A[FirstIndex];
                Max = Compare(Max, Maxtemp);
                if(Max = Maxtemp){
                    Index1 = FirstIndex;
                    Index2 = LastIndex;
                }
                LastIndex++;
            }
        }
        if(LastIndex > FirstIndex){
            if(Maxtemp + A[LastIndex] < 0){
                FirstIndex = LastIndex = LastIndex++;
                Maxtemp = 0;
            }
            if(Maxtemp + A[LastIndex] > 0){
                Maxtemp = Maxtemp + A[LastIndex];
                 Max = Compare(Max, Maxtemp);
                if(Max = Maxtemp){
                    Index1 = FirstIndex;
                    Index2 = LastIndex;
                }
                LastIndex++;

            }

        }
    }
    cout << Index1 <<"/n" << Index2;
    return 0;
}

