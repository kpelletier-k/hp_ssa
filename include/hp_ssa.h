#ifndef HP_SSA_HP_SSA_H
#define HP_SSA_HP_SSA_H

#include <repository/broker_repository_db.h>

class HpSSA : public BrokerRepositoryDb{

public:
    explicit HpSSA(const std::string& name, const std::string& db_file = "");

protected:
    void on_registered() override;
    void on_unregistered() override;
};

#endif //HP_SSA_HP_SSA_H
