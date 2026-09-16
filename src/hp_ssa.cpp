#include "../include/hp_ssa.h"

HpSSA::HpSSA(const std::string& name, const std::string& db_file):
    BrokerRepositoryDb(name, db_file){}

void HpSSA::on_registered(){}
void HpSSA::on_unregistered(){}