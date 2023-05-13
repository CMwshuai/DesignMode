
#ifndef _SINGLETON_H_
#define _SINGLETON_H_

/*全局变量饿汉模式单例类*/
class CSingletonLocal
{
public:

    static CSingletonLocal& getInstance();
    void doThing();
private:
    CSingletonLocal();
    ~CSingletonLocal();
    CSingletonLocal(const CSingletonLocal &obj)=delete;
    CSingletonLocal& operator=(const CSingletonLocal &obj)=delete;
};

#endif