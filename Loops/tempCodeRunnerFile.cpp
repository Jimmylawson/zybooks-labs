
    do{
        cout << "Enter something: ";
        getline(cin,userChoice);
        if(userChoice != "Done" && userChoice !="done" && userChoice != "d"){
            for (int i = userChoice.length() - 1; i >=0 ;i--){
                cout << userChoice[i] << " ";
            }
            cout << endl;
        }

    } while (userChoice != "Done" && userChoice != "done" &&userChoice != "d");