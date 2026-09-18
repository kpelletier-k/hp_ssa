#include "../include/hp_ssa_settings.h"

bool HpSsaSettings::is_valid() const{
    return true;
}

bool HpSsaSettings::parse(const sqlite_field_t& field){
    return false;
}

sqlite_field_t HpSsaSettings::dump() const{
    return {};
}

std::unique_ptr<HpSsaSettings> HpSsaSettings::parse(const std::string& value){
    // const auto json = Json::parse(value);

    // todo add validation
    return std::make_unique<HpSsaSettings>();
}