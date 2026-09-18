#ifndef HP_SSA_SETTINGS_H
#define HP_SSA_SETTINGS_H

#include <repository/broker_repository_db.h>

struct HpSsaSettings : BrokerRepositoryDbSettings{

    bool is_valid() const override;

    bool parse(const sqlite_field_t& field) override;
    sqlite_field_t dump() const override;

    static std::unique_ptr<HpSsaSettings> parse(const std::string& value);
};
#endif //HP_SSA_SETTINGS_H
