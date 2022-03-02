

//  Created by KAIBALYA SAHOO on 20/03/2021.
//

#include <iostream>
using namespace std;




int main()
{
    int num,sum=0,max=0;
    cin>>num;
    int A[num],B[num];
    for(int i=0;i<num;i++)
    {
        cin>>A[i];
        
    }
    for(int i=0;i<num;i++)
    {
        sum=A[i]+sum;
        B[i]=sum;
        
    }
    for(int i=0;i<num;i++)
    {
        if(max<=B[i])
        {
            max=B[i];
        }
        
        
    }
    cout<<max;
    
}

