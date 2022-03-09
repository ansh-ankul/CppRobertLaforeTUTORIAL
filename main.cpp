#include <iostream>
#include <iomanip> //input output manipulator for setw()
#include <cmath>
#include <conio.h> //control input output for getche()

#include <cstring> // for strcpy(), strlen()
 //OR
#include <string>

//STL
#include <vector>
#include <list>
#include <deque>
#include <set>
#include <map>
#include <stack>
#include <algorithm>
#pragma warning(disable:4786)
using namespace std;





void basics(){
    cout<<"-------------------- Basics of C++ ---------------------"
        <<"\n 1. Comments: // or /*...*/ "
        <<"\n 2. Int variable: size-4 bytes(on a 32 bit system) range -2147483648 to 2147483647"
        <<"\n 3. Long: 4 bytes same as int"
        <<"\n 4. Short: 2 bytes (range- -32768 to 32767)"
        <<"\n       syntax: longvar= 36L; "
        <<"\n 5. Char: 1 byte (range- -128 to 127)"
        <<"\n 6. Char constants('a') are different from string constants(\"a\")"
        <<"\n 7. Escape sequences           character"<<endl
                <<setw(20)<<"\\a"<<setw(20)<<"bell(beep)"<<endl
                <<setw(20)<<"\\b"<<setw(20)<<"Backspace"<<endl
                <<setw(20)<<"\\f"<<setw(20)<<"formfeed"<<endl
                <<setw(20)<<"\\n"<<setw(20)<<"newline"<<endl
                <<setw(20)<<"\\r"<<setw(20)<<"return"<<endl
                <<setw(20)<<"\\t"<<setw(20)<<"tab"<<endl
                <<setw(20)<<"\\\\"<<setw(20)<<"backslash"<<endl
                <<setw(20)<<"\\\'"<<setw(20)<<"single quote"<<endl
                <<setw(20)<<"\\\""<<setw(20)<<"double quote"<<endl
                <<setw(20)<<"\\xdd"<<setw(28)<<"hexadecimal notation"<<endl
        <<"\n 8. Precidence: :: - brackets - . - postfix++ - unary:--prefix,*,+,-,! - arithmetic *,/,%,+,- - bitwise>>,<< -\n relational - logical - conditional - assignment - ,sequence"
        <<"\n 9. Float variable: 4 bytes (3.4*10^-38 to 3.4*10^38) \n   syntax: pi=3.14F;"
        <<"\n 10. Double variable: 8 bytes (1.7*10^-308 to 1.7*10^308)"
        <<"\n 11. 1.22341E3 means 1.22341*10^3"
        <<"\n 12. Preprocessor directive define: syntax: #define PI 3.14159"
        <<"\n 13. Bool variable: 1bit size"
        <<"\n 14. Digits of precision: float(7) double(15)"
        <<"\n 15. Unsigned data types are double the size of usual."
        <<"\n 16. Type casts in C++: ->static ->dynamic ->reinterpret ->const \n    syntax: charvar=static_cast<char>(intvar) "
        <<"\n 17. The functions are grouped together in a library file but the info about them is in a number of header files.\n------------------------------------------------------\n";
}






void loops(){
    cout<<"-------------------- Loops ---------------------"
        <<"\n 1. Loop body is called block of code."
        <<"\n 2. getche is used to read one character at a time: \n Example: while(ch!=\'\\r\')\n\t\t ch=getche(); \n\t\t (Is in conio.h)"
        <<"\n 3. SYNTAX: while((ch=getche())!=\'\\r\') // Loops until enter is pressed!"
        <<"\n 4. Break statement exits the whole loop, whereas, continue statement exits from the particular iteration of the loop."
        <<"\n 5. string- \"\" char- \'\' "
        <<"\n 6. Conditional operator: min=(alpha<beta)? alpha:beta;\n\t MOD function: abs=n<0? -n:n;"
        <<"\n 7. && || !"
        <<"\n 8. if(x%7==0) is equal to if(!(x%7))"
        <<"\n 9. Goto statement:\n\tgoto ansh; \n\tansh:cout<<\"ansh\";// Control will begin from here"
        <<"\n 10. Pattern: \n";

    for(int i=5,k=1;i>0;i--){
        cout<<setw(i);
        for(int j=0;j<k;j++){
            cout<<"*";
        }
        k+=2;
        cout<<endl;
    }
    cout<<"\n------------------------------------------------------\n";
}






