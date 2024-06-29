//fill method
// #include <iostream>
// #include <algorithm>
// using namespace std;

// int main()
// {
//     int a[10] = {1, 1, 1, 1, 1};
//     // to fill all with 67
//     fill(&a[0], a + 5, 67);       // 67 will be filled [a, a+5)
//     fill(&a[0] + 5, a + 10, 100); // 100 will be filled [a + 5, a + 10)

//     for (int i = 0; i < 10; i++)
//     {
//         cout << i << " --> " << a[i] << endl;
//     }
//     return 0;
// }

//Different method of swap
//Method 1: Swap inbuilt function
// #include <iostream>
// using namespace std;
// int main(){
//     int a =5, b=6;
//     swap(a,b);
//     cout<<"a: "<<a<<", b: "<<b<<endl;
//     return 0;
// }

//Method 2: Temp variable
// #include <iostream>
// using namespace std;
// int main(){
//     int a =5, b=6;
//     int temp= a;
//     a=b;
//     b=temp;
//     cout<<"a: "<<a<<", b: "<<b<<endl;
// }

// Method3: Arithimatic method
// #include <iostream>
// #include<algorithm>
// using namespace std;

// int main(){
//     int a=5,b=6;
//     a = a+b;
//     b = a-b;
//     a = a-b;

//     cout<<"a: "<<a<<", b: "<<b<<endl;
//     return 0;
// }    

// Method 4: Zor bitwise method
// #include <iostream>
// #include<algorithm>
// using namespace std;

// int main(){
//     int a=5,b=6;
//     a = a^b;
//     b = b^a;
//     a = a^b;

//     cout<<"a: "<<a<<", b: "<<b<<endl;
//     return 0;
// }    

//REVERSE METHOD
#include <iostream>
#include <algorithm>
using namespace std;

void reverseArray(int arr[], int n)
{
    int l = 0, h = n - 1;

    // while (l < h)
    // {
    //     swap(arr[l], arr[h]);
    //     l++;
    //     h--;
    // }

    // Pro ki trh code
    // while (l < h)
    // swap(arr[l++], arr[h--]);

    while (l < h)
    {
        // swap(arr[l], arr[h]);
        arr[l] = arr[l] ^ arr[h];
        arr[h] = arr[h] ^ arr[l];
        arr[l] = arr[l] ^ arr[h];
        l++;
        h--;
    }
}

int main()
{
    int arr[7] = {10, 20, 30, 40, 50, 60, 70};
    int n = sizeof(arr) / sizeof(arr[0]);

    // M1. custom reversal using 2-pointer approach
    reverseArray(arr, n);

    // M2. STL, C++ lib
    // reverse(arr, arr + n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}