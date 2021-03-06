/**
 * Upbit Open API
 * ## REST API for Upbit Exchange - Base URL: [https://api.upbit.com] - Official Upbit API Documents: [https://docs.upbit.com] - Official Support email: [open-api@upbit.com] 
 *
 * OpenAPI spec version: 1.0.0
 * Contact: ujhin942@gmail.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */

/*
 * SWGTrade.h
 *
 * 
 */

#ifndef SWGTrade_H_
#define SWGTrade_H_

#include <QJsonObject>


#include <QString>

#include "SWGObject.h"

namespace Swagger {

class SWGTrade: public SWGObject {
public:
    SWGTrade();
    SWGTrade(QString json);
    ~SWGTrade();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    SWGTrade* fromJson(QString jsonString) override;

    QString* getMarket();
    void setMarket(QString* market);

    QString* getUuid();
    void setUuid(QString* uuid);

    QString* getPrice();
    void setPrice(QString* price);

    QString* getVolume();
    void setVolume(QString* volume);

    QString* getFunds();
    void setFunds(QString* funds);

    QString* getSide();
    void setSide(QString* side);

    QString* getCreatedAt();
    void setCreatedAt(QString* created_at);


    virtual bool isSet() override;

private:
    QString* market;
    bool m_market_isSet;

    QString* uuid;
    bool m_uuid_isSet;

    QString* price;
    bool m_price_isSet;

    QString* volume;
    bool m_volume_isSet;

    QString* funds;
    bool m_funds_isSet;

    QString* side;
    bool m_side_isSet;

    QString* created_at;
    bool m_created_at_isSet;

};

}

#endif /* SWGTrade_H_ */
