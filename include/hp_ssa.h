#ifndef HP_SSA_HP_SSA_H
#define HP_SSA_HP_SSA_H

#include "hp_ssa_settings.h"

class HpSSA : public BrokerRepositoryDb<HpSsaSettings>{

public:
    explicit HpSSA(const std::string& name, const std::string& db_file = "");
    explicit HpSSA(const std::string& name, const std::shared_ptr<SQLite>& db);

protected:
    void _registered(const HpSsaSettings& settings) override;
    void _unregistered() override;
    HpSsaSettings _settings_null() override;
    HpSsaSettings _settings_duplication(const std::list<HpSsaSettings>& settings_list) override;

    void _on_session_open(const std::shared_ptr<BrokerSessionS>& session) override;
    void _on_session_close(const std::shared_ptr<BrokerSessionS>& session) override;
private:
    static const HpSsaSettings _default_settings;
    void _log_default_settings() const;

    std::unique_ptr<HpSsaSettings> _settings;
};

#endif //HP_SSA_HP_SSA_H
