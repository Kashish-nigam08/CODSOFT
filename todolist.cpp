#include<bits/stdc++.h>
#include<iostream>
#include<string>
#include<map>
#include<algorithm>

using namespace std;

int main()
{
    int key = 1, choice, question, deletekey, editkey;
    string val, error;
    map<int, string> Task;
    map<int, int> mymap;
    start:
    cout<<"\n---------------- TO-DO LIST ----------------"<<endl;
    cout<<"1. Add Task "<<endl;
    cout<<"2. Display Task "<<endl;
    cout<<"3. Remove Task "<<endl;
    cout<<"4. Mark Task as Completed "<<endl;
    cout<<"5. Exit "<<endl;
    cout<<"Enter your choice : \n"<<endl;
    cin>>choice;
    switch(choice)
    {
        case 1:
            cout<<endl;
            do{
                cin.ignore();
                cout<<"Enter Your Task Details : ";
                getline(cin, val);
                Task.insert({key, val});
                mymap.insert({key, 0});
                key++;
                cout<<"Do you want to add more Task? (1=Yes / 0=No) : ";
                cin>>question;
            }while(question);
            goto start;
            break;
        case 2:
            cout<<endl;
            for (auto it : Task) 
            {
                if(mymap.at(it.first) == 1)
                {
                    cout << "Task-" << it.first << " : " << it.second << endl; 
                }
                else if(mymap.at(it.first) == 0)
                {
                    cout << "Task-" << it.first << " : " << it.second << "   [Pending]" << endl;
                }
            }
            goto start;
            break;
        case 3:
            cout<<"\nEnter the task number which one you want to remove/delete : ";
            cin>>deletekey;
            Task.erase(deletekey);
            mymap.erase(deletekey);
            cout<<"\nTask-"<<deletekey<<" removed successfully...!"<<endl;
            goto start;
            break;
        case 4:
            cout<<"\nEnter the task number which one you want to mark as completed : ";
            cin>>editkey;
            try
            {
                Task[editkey] = Task.at(editkey) + "   [Completed]";
                mymap[editkey] = 1;
                cout<<"\nTask-"<<editkey<<" marked as completed successfully...!"<<endl;
            }
            catch(const out_of_range &e) 
            {  
                cout<<endl<<"Invalid Task Number...!"<<endl;  
            } 
            goto start;
            break;
        case 5:
            cout<<"\nThank you!"<<endl;
            break;
        default:
            cout<<"Invalid choice! Please try again..."<<endl;
            goto start;
            break;
    }
    
    

    return 0;
}