//--------------------------------- STRUCTURES AND ENUMERATIONS ----------------------------------------
void structureEnumeration(){
    cout<<"\n 1. Structures are a collection of variables. SYNTAX= \n struct ansh(){\n\tint name;\n\tfloat marks;\n}";
    cout<<"\n 2. Struct is accessed using dot operator(.)";
    cout<<"\n 3. Structures can be nested to any extent theoretically.";
    struct distance{
        int feet;
        int inches;
    };
    struct room{
        distance l;
        distance w;
    };

    room dining;
    dining.l.feet=20;
    dining.w.feet=30;
    cout<<"\n 4. Structures can hold both data and functions.";

    cout<<"\n 5. Enumeration is a different approach to defining our own data type. It is a list of all possible values. SYNTAX- \n enum days{sun,mon,tur,wed,thu,fri,sat};\n";
    enum days{sun,mon,tur,wed,thu,fri,sat};
    days d1=mon;
    days d2=sun;
    cout<<d1-d2; //can do integer arithmetic

    cout<<"\n 6. Enumerations are treated internally like integers.\n\tenum{a=100,b,c};\n\t->Subsequent values will be b=101 and c=102";
    cout<<"\n 7. Enums can be used as flag values.";
}
//------------------------------------------------------------------------------------------------------








//--------------------------------------- FUNCTIONS ----------------------------------------------------
int x;
inline void passbyreference( int&);//function declaration
int& setx(int);


void functions(){//function definition
    cout<<"\n 1. For predefined functions, function declaration is present in header files and its declaration is in the library file"
        <<"\n 2. A structure can be passed as a function argument."
        <<"\n 3. A reference provides an alias(a different name) for a variable. Used for passing arguments in function.";

    int a=20;
    passbyreference(a);
    cout<<endl<<"\t"<<a;

    cout<<"\n 5. Passing by reference and address of operator are two different things."
        <<"\n 6. Compiler can distinguish between overloaded function with same number of arguments given their type is different."
        <<"\n 7. Inline functions: To save execution time you may put the code in the function body directly inline with the code\n\t in the calling program. Instead of jumping to the function, the inline code is placed."
        <<"\n 8. Scope and storage class: "
        <<"\n\t-> variable - local scope - visible only in the block"
        <<"\n\t-> variable - file scope - visible throughout the file"
        <<"\n\t-> variable - automatic storage class - exist during the lifetime of a function in which they are defined"
        <<"\n\t-> variable - static storage class - exist during the lifetime of the program"
        <<"\n-- A local variable is not created until a function is defined."
        <<"\n-- A lifetime of a variable is the time period between its creation and destruction."
        <<"\n 9. Returning by reference: ";
    setx(a)=92;
    cout<<x;

    cout<<"\n 10. \t\t\tLocal\t\tStatic Local\t\tGlobal"<<endl
                <<" Visibility"<<setw(20)<<"function"<<setw(20)<<"function"<<setw(20)<<"file"<<endl
                <<" Lifetime"<<setw(22)<<"function"<<setw(20)<<"program"<<setw(20)<<"program"<<endl
                <<" Initialized value"<<setw(20)<<"not initialized"<<setw(11)<<"0"<<setw(20)<<"0"<<endl
                <<" Storage"<<setw(16)<<"stack"<<setw(30)<<"statically allocated"<<setw(30)<<"statically allocated"<<endl
                <<" Purpose"<<setw(23)<<"used by single fn"<<setw(20)<<"same as local,"<<setw(25)<<"used by many fns"<<endl
                <<"\t\t\t\t   but retains value \n\t\t\t\t   when terminated";
}
int& setx(int a=30){
    return x;
}

inline void passbyreference( int& a ){ //Inline function with arguments passed by reference
    cout<<"\n 4. passby reference:"<<a++;
}
//------------------------------------------------------------------------------------------------------









