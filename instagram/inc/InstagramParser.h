#include <string>
#include <json/json.h>
#include "MediaEntries.h"
#include "AuthorizationToken.h"
#include "UserInfo.h"
#include "UsersInfo.h"
#include "RelationshipInfo.h"

namespace Instagram{

class InstagramParser{
public:
    InstagramParser();
    InstagramParser(const InstagramParser& instagram_parser) = delete;
    InstagramParser(InstagramParser&& instagram_parser) = delete;

    AuthorizationToken parse_auth_token(const std::string& json);
    MediaEntries parse_media_entries(const std::string& json);
    UserInfo parse_user_info(const std::string& json);
    UsersInfo parse_users_info(const std::string& json);
    RelationshipInfo parse_relationship_info(const std::string& json);
    std::string get_error(const std::string& json); 
private:
    Json::Reader reader;
}; 

}
