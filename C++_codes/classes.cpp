//#include <typeinfo>
#include <iostream>
#include"using.h"

#define print(v) cout<<v<<endl;

class Log
{
public:
    enum Level {
        LogLevelError = 0,  LogLevelWarn, LogLevelInfo

    };
    
private:
    Level m_loglevel = LogLevelInfo;
public:
    void SetLogLevel(Level level)
    {
        m_loglevel = level;
    }
    void Error(const char* msg)
    {
        if (m_loglevel >= LogLevelError) {
            print("[ERROR]")
                print(+msg);
        }
    }
    void Warn(const char* msg)
    {
        if (m_loglevel >= LogLevelWarn) {
            print("[WARNING]")
            print(msg);
        }
    }    
    void Info(const char* msg)
    {
        if (m_loglevel >= LogLevelInfo) {
            print("[INFORMATION]")
            print(msg);
        }
    }
};

/*
enum num : char
{
    a,b,c
    cout << typeid(a).name() << endl;
};
*/

int main() 
{
    //enum{a , b, c};

    
    Log log;
    log.SetLogLevel(log.LogLevelError);
    log.Error("hello");
    log.Warn("I'm aditya");
    log.Info("how are you");
    return 0;
}
