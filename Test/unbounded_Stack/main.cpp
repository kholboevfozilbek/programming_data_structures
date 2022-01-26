

#include <iostream>
#include "unbounded_stack.h"

using namespace std;

void print_menu();
void print_stack();
template<typename T>
void add_container(Stack<T> &chosen_stack);
template<typename T>
void remove_tops(Stack<T> stack1, Stack<T> stack2);

int main()
{
    Stack<Container> stack1;
    Stack<Container> stack2;
    int action_choice = -1, stack_choice=-1; char repeat;

    print_menu();

    do
    {
        cout << "Enter corresponding number of action: "; cin >> action_choice;
        switch(action_choice)
        {
        case 1:
            {
                cout << "New container should be added to \n";
                print_stack(); cin >> stack_choice;

                switch(stack_choice)
                {
                case 1:
                    add_container(stack1);
                    break;
                case 2:
                    add_container(stack2);
                    break;
                }
                break;
            }
        case 2:
            {
                cout << "Which stack's topmost container to be printed?";
                print_stack();
                cin >>stack_choice;

                switch(stack_choice)
                {
                case 1:
                    cout << endl << stack1.top();
                    break;
                case 2:
                    cout << endl << stack2.top();
                    break;
                }
                break;
            }
        case 3:
            {
                cout << "Comparing 2 stacks ... " << endl;
                if (stack1 == stack2)
                    cout << "\nYes the stacks have same containers " << endl;
                else
                    cout << "\nNo, stacks are not same " << endl;
                break;
            }
        case 4:
            {
                cout << "Which container should be printed? ";
                print_stack();
                cin >> stack_choice;
                switch(stack_choice)
                {
                case 1:
                    stack1.print();
                    break;
                case 2:
                    stack2.print();
                    break;
                }
                break;
            }
        case 5:
            {
                remove_tops(stack1, stack2);
                break;
            }
        case 0:
            return 0;
            break;

        }

        cout << "You wanna continue? [y/n]";
        cin >> repeat;

    }
    while(repeat == 'Y' || repeat == 'y');

    return 0;
}

template<typename T>
void add_container(Stack<T> &chosen_stack)
{
    Container f; string D, Country; double weight;
    cout << "Enter the content of that container: ";
    cin >> D;
    cout << "Enter the origin country: ";
    cin >> Country;
    cout << "Enter the weight of container: ";
    cin >> weight;

    f.setdescription(D);
    f.setcountry(Country);
    f.setweight(weight);

    chosen_stack.push(f);
}

void print_menu()
{
    cout << "\nChoose action below \n";
    cout << "1.Add a new container to chosen stack  " << endl;
    cout << "2.Print topmost container in chosen stack  " << endl;
    cout << "3.Compare the stacks  " << endl;
    cout << "4.Print the all containers in chosen stack " << endl;
    cout << "5. Remove tops from stacks" << endl;
    cout << "0. Exit \n";
}

void print_stack()
{
    cout << "\n1.Stack 1 " << endl;
    cout << "\n2.Stack 2\n: " << endl;
}

template<typename T>
void remove_tops(Stack<T> stack1, Stack<T> stack2)
{
    while(stack1.top() == stack2.top())
    {
        if (stack1.top() < stack2.top())
            cout << stack2.top();
        else if (stack2.top() < stack1.top())
            cout << stack1.top();
        stack1.pop();
        stack2.pop();
    }
}