//----------------------------------- OBJECTS AND CLASSES ----------------------------------------------
class counter{
private:
    unsigned int count;
    int values;
    char name;
    static int count2; //declaration for static var

public:
    counter(): count(0), values(0), name('a') //Initializer list
        {/*Empty body*/}
    counter(unsigned int a, int v,char n)
        {}
    ~counter() //Destructor deallocates memory
        {/*Empty body*/}

    counter max_count(const counter&) const;
    void func1(int);
};

void counter::func1(int a){ //:: - scope resolution operator
    cout<<"\n\t "<<a;
}

int counter::count2=0; // definition of static var

counter counter::max_count(const counter& c) const{
    counter c1;
//    count=100;  //This shows an error
    return c1;
}

void objandclass(){
    cout<<"\n 1. An object is called an instance of a class."
        <<"\n 2. The definition of a class is called specifier."
        <<"\n 3. Member functions defined within the class definition are inline functions."
        <<"\n 4. Constructors are used for automatic initialization of objects and have no return type."
        <<"\n 5. Destructors are functions which are automatically called when an object is destroyed."
        <<"\n 6. Unlike classes, Structures have public by default."
        <<"\n 7. In classes, data members are alloted different memory for different objects. Not true for member functions.";


    counter c1(1,1,'b');
    counter c2(c1); //default copy ctr gets invoked
    counter c3=c1;  //default copy ctr gets invoked

    cout<<"\n 8. STATIC CLASS DATA: Same memory shared by all objects of class."
        <<"\n 9. Const Member functions cannot modify the data  members of a class."
        <<"\n 10. Only const member functions can be called for const objects of classes.";
}
//------------------------------------------------------------------------------------------------------










//------------------------------------ ARRAYS AND STRINGS ----------------------------------------------
void ArrayStrings(){
    cout<<"\n 1. Another way of implementing arrays is vectors in STL.";

    int n,m;
    n=m=10;

    int arr[n][m];

    srand(time(NULL)); //Seeding random numbers with time
    int k = rand()%52;
    cout<<endl<<' '<<k;

    //C-Strings
    char str[10]="anshankul";                         // Each char occupies 1byte of memory
    //str={'a','n','s','h','a','n','k'};     Not used anymore, used in C
    cout<<endl<<" "<<str;
    char str1[]="Can yo shiz";
    cout<<endl<<" "<<str1;

    char str2[100];
    cout<<"\n Enter a string: ";
    cin>>str1;                                  // Doesn't consider space, breaks off at space
    cout<<endl<<" "<<str1<<"\n Again: ";
    cin.get(str2,100);                          // Considers spaces
    cout<<endl<<" "<<str2;

    cout<<"\n Enter a string: ";
    cin.get(str2,100,'#');                      //Setting a delimiter
    cout<<endl<<" "<<str2<<strlen(str2);
    strcpy(str1,str2);
    cout<<endl<<" "<<str1<<strlen(str1);


    //Array of Strings
    char str3[7][10]={"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday"};
    for(int i=0;i<7;i++){
        cout<<endl<<" "<<str3[i];
    }


    //The standard C++ String class
    string s1("ansh ankul op");
    string s2 = "beast";
    string s3;

    s3=s2;
    cout<<endl<<" "<<s3;
    s3+=s2;
    cout<<endl<<" "<<s3;
    s1.swap(s2);
    cout<<endl<<" "<<s2;

    cout<<endl<<" Enter your name: ";
    getline(cin, s1);                          // Reads embedded blanks
    string greeting(" hi, ");
    greeting+=s1;
    cout<<endl<<" "<<greeting;
    cout<<endl<<" Enter multiple lines: ";
    getline(cin,s1,'$');


    n=s1.find("ansh");
    cout<<endl<<" "<<n;
    n=s1.find_first_of("ank");
    cout<<endl<<" "<<n;
    n=s1.find_first_not_of("aeiouAEIOU");
    cout<<endl<<" First Consonant: "<<n;



    s1="Quick! Send for count Graystone.";
    s2="Lord";
    s3="Don't";
    cout<<endl<<" "<<s1;
    cout<<endl<<" "<<s2;
    cout<<endl<<" "<<s3;
    s1.erase(0,6);                    //remove "Quick!"
    s1.replace(9,5,s2);               //replace "count" with "lord"
    s1.replace(0,1,"s");              //replace "S" with "s"
    s1.insert(0,s3);                  //insert "Don't" at the beginning
    s1.erase(s1.size()-1,1);          //remove "."
    /*s1.append(3,"!");*/             //append "!!!"
    cout<<endl<<" "<<s1;

    string name1="Ansh";
    string name2="Ansh2";
    n= name1.compare(0,4,name2,0,4);
    cout<<"\n The first 4 letters of your name: ";
    if(n==0)
        cout<<" match";
    else if(n<0)
        cout<<" come before";
    else
        cout<<" come after";
    cout<<"\n\t"<<name1.substr(0,4);

    //str.length();
    //str.copy(array,wlen,0);
    //str.at(j);                            exception if out of bounds
    //str.capacity()
    //str.max_size()


    //A user defined string class
}

