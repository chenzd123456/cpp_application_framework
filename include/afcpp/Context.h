#ifndef __AFCPP_CONTEXT_H__
#define __AFCPP_CONTEXT_H__

namespace afcpp
{
    /* 这是一个上下文对象 包含了异步任务队列*/
    class Context
    {
    private:
        /* data */
    public:
        Context(/* args */);
        ~Context();
    };
    
    Context::Context(/* args */)
    {
    }
    
    Context::~Context()
    {
    }
    
} // namespace afcpp


#endif // __AFCPP_CONTEXT_H__