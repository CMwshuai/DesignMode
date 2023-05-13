#ifndef _SINGLETONDYNAMIC_H_
#define _SINGLETONDYNAMIC_H_

#include <iostream>
#include <atomic>
#include <mutex>

/*懒汉模式单例类*/
class CSingletonDynamic
{
public:
    static CSingletonDynamic* getInstance();

    void doThing()
    {
        std::cout << "CSingletonDynamic do thing." << std::endl;
    }

    static void deleteInstance();
private:
    CSingletonDynamic();
    ~CSingletonDynamic();
    CSingletonDynamic(const CSingletonDynamic &obj) = delete;
    CSingletonDynamic& operator=(const CSingletonDynamic &obj) = delete;
    class CRelease
    {
    public:
        ~CRelease()
        {
            CSingletonDynamic *pInstance = m_instance.load();
            if (nullptr != pInstance)
            {
                delete m_instance.load();
                m_instance.store(nullptr);
            }
        }
    };
    static CRelease releaseObj;

    static std::atomic<CSingletonDynamic*>  m_instance;
    static std::mutex   m_mutex;
};

#endif