#include <bits/stdc++.h>


using namespace std;

void insertionSort(vector<int>& arr)
{
    time_t st = clock();
    int n = arr.size();
    for (int i = 1; i < n; i++)
    {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
    time_t en = clock();
    double time_taken = double(en - st) / CLOCKS_PER_SEC;
    cout << time_taken << endl;

}

int main()
{
    ifstream inputFile("input.txt");
    vector<int> arr;
    int num;

    if (!inputFile)
    {
        cerr << "Error: Unable to open input.txt" << endl;
        return 1;
    }

    int n;
    cin >> n;
    int x = 0;
    while (inputFile >> num)
    {
        x++;
        if(x >= n)
            break;
        arr.push_back(num);
    }
    inputFile.close();
    cout << "Time taken for " << n << " inputs : " ;
    insertionSort(arr);




    return 0;
}
