// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
using namespace std;

class Book{
    string ISBN;
    string title;
    string author;
    bool isAvailable;
  public:
    Book(){ //default value for attributes whenever without parameter is created
        ISBN="000";
        title=" ";
        author=" ";
        isAvailable=false;
    }
    Book(string BN,string t, string a,bool av){
        ISBN=BN;
        title=t;
        author=a;
        isAvailable=av;
    }
    //All getter functions
    string get_ISBN(){
        return ISBN;
    }
    string get_title(){
        return title;
    }
    string get_author(){
        return author;
    }
    bool get_availability(){
        return isAvailable;
    }
    //All Setter functions
    void set_ISBN(string BN){
        ISBN=BN;
    }
    void set_title(string t){
        title=t;
    }
    void set_author(string a){
        author=a;
    }
    void set_availability(bool av){
        isAvailable=av;
    }
};

class Library{

  Book books[10];
  public:
  //catalog
    void displayCatalog(){
        cout<<"Book title"<<" | "<<"Author"<<" | "<<"Availability"<<endl;
        for(int i =0;i<10;i++){
            cout<<books[i].get_title()<<" | "<<books[i].get_author()<<" | "<<books[i].get_availability()<<endl;
        }
    }
    void addBook(Book book){
        static int num = 0;
        books[num].set_ISBN(book.get_ISBN());//Sorting wont be based on this
        books[num].set_title(book.get_title());
        books[num].set_author(book.get_author());
        books[num].set_availability(book.get_availability());
        num++;
    }
    void removeBook(string ISBN){
        int found=0;
        int ch;
        for(int i =0;i<10;i++){
            if(books[i].get_ISBN()==ISBN){//conformation and checking
                cout<<"book found."<<endl<<" Are you sure you want to remove it? 0 for no and 1 for yes"<<endl;
                cin>>ch;
                if(ch==1){
                    books[i].set_title(" ");
                    books[i].set_author(" ");
                    books[i].set_availability(false);
                    books[i].set_ISBN("000");
                }
                found=1;
                cout<<"Book has been removed"<<endl;
                break;
            }
        }
        if(found==0){//if book is not found
            cout<<"The searched book does not exist"<<endl;
        }
    }
    void checkoutBook(string ISBN){
        int ch;
        int found = 0;
        for(int i=0;i<10;i++){
            if(books[i].get_ISBN()==ISBN){
                cout<<"book found."<<endl;
                if(books[i].get_availability()==true){
                    cout<<" Are you sure you want to borrow it? 0 for no and 1 for yes"<<endl;
                    cin>>ch;
                    if(ch==1){
                    books[i].set_availability(false);
                    }
                }
                else{//if book is not available for borrowing
                    cout<<"Book not available for borrowing"<<endl;
                }
                found=1;
                break;
            }
        }
        if(found==0){//book does not exist
            cout<<"The searched book does not exist"<<endl;
        }
    }
    void returnBook(string ISBN){
        int ch;
        int found = 0;
        for(int i=0;i<10;i++){
            if(books[i].get_ISBN()==ISBN){
                cout<<"book found."<<endl;
                if(books[i].get_availability()==false){
                    cout<<" Are you sure you want to return it? 0 for no and 1 for yes"<<endl;
                    cin>>ch;
                    if(ch==1){
                        books[i].set_availability(true);
                    }
                }
                else{//Book alredy exists and was not borrowed
                    cout<<"Book is already available. Contact librarian immediately"<<endl;
                }
                
                found=1;
                break;
            }
        }
        if(found==0){
            cout<<"The searched book does not exist"<<endl<<"Please contact librarian"<<endl;
        }
    }
    void searchBook(string bts){
        int found=0;
        for(int i=0;i<10;i++){
            if(books[i].get_title()==bts){
                cout<<"Book exists";
                if(books[i].get_availability()==true){
                    cout<<"Available for borrowing"<<endl;
                }
                else{
                    cout<<"Not available for borrowing"<<endl;
                }
                found=1;
                break;
            }
        }
        if(found==0){
            cout<<"Book does not exist"<<endl;
        }
        
    }
};
//User side functions
void addABook(Library lb){
    Book tempBook;
    string BN;
    string title;
    string author;
    bool availability;
    char check;
    cout<<"Enter the ISBN id: ";
    cin>>BN;
    cout<<"Enter the title of the book: ";
    cin>>title;
    cout<<"Enter the author's name: ";
    cin>>author;
    cout<<"Enter the availability(Y for available, N otherwise): ";
    cin>>check;
    switch(check){
        case 'y':
        case 'Y': availability=true;break;
        case 'n':
        case 'N': availability=false;break;
        default:cout<<"invalid. Setting to false"<<endl;break;
    }
    tempBook.set_ISBN(BN);
    tempBook.set_title(title);
    tempBook.set_author(author);
    tempBook.set_availability(availability);
    lb.addBook(tempBook);
    
}
void removeABooK(Library lb){
    string BN;
    cout<<"Enter the ISBN of the book you want to remove: ";
    cin>>BN;
    lb.removeBook(BN);
}
void displayAllBooks(Library lb){
    lb.displayCatalog();
}
void searchABook(Library lb){
    string bts;
    cout<<"Enter the name of the book you want to search: ";
    cin>>bts;
    lb.searchBook(bts);
}
void checkoutABook(Library lb){
    string BN;
    cout<<"Enter ISBN id of the book you want to borrow: ";
    cin>>BN;
    lb.checkoutBook(BN);
}
void returnABook(Library lb){
    string BN;
    cout<<"Enter ISBN id of the book you want to return: ";
    cin>>BN;
    lb.returnBook(BN);
}
int main() {
    Library lb;
    Book booktemp;
    int ch;
    do{
           cout<<"Enter the number of your choice"<<endl;
            cout<<"1. Add a book"<<endl;
            cout<<"2. Remove a book"<<endl;
            cout<<"3. Borrow a Book"<<endl;
            cout<<"4. Return a book"<<endl;
            cout<<"5. Search a book"<<endl;
            cout<<"6. Display all books"<<endl;
            cout<<"10. QUIT!!"<<endl;
            cin>>ch;
        switch(ch){
            case 1:addABook(lb);break;
            case 2:removeABooK(lb);break;
            case 3:checkoutABook(lb);break;
            case 4:returnABook(lb);break;
            case 5:searchABook(lb);break;
            case 6:displayAllBooks(lb);break;
            case 10:break;
        }
    }while(ch!=10);

    return 0;
}