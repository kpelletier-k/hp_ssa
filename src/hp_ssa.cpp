#include "../include/hp_ssa.h"
#include <console.h>

const HpSsaSettings HpSSA::_default_settings = {};

HpSSA::HpSSA(const std::string& name, const std::string& db_file):
    BrokerRepositoryDb(name, db_file, {}, {}, {}){}

HpSSA::HpSSA(const std::string& name, const std::shared_ptr<SQLite>& db):
    BrokerRepositoryDb(name, db, {}, {}, {}){}

void HpSSA::_registered(const HpSsaSettings& settings){
    // auto field = get_if<sqlite_string>(&settings);
    // if(!field){/* todo, print error*/}

    // _settings = HpSsaSettings::parse(*field);
    // if(!_settings){/* todo, print error*/}

    // todo start polling loop
}

void HpSSA::_unregistered(){}

HpSsaSettings HpSSA::_settings_null(){return _default_settings;}

HpSsaSettings HpSSA::_settings_duplication(const std::list<HpSsaSettings>& settings_list){return settings_list.front();}

void HpSSA::_log_default_settings() const{
    Console::warning(name + ": missing settings. Please edit new field create on database." );
}

void HpSSA::_session_open(const std::shared_ptr<BrokerSession>& session){}
void HpSSA::_session_close(const std::shared_ptr<BrokerSession>& session){}