class String{
private:
    enum {SZ=100};
    char str[SZ];
public:
    String()
        {str[0]='\0';}
    String(char s[])
        {strcpy(str,s);}
    void display(){
        cout<<str;
    }
    void concat(String s4){
        if(strlen(str)+strlen(s4.str)<SZ)
            strcat(str, s4.str);
        else
            cout<<"\n String too long";
    }

    String operator+ (String ss) const{             // Operator Overloading: Concatenating strings
        String temp;
        if(strlen(str)+strlen(ss.str)<SZ)
        {
            strcpy(temp.str,str);
            strcat(temp.str,ss.str);
        }
        else
        {
            cout<<"\n String Overflow";
            exit(1);
        }
        return temp;
    }

    bool operator == (String ss) const              // Operator Overloading: Comparing strings
    {
        return(strcmp(str,ss.str)==0)? true:false;
    }
};
//------------------------------------------------------------------------------------------------------








//----------------------------------- OPERATOR OVERLOADING ---------------------------------------------
class Counter{
private:
    unsigned int count;
public:
    Counter(): count(0)
        {}

    Counter(int c): count(c)    //Constructor for unnamed count
        {}

    unsigned int get_count()
        {return count;}

    Counter operator ++ (){     //Overloading unary operators (Prefix ++)
        ++count;
        //Counter temp;
        //temp.count =count;
        //return temp;              Better way to do this:
        return Counter(count);
    }

    Counter operator ++ (int){      // Postfix ++ : Here, 'int' is not related to traditional integer variable.
        return Counter(count++);    // 'int' is used to indicate to the compiler that this operator is for postfix
    }

    Counter operator + (Counter) const;         //Arithmetic operator
    bool operator < (Counter) const;            //Relational operator

    //Conversions between objects and basic types
    operator float() const
    {
        float cnt=0;
        cnt += static_cast<float>(count);
        return cnt;
    }
};

Counter Counter::operator + (Counter c1) const{          //add this count to c1
    int c= count + c1.get_count();
    return Counter(c);
}

bool Counter::operator < (Counter c1) const{
    return (count< c1.get_count())?true:false;
}


//Array class
class safearray
{
    int arr[100];
    char str[100];
public:
    // Two ways to put and get functions for inputing and outputting from an array class
    // 1. Single access function returning by reference
    int& access(int n)
    {
        if (n<0||n>=100)
        {
            cout<<"\n Index out of bounds! ";
            exit(1);
        }
        return arr[n];
    }
    // 2. Overloaded [] operator returning by reference
    int& operator [](int n)
    {
        if (n<0||n>=100)
        {
            cout<<"\n Index out of bounds! ";
            exit(1);
        }
        return arr[n];
    }


    operator char*()
    {
        return str;
    }
};


void OpOverloading(){
    Counter c1,c2;
    cout<<endl<<" "<<c1.get_count();
    ++c1;
    c2= ++c1;
    c2++;
    cout<<endl<<" "<<c2.get_count();

    cout<<endl<<' '<< (c1+c2).get_count();       //The argument on the left side of the operator is the object of which the operator is a member(c1)

    cout<<endl<<' '<< (c1<c2)<<endl;

    float f = static_cast<float>(c1);            //Object -> float(basic type)
    f = c2;


    safearray arr;
    arr.access(0)=10;
    arr.access(1)=20;
    arr.access(2)=30;
    arr.access(3)=40;
    cout<<endl<<" "<<arr.access(0)
        <<endl<<" "<<arr.access(1)
        <<endl<<" "<<arr.access(2)
        <<endl<<" "<<arr.access(3);

    arr[0]=11;
    arr[1]=12;
    cout<<endl<<" "<<arr[0]
        <<endl<<" "<<arr[1];

    /*safearray s2;
    s2.get_str="ansh ankul";                       //String -> C-string
    cout<< static_cast<char*>(s2);*/

    cout<<"\n ->Explicit keyword is used to avoid implicit conversion in constructors."
        <<"\n ->Mutable keyword is used to change const object data which is otherwise not possible.\n\t \'mutable int size;\' is changable for a const object of the same class.";
}

