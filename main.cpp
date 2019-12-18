#include<iostream>
#include<stack>

using namespace std;

//Create a list based input

struct Node
{
   int data;
   struct Node *next;
};

Node *gHead = NULL;

void reverseNodesOnPos()
{
    int i =1;
    Node *temp = gHead;
    int pos;
    cout<<"Enter the Position"<<endl;
    cin>>pos;
    while(i<pos)
    {
        temp = temp->next;
        i++;
    }

    Node *JointNode = temp->next;
    cout<<"Joint node value"<<JointNode->data<<endl;
    temp->next = NULL;

    Node *prev1 = NULL;
    Node *nextlevel= NULL;

    Node *cur = gHead;

    //reverse the 1st set list
    while(cur != NULL)
    {
        nextlevel = cur->next;
        cur->next = prev1;
        prev1 = cur;
        cur = nextlevel;
    }
    cout<<"prev1-data"<<prev1->data<<endl;
    gHead = prev1;
    cur = gHead;
    while(cur != NULL)
    {
        cout<<"cur data"<<cur->data<<endl;
        cur = cur->next;
    }
//    cur->next = JointNode;
    cur->next = JointNode;

    cout<<"Joined data=="<<JointNode->data<<endl;
}

Node *reverList()
{
    Node *cur = gHead;
    Node *prev = NULL;
    Node *next = NULL;

    while(cur != NULL)
    {
        next = cur->next;
        cur->next = prev;
        prev = cur;
        cur = next;
    }
    return prev;
}

void removeNthNodeFromEnd()
{
    Node *first, *second;
    int nth;

    cout<<"N th node"<<endl;
    cin>>nth;
    first = second = gHead;
    int i = 0;
    while(i<=nth)
    {
        first = first->next;
        //nth--;
        i++;
    }
    cout<<"first node"<<first->data<<endl;
    //first reaches till nth position
    while(first != NULL)
    {
        first = first->next;
        second = second->next;
    }

    {
        Node *dummy = second->next;
        cout<<"Dummy Node"<<dummy->data<<endl;

        second->next = second->next->next;
        delete dummy;
    }
}

//10 9 8 7 6 5 4 3 2 1

Node *createNodes(int num)
{
   Node *temp;
   Node *temp1;

    while(num > 0)
    {
        if(gHead == NULL)
        {
            gHead = new Node;
            gHead->data = num;
            gHead->next = NULL;
            temp1 = gHead;
        }
        else
        {
            temp = new Node;
            temp->data = num;
            temp1->next = temp;
            temp1 = temp1->next;
        }
        num--;
    }
    return gHead;
}

void display()
{
   Node *t1 = gHead;

   cout<<"Output as follows..."<<endl;
   while(t1 != NULL)
   {
       cout<<t1->data<<endl;
       t1 = t1->next;
   }
}

void arrayFunc(int *arr, int num)
{
    int i =0;
    while(i<num)
    {
        cout<<*(arr+i)<<endl;
        i++;
    }



}

char *strrev(char *str)
{
    char *temp = str;

    while(str != NULL)
    {

    }
}

// "1234" ==> 1234
void my_atoi(char *str)
{
    int res = 0;
    for(int i =0; str[i] != '\0'; i++)
    {
        res = (res*10) + str[i] - '0';
    }
    cout<<"Result integer= "<<res<<endl;
}


// 1234 ==> "1234"
void my_itoa(int num)
{
    stack<char>st;

    string ss="";
    int x;
    char ii = '0';
    while(num > 0)
    {
        x = num%10;
        char ii ='0';
        ii +=x;
        //ss +=ii;
        num = num/10;
        st.push(ii);
    }
    int st_size = st.size();
    string res = "";
    while(st_size > 0)
    {
        res += st.top();
        st.pop();
        st_size--;
    }
    //char *rev = strrev(ss);
    cout<<"revs string= "<<res<<endl;
}

//Sub Diagronal print
void printSubDiagonalMatrix()
{
    int aa[4][4] = {{1,2,3,4},
                    {5,6,7,8},
                    {9,7,6,5},
                    {11,22,33,44}
                 };

    //array - sub diagonal i = j+1
    cout<<"Sub Diagonal..."<<endl;
    for(int i = 1;i<4;i++)
    {
        cout<<aa[i][i-1]<<endl;
    }
}

void testFunc()
{
    int a = 32, *ptr = &a;
    char ch = 'A', &cho = ch;
    cout<<"1. a= "<<a<<" ch= "<<ch<<" cho = "<<cho<<endl;
    cho +=a; //adress+32
    cout<<"cho = "<<cho<<endl;
    *ptr +=ch; //a = a+A

    cout<<"2. a= "<<a<<" ch= "<<ch<<" cho = "<<cho<<endl;
}


int main()
{
   int i;
   int num;
   //int temp[] = "";

   cout<<"Array size"<<endl;
   cin>>num;
   cout<<"Enter array elements"<<endl;

   int *temp = new int[num];
   //int temp[num];
   i = 0;
   while(i<num)
   {
       cin>>temp[i];
       i++;
   }
   //i = 0;
   cout<<"Array output"<<endl;
   arrayFunc(temp, num);
   //printSubDiagonalMatrix();

   //int num1;// = 1234;
   //cout<<"Enter the itoa value"<<endl;
   //cin>>num1;
   //my_itoa(num1);

   my_atoi("12345");
}
/*
int main()
{
   int num = 0;

   cout<<"Enter no.of nodes wanted"<<endl;
   cin>>num;

   gHead = createNodes(num);

   display();

   //reverse list
   Node *temp = reverList();

   cout<<"\nReverse List..."<<endl;
   while(temp != NULL)
   {
       cout<<temp->data<<endl;
       temp = temp->next;
   }
   // reverse from position
   reverseNodesOnPos();

   t1 = gHead;
   while(t1 != NULL)
   {
       cout<<t1->data<<endl;
       t1 = t1->next;
   }
    //remove from Nth node from end
    removeNthNodeFromEnd();
    display();
   return 0;
}
*/
