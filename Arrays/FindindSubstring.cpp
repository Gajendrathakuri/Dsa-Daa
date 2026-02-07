 #include<iostream>
 using namespace std;

 void displaySubstring(int *array,int size)
 {
    for(int start=0;start<size; start++)
    {
        for(int end=start; end<size;end++)
        {
            for(int j=start;j<=end;j++)
            {
                cout<<array[j]<<" ";
            }
            cout<<", ";
        }
        cout<<endl;
    }
 }
 int main()
{
    int array[5]={1,2,3,4,5};
    displaySubstring(array,5);
}