//------------------------------------------------------------------------------------------------------










//-------------------------------- STANDARD TEMPLATE LIBRARY -------------------------------------------
bool alpha_comp(char* s1, char* s2)
{
    return ((strcmp(s1,s2)<0)? true:false);
}

bool isansh(string name)
{
    return name == "ansh";
}

void everyoneansh(string name)
{
    name="ansh";
}

void STL()
{
    cout<<"\n 1. STL is composed of 3 major entities: containers, algorithms and iterators."
        <<"\n\t ->STL containers are implemented by template classes, so they can be easily customized to hold different kinds of data."
        <<"\n\t ->Algorithms are procedures that are applied on containers to process their data in many ways."
        <<"\n\t ->Iterators are a generalization of the concept of pointers: they point to elements in containers."

        <<"\n\n 2. CONTAINERS:"
        <<"\n\t-> Way to store data"
        <<"\n\t-> 7 basic types of containers and 3 derived containers from basic kinds"
        <<"\n\t-> Two main categories: Sequence and associative"
        <<"\n\t-> SEQUENCE: vector, list, deque"
        <<"\n\t-> ASSOCIATIVE: set, multiset, map, multimap"
        <<"\n\t-> Specialized containers dericed from sequnece containers: stack, queue, priority queue";

/*      SEQUENCE CONTAINERS:
        1. Vector: relocating expandable array
        2. List: Doubly ended list
        3. Deque: Like vector but can be accessed at either end
*/
    list<int> departure_list;
    deque<int> departure_list1;



/*
        ASSOCIATIVE CONTAINERS:
        1. Set: Stores only thee key objects. Only one key of each value is allowed.
        2. Multiset: Stores only the key objects. Multiple keys of each value is allowed.
        3. Map: Associates key object with value object.
        4. Multimap: Associates key object with value object. Multiple keys allowed.
*/

    set<int> intset;

/*
        MEMBER FUNCTIONS COMMON TO ALL CONTAINERS:
        1. size(): returns no of items  in container
        2. empty(): returns true if cont empty
        3. max_size(): returns size of largest possible container
        4. begin(): returns an iterator at the start of the container
        5. end(): returns an iterator at the end of the container
        6. rbegin(): returns an reverse iterator to the end of the container, used for backward iteration
        7. rend(): returns an reverse iterator to the start of the container, used to end backward iteration


        CONTAINER ADAPTERS
        It is possible to create special purpose containers from normal containers mentioned previosuly using container adapters.

        ADAPTER BASED CONAINERS:
        1. stack: can be implemented as vector, list or deque. push and pop only at one end.
        2. queue: CBI as list or deque. Insert at one end and remove at other.
        3. priority queue: CBI as vector or deque. Insert in random order at one end, remove in sorted order from other end.
*/
    stack<deque<int>> astack;



/*
        ALGORITHMS
        1. find             returns first element equal to aspecified value
        2. count            counts no of elements that have a specified value
        3. equal            compares 2 conts and returns true if all elements are equal
        4. search           looks for sequence of values in one container from another cont
        5. copy             copies a sequence of values from one cont to another
        6. swap             exchanges a value in one location with a value in another
        7. iter_swap        exchanges a seq of values in one location with a seq of values in another
        8. fill             copies a value into a seq of locations
        9. sort             sorts
        10. merge           combines 2 sorted ranges
        11. accumulate      returns the sum of elements in a given range
        12. for_each        executes a specified function for each element  in the container
*/


    int arr[8]={12,123,32,223,121,32,75,3};

    int* ptr;
    ptr= find(arr,arr+8, 32);                               //find
    cout<<"\n\n\t "<<ptr-arr;

    int n= count(arr,arr+8,32);                             //search
    cout<<"\n\t "<<n;

    sort(arr,arr+8);                                        //sort

    int source[]={11,44,33,11,22,33,11,22,44};
    int pattern[]={11,22,33};
    ptr= search(source, source+9, pattern,pattern+3);       //search

    int dest[12];
    merge(source, source+9, pattern, pattern+3, dest);      //merge

    //USING FUNCTION OBJECTS
    sort(arr,arr+8, greater<>());  //Sort algo usually sorts in ascending order but using greater fn obj it reverses the order of sorting
    cout<<endl;
    for(int j=0;j<8;j++)
        cout<<" "<<arr[j];

    //USER WRITTEN FUNCTIONS IN PLACE OF FUNCTION OBJECTS
    char* names[]={"ansh","ankul","aarna","sakshi","bob","shalini"};
    sort(names,names+6, alpha_comp);

    //ADDING _if TO ALGORITHMS
    char** ptr1;
    ptr1= find_if(names, names+6, isansh);


    //for_each() Algo
    for_each(names,names+2, everyoneansh);

    //Transform algorithm
    //transform(names, names+2, dest2,everyoneansh);
    //Similar to for each


/*
        PROBLEMS WITH STL
        1. Hard to find errors
        2. Precompilation of header files
        3. STL may generate spurious compiler warnings.
*/


//------------------SEQUENCE CONTAINERS------------------------------
// 1. VECTORS
    vector<int> v;

    v.push_back(10);   // put values at the end of array
    v.push_back(20);
    v[0]=1;
    v[1]=2;
    n=v.size();
    n=v.max_size();

    double a[]={1.2,2,3,4.3};
    vector<int> v1(arr,arr+4);
    vector<int> v2(4);                  //Makes blank array of size 4
    v1.swap(v2);
    while(!v2.empty())
    {
        cout<< v2.back()<<" ";          //display the last element
        v2.pop_back();                  //pop the last element
    }


    v.insert(v.begin()+2,115);          //insert 115 at element 2
    v.erase(v.begin()+2);

// 2. Lists
    /*
     Member functions used:
        push_front()
        front()
        pop_front()
        reverse()
        merge() -- list1.merge(list2)
        unique()
    */
// 3. Deques
    /*
     Member functions used:
        push_back()
        push_front()
        front()
        back()
        pop_front()
        pop_back()
NOTE - [] operator is used for both lists and deques.
    */

/*
------------------------------ ITERATORS ---------------------------------

        ITERATOR TYPE       READ/WRITE      Can be saved?       DIRECTION       ACCESS
        Random access       RW              yes             forward and back    random
        Bidirectional       RW              yes             forward and back    linear
        Forward             RW              yes                 forward         linear
        Output              W               no                  forward         linear
        Input               R               no                  forward         linear

        FUNTIONS:
        ITERATOR TYPE       step forward      read     write       step back       random access
        Random access           x               x       x               x               x
        Bidirectional           x               x       x               x
        Forward                 x               x       x
        Output                  x                       x
        Input                   x               x
    |
    | Sophistication increases
    V

        ITERATOR TYPE       Vector      List         Deque         Set      Multiset       Map     Multimap
        Random access           x                       x
        Bidirectional           x         x             x           x           x           x           x
        Forward                 x         x             x           x           x           x           x
        Output                  x         x             x           x           x           x           x
        Input                   x         x             x           x           x           x           x



                        INPUT           OUTPUT          FORWARD         BIDIRECTIONAL           RANDOM ACCESS
        find                x
        count               x
        equal
        copy                x               x
        sort                                                                                           x
        merge               x               x
        accumulate          x
        for_each            x
        replace                                             x
        unique                                              x
        reverse                                                                 x
        nth_element                                                                                     x


        NOTE- Random access can be used with any algo but the sophistication increases moving onto other iterators.
        for eg- Random access - reverse()  OK!
                Bidirectional - sort()     Not OK!
*/


    int b[]={2,3,4,1};
    list<int> theList(b,b+4);
    list<int>::iterator iter;                                       //Iterator to list of ints

    for(iter= theList.begin();iter!=theList.end();iter++)
    {
        cout<<*iter<<" ";                                           //Data access
        *iter = 12;                                                 //Data Insertion
    }

    iter = find(theList.begin(), theList.end(),12);                 //iterators and algos

//SPECIALIZED ITERATORS
//  1. Reverse iterator

    list<int>::reverse_iterator revit;
    revit = theList.rbegin();
    while(revit!= theList.rend()){}

//  2. Insert Iterators
//      -> back_inserter
//      -> front_insertor
//      -> inserter - inserts new items at specified locations

    deque<int> d1(arr, arr+4);
    deque<int> d2(arr, arr+4);
    copy(d1.begin(),d1.end(), back_inserter(d2));
    copy(d1.begin(),d1.end(), front_inserter(d2));
    copy(d1.begin(),d1.end(), inserter(d2, d2.begin()));


//ASSOCIATIVE CONTAINERS
// 1. Sets and Multisets
    set<string, less<string>> nameset(names, names+5); //type of object, function object used to order the members of the set
    set<string, less<string>>::iterator it;

    nameset.insert("Rana");
    nameset.erase("ansh");
    n= nameset.size();
    /* begin()
        end()
    */
    it = nameset.find("ansh");
    if(it == nameset.end())
        cout<<"\n name is not in the set";
    else
        cout<<endl<<*it;
    cout<<endl;

    it= nameset.lower_bound("aaaa");            // Member functions only for associative containers
    while(it != nameset.upper_bound("bbb"))
        cout<<"\n "<<*it++;

// 2. Maps and Multimaps
    string states[] = {"delhi","mumbai","UP","UK","MP"};
    int pops[] = {470,2389,230,893,231};
    map<string, int , less<string>> namemap; //type of object, function object used to order the members of the set
    map<string, int , less<string>>::iterator it1;

    string name;
    int pop;
    for(int i=0;i<5;i++)
    {
        name= states[i];
        pop= pops[i];
        namemap[name]=pop;
    }

    pop=namemap[name];
    for (it1 = namemap.begin();it1!= namemap.end();it1++)
        cout<<endl<<(*it1).first <<" "<<(*it1).second;

/*
        FUNCTION OBJECT                 RETURN VALUE
          T=  plus(T,T)                     x+y
          T=  minus(T,T)                    x-y
          T=  times(T,T)                    x*y
          T=  divide(T,T)                   x/y
          T=  modulus(T,T)                  x%y
          T=  negate(T)                     -x
          bool=  equal_to(T,T)              x==y
          bool=  not_equal_to(T,T)          x!=y
          bool=  greater(T,T)               x>y
          bool=  less(T,T)                  x<y
          bool=  greater_equal(T,T)         x>=y
*/
}
//------------------------------------------------------------------------------------------------------













