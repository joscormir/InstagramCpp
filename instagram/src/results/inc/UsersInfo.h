#ifndef USERS_INFO_H
#define USERS_INFO_H

#include "BaseResult.h"
#include "UserInfo.h"

#include <vector>

namespace Instagram{

class UsersInfo : public BaseResult{
public:
    UsersInfo();
    UsersInfo(const UsersInfo& info);
    UsersInfo(UsersInfo&& info);

    UsersInfo(const char* err_msg);
    UsersInfo(const std::string& err_msg);

    ~UsersInfo();

    UsersInfo& operator=(const UsersInfo& info);
    UsersInfo& operator=(UsersInfo&& info);
    
    UsersInfo& operator<<(const UserInfo& info);
    UsersInfo& operator<<(UserInfo&& info);

    void add_info(const UserInfo& info);
    void add_info(UserInfo&& user_info);

    const std::vector<UserInfo>& get_users() const noexcept;
private:
    std::vector<UserInfo> users;
};

}
#endif
