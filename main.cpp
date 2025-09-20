#include "Stack.h"
#include "Queue.h"
#include "string"
#include "readCSV.h"
using namespace std;

int main() {
    Queue<int> q1;

    q1.enqueue(1);
    q1.enqueue(2);
    q1.enqueue(3);
    q1.print();
    q1.dequeue();
    q1.print();
    q1.enqueue(4);
    q1.print();

    cout << ""<<endl;
    Queue<string> q2;
    q2.enqueue("firstItem");
    q2.enqueue("secondItem");

    q2.print();
    q2.dequeue();
    q2.print();
    q2.enqueue("thirdItem");
    q2.print();

    Queue<csvData> dataQueue;
    vector<csvData> csvDataV;

    string filePath = "../Bella_Beats_Analysis_Master_Dataset_Cleaned.csv";

    getDataFromFile(csvDataV, filePath);

    for (int i = 0; i <= 10; i++)
    {
        csvData tempData = csvDataV[i];
        dataQueue.enqueue(tempData);
    }

    dataQueue.print();

    return 0;
}