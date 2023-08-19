#ifndef __AFCPP_IAPPLICATION_H__
#define __AFCPP_IAPPLICATION_H__

namespace afcpp {
class IApplication {
  private:
    /* data */
  protected:
    IApplication(/* args */);
    virtual ~IApplication();
    virtual void onInit() = 0;
    virtual void onLoop() = 0;
};

IApplication::IApplication(/* args */) {}

IApplication::~IApplication() {}

} // namespace afcpp

#endif // __AFCPP_IAPPLICATION_H__