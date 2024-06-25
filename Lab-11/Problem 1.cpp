#include<iostream>
#include<vector>
using namespace std;
int main() {
  
    vector<int> myvector{ 1, 2, 3, 4, 5,6,7,8,9,10 };
    cout << "myvector: ";
    copy(myvector.begin(), myvector.end(),ostream_iterator<int>(cout, " "));
    cout << endl;
    cout <<"Size="<< myvector.size()<<endl<<endl;
    cout << "myvector:";
    myvector.push_back(11);
    myvector.push_back(12);
    myvector.push_back(13);
    for (auto it = myvector.begin(); it != myvector.end(); ++it)
        cout << ' ' << *it;
    cout << endl;
    cout << "Increased Size=" << myvector.size()<<endl<<endl;
    cout << "myvector: ";
    myvector.pop_back();
    myvector.pop_back();
    for (auto it = myvector.begin(); it != myvector.end(); ++it)
        cout << ' ' << *it;
    cout <<endl<< "Decreased Size=" << myvector.size() << endl << endl;

    cout <<"Maximum size  of vector: "<< myvector.max_size() << endl;

    cout << "Last Index Value by using at(): " << myvector.at(10) << endl;
    cout << "Last Index Value by using array method: " << myvector[10] << endl<<endl;

    //cout << "Last Index + 1 Value: " << myvector[10 + 1] << endl; Exceptional error as there is no vector size of 11.
    //cout << "Last Index + 1 Value: " << myvector.at(10+1);// Exceptional error as there is no vector size of 11.
    
    cout << "Insert new element(50) at end of the vector: "<<endl;
    auto it = myvector.insert(myvector.end(), 1, 50);
    cout << "The vector elements are: ";
    for (auto it = myvector.begin(); it != myvector.end(); ++it)
        cout << *it << " ";
        cout << endl << endl;
   
    cout << "Erase first element(1) of the vector: " << endl;
    it = myvector.begin();
    myvector.erase(it);
    cout << "The vector elements are:";
    for (auto it = myvector.begin(); it != myvector.end(); ++it)
        cout << ' ' << *it;
    cout << endl << endl;

    cout << "Remove all values of vector: " << endl;
    myvector.clear();
    cout << "The vector elements are: ";
    for (auto it = myvector.begin(); it != myvector.end(); ++it)
        cout << ' ' << *it;
    cout << endl;

    return 0;
}