int main()
{
    char ans;
    int ch;
    do{
            cout<<"Enter which chapter notes you wanna view:\n 1. C++ Basics\n 2. Loops \n 3. Structures and Enumerations"
                <<"\n 4. Functions \n 5. Objects and classes\n 6. Arrays and Strings \n 7. Operator overloading \n 8. Inheritance\n 9. Pointers \n"
                <<" 10. Virtual Functions\n 11. Streams and files\n 12. Multifile programs\n 13. Templates and Exceptions\n 14. Standard Template Library\n"
                <<" 15. Object Oriented Software Development\n\n";

            cin>>ch;
            switch(ch){
                case 1: basics();
                    break;
                case 2: loops();
                    break;
                case 3: structureEnumeration();
                    break;
                case 4: functions();
                    break;
                case 5: objandclass();
                    break;
                case 6: ArrayStrings();
                    break;
                case 7: OpOverloading();
                    break;
                case 8: //Inheritance();
                    break;
                case 9: //Pointers();
                    break;
                case 10: //Pointers();
                    break;
                case 11: //Pointers();
                    break;
                case 12: //Pointers();
                    break;
                case 13: //Pointers();
                    break;
                case 14: STL();
                    break;
                case 15:
                    break;
            }
            cout<<"\n Do you wanna continue?(y/n)\n";
            cin>>ans;
    }while(ans=='Y'||ans=='y');
}
