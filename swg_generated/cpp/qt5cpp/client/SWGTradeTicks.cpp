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


#include "SWGTradeTicks.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {

SWGTradeTicks::SWGTradeTicks(QString json) {
    init();
    this->fromJson(json);
}

SWGTradeTicks::SWGTradeTicks() {
    init();
}

SWGTradeTicks::~SWGTradeTicks() {
    this->cleanup();
}

void
SWGTradeTicks::init() {
    market = new QString("");
    m_market_isSet = false;
    trade_date_utc = new QString("");
    m_trade_date_utc_isSet = false;
    trade_time_utc = new QString("");
    m_trade_time_utc_isSet = false;
    timestamp = 0.0;
    m_timestamp_isSet = false;
    trade_price = 0.0;
    m_trade_price_isSet = false;
    trade_volume = 0.0;
    m_trade_volume_isSet = false;
    prev_closing_price = 0.0;
    m_prev_closing_price_isSet = false;
    change_price = 0.0;
    m_change_price_isSet = false;
    ask_bid = new QString("");
    m_ask_bid_isSet = false;
    sequential_id = 0.0;
    m_sequential_id_isSet = false;
}

void
SWGTradeTicks::cleanup() {
    if(market != nullptr) { 
        delete market;
    }
    if(trade_date_utc != nullptr) { 
        delete trade_date_utc;
    }
    if(trade_time_utc != nullptr) { 
        delete trade_time_utc;
    }
    if(timestamp != nullptr) { 
        delete timestamp;
    }




    if(ask_bid != nullptr) { 
        delete ask_bid;
    }
    if(sequential_id != nullptr) { 
        delete sequential_id;
    }
}

SWGTradeTicks*
SWGTradeTicks::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGTradeTicks::fromJsonObject(QJsonObject pJson) {
    ::Swagger::setValue(&market, pJson["market"], "QString", "QString");
    
    ::Swagger::setValue(&trade_date_utc, pJson["trade_date_utc"], "QString", "QString");
    
    ::Swagger::setValue(&trade_time_utc, pJson["trade_time_utc"], "QString", "QString");
    
    ::Swagger::setValue(&timestamp, pJson["timestamp"], "SWGNumber", "SWGNumber");
    
    ::Swagger::setValue(&trade_price, pJson["trade_price"], "double", "");
    
    ::Swagger::setValue(&trade_volume, pJson["trade_volume"], "double", "");
    
    ::Swagger::setValue(&prev_closing_price, pJson["prev_closing_price"], "double", "");
    
    ::Swagger::setValue(&change_price, pJson["change_price"], "double", "");
    
    ::Swagger::setValue(&ask_bid, pJson["ask_bid"], "QString", "QString");
    
    ::Swagger::setValue(&sequential_id, pJson["sequential_id"], "SWGNumber", "SWGNumber");
    
}

QString
SWGTradeTicks::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
SWGTradeTicks::asJsonObject() {
    QJsonObject obj;
    if(market != nullptr && *market != QString("")){
        toJsonValue(QString("market"), market, obj, QString("QString"));
    }
    if(trade_date_utc != nullptr && *trade_date_utc != QString("")){
        toJsonValue(QString("trade_date_utc"), trade_date_utc, obj, QString("QString"));
    }
    if(trade_time_utc != nullptr && *trade_time_utc != QString("")){
        toJsonValue(QString("trade_time_utc"), trade_time_utc, obj, QString("QString"));
    }
    if((timestamp != nullptr) && (timestamp->isSet())){
        toJsonValue(QString("timestamp"), timestamp, obj, QString("SWGNumber"));
    }
    if(m_trade_price_isSet){
        obj.insert("trade_price", QJsonValue(trade_price));
    }
    if(m_trade_volume_isSet){
        obj.insert("trade_volume", QJsonValue(trade_volume));
    }
    if(m_prev_closing_price_isSet){
        obj.insert("prev_closing_price", QJsonValue(prev_closing_price));
    }
    if(m_change_price_isSet){
        obj.insert("change_price", QJsonValue(change_price));
    }
    if(ask_bid != nullptr && *ask_bid != QString("")){
        toJsonValue(QString("ask_bid"), ask_bid, obj, QString("QString"));
    }
    if((sequential_id != nullptr) && (sequential_id->isSet())){
        toJsonValue(QString("sequential_id"), sequential_id, obj, QString("SWGNumber"));
    }

    return obj;
}

