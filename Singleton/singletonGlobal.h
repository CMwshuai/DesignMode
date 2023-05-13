
#ifndef _SINGLETONGLOBAL_H_
#define _SINGLETONGLOBAL_H_
#include <memory>

/*全局变量饿汉模式单例类*/
class CSingletonGlobal
{
public:
    static std::shared_ptr<CSingletonGlobal> getInstance();

    void doThing();
    CSingletonGlobal();
    ~CSingletonGlobal();
    CSingletonGlobal(const CSingletonGlobal &obj)=delete;
    CSingletonGlobal& operator=(const CSingletonGlobal &obj)=delete;

private:
    static std::shared_ptr<CSingletonGlobal> m_instance;
};

#endif