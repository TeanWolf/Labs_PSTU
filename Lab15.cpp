#include<iostream>
#include<stack>
using namespace std;
stack<int> sortStack(stack<int>& input)
{
    stack<int> tmpStack;
    while (!input.empty())
    {
        int tmp = input.top();
        input.pop();
        while (!tmpStack.empty() && tmpStack.top() > tmp)
        {
            input.push(tmpStack.top());
            tmpStack.pop();
        }
        tmpStack.push(tmp);
    }
    return tmpStack;
}
int main()
{
    setlocale(LC_ALL, "RUS");
    int n, k;
    cout << "Длина:";
    cin >> n;
    stack<int> input;
    cout << "Изначальный стек:" << endl;
    for (int i = 0; i < n; i++)
    {
        input.push(k = rand() % 100 - 50);
        cout << k << " ";
    }
    stack<int> tmpStack = sortStack(input);
    cout << "\n" << "Результат:" << endl;;
    while (!tmpStack.empty())
    {
        cout << tmpStack.top() << " ";
        tmpStack.pop();
    }
}