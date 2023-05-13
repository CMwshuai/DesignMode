#include "singletonDynamic.h"
#include <mutex>
#include <atomic>

std::atomic<CSingletonDynamic*>  CSingletonDynamic::m_instance;
std::mutex CSingletonDynamic::m_mutex;
CSingletonDynamic::CSingletonDynamic()
{
    std::cout << "create CSingletonDynamic." << std::endl;
}

CSingletonDynamic::~CSingletonDynamic()
{
    std::cout << "destory CSingletonDynamic." << std::endl;
}

void CSingletonDynamic::deleteInstance()
{
    CSingletonDynamic *pInstance = m_instance.load();
    if (nullptr != pInstance)
    {
        delete m_instance.load();
        m_instance.store(nullptr);
    }
}

CSingletonDynamic* CSingletonDynamic::getInstance()
{
    CSingletonDynamic *temp = m_instance.load(std::memory_order_relaxed);
    //确保内存不会被reorder优化
    std::atomic_thread_fence(std::memory_order_acquire); //获取内存fence
    if (nullptr == temp)
    {
        std::lock_guard<std::mutex> lock(m_mutex);
        temp = m_instance.load(std::memory_order_relaxed);
        if (nullptr == temp)
        {
            temp = new CSingletonDynamic();
            std::atomic_thread_fence(std::memory_order_release);//释放内存fence
            m_instance.store(temp, std::memory_order_relaxed);
        }
    }
    return temp;
}