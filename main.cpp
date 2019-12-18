#include <iostream>
#include<thread>
#include<mutex>

std::mutex mu;

using namespace std;

class LogFile
{
    private:
        std::mutex m_mutex;
        std::mutex m_mutex2;
        //ofstream f; // this is the common resource
    public:
        LogFile()
        {
            //f.open("log.txt");
        }
        void shared_print(string msg, int id)
        {
            // following code give dead: m_mutex will be locked by main thread , but T1 thread trying to access the same lock. vice versa.
            // to eliminate the problem we should apply the locks in the same order
            std::lock_guard<mutex> locker(m_mutex);
            std::lock_guard<std::mutex>locker2(m_mutex2);
            //f<< "From "<<msg<<": "<<id<<endl;
            cout<< msg<<": "<<id<<endl;
        }
        void shared_print2(string msg, int id)
        {
            std::lock_guard<mutex>locker(m_mutex);
            std::lock_guard<mutex> locker2(m_mutex2);
            // following order should be same as the above shared_print() locking order
            /* deadlock code
            std::lock_guard<mutex> locker2(m_mutex2);
            std::lock_guard<mutex>locker(m_mutex);
            */
            //f<< "From "<<msg<<": "<<id<<endl;
            cout<< msg<<": "<<id<<endl;
        }
        ~LogFile()
        {
             //close the file
             //f.close();
        }
};


void function1(LogFile &log)
{
    for(int i=0;i>-100;i--)
        log.shared_print("From Thread1: ",i);
}

int main()
{
    LogFile logObj;
    //Thread creation
    std::thread t1(function1, std::ref (logObj));
    for(int i=0;i<100;i++)
        logObj.shared_print2("From main: ",i);

     t1.join();

    //t1.detach();
    // To access the f stream from LogFile class, we need to create the object and access the resource from the class method.


    return 0;
}