QString*
SWGTradeTicks::getMarket() {
    return market;
}
void
SWGTradeTicks::setMarket(QString* market) {
    this->market = market;
    this->m_market_isSet = true;
}

QString*
SWGTradeTicks::getTradeDateUtc() {
    return trade_date_utc;
}
void
SWGTradeTicks::setTradeDateUtc(QString* trade_date_utc) {
    this->trade_date_utc = trade_date_utc;
    this->m_trade_date_utc_isSet = true;
}

QString*
SWGTradeTicks::getTradeTimeUtc() {
    return trade_time_utc;
}
void
SWGTradeTicks::setTradeTimeUtc(QString* trade_time_utc) {
    this->trade_time_utc = trade_time_utc;
    this->m_trade_time_utc_isSet = true;
}

SWGNumber*
SWGTradeTicks::getTimestamp() {
    return timestamp;
}
void
SWGTradeTicks::setTimestamp(SWGNumber* timestamp) {
    this->timestamp = timestamp;
    this->m_timestamp_isSet = true;
}

double
SWGTradeTicks::getTradePrice() {
    return trade_price;
}
void
SWGTradeTicks::setTradePrice(double trade_price) {
    this->trade_price = trade_price;
    this->m_trade_price_isSet = true;
}

double
SWGTradeTicks::getTradeVolume() {
    return trade_volume;
}
void
SWGTradeTicks::setTradeVolume(double trade_volume) {
    this->trade_volume = trade_volume;
    this->m_trade_volume_isSet = true;
}

double
SWGTradeTicks::getPrevClosingPrice() {
    return prev_closing_price;
}
void
SWGTradeTicks::setPrevClosingPrice(double prev_closing_price) {
    this->prev_closing_price = prev_closing_price;
    this->m_prev_closing_price_isSet = true;
}

double
SWGTradeTicks::getChangePrice() {
    return change_price;
}
void
SWGTradeTicks::setChangePrice(double change_price) {
    this->change_price = change_price;
    this->m_change_price_isSet = true;
}

QString*
SWGTradeTicks::getAskBid() {
    return ask_bid;
}
void
SWGTradeTicks::setAskBid(QString* ask_bid) {
    this->ask_bid = ask_bid;
    this->m_ask_bid_isSet = true;
}

SWGNumber*
SWGTradeTicks::getSequentialId() {
    return sequential_id;
}
void
SWGTradeTicks::setSequentialId(SWGNumber* sequential_id) {
    this->sequential_id = sequential_id;
    this->m_sequential_id_isSet = true;
}


bool
SWGTradeTicks::isSet(){
    bool isObjectUpdated = false;
    do{
        if(market != nullptr && *market != QString("")){ isObjectUpdated = true; break;}
        if(trade_date_utc != nullptr && *trade_date_utc != QString("")){ isObjectUpdated = true; break;}
        if(trade_time_utc != nullptr && *trade_time_utc != QString("")){ isObjectUpdated = true; break;}
        if(timestamp != nullptr && timestamp->isSet()){ isObjectUpdated = true; break;}
        if(m_trade_price_isSet){ isObjectUpdated = true; break;}
        if(m_trade_volume_isSet){ isObjectUpdated = true; break;}
        if(m_prev_closing_price_isSet){ isObjectUpdated = true; break;}
        if(m_change_price_isSet){ isObjectUpdated = true; break;}
        if(ask_bid != nullptr && *ask_bid != QString("")){ isObjectUpdated = true; break;}
        if(sequential_id != nullptr && sequential_id->isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}
