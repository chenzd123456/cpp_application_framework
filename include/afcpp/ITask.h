#ifndef __AFCPP_ITASK_H__
#define __AFCPP_ITASK_H__

#include <cstdint>

namespace afcpp {
class ITask {
protected:
    ITask(/* args */);

public:  
    virtual ~ITask();
    virtual int64_t getId() = 0;
};

ITask::ITask(/* args */) { }
ITask::~ITask() { }

} // namespace afcpp

#endif // __AFCPP_ITASK_H__