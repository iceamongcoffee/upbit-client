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
#pragma once

#include "SwaggerBaseModel.h"

namespace Swagger 
{

/*
 * SwaggerWithdrawCoin
 *
 * 
 */
class SWAGGER_API SwaggerWithdrawCoin : public Model
{
public:
    virtual ~SwaggerWithdrawCoin() {}
	bool FromJson(const TSharedPtr<FJsonObject>& JsonObject) final;
	void WriteJson(JsonWriter& Writer) const final;

	/* 입출금 종류 */
	TOptional<FString> Type;
	/* 출금의 고유 아이디 */
	TOptional<FString> Uuid;
	/* 화폐를 의미하는 영문 대문자 코드 */
	TOptional<FString> Currency;
	/* 출금의 트랜잭션 아이디 */
	TOptional<FString> Txid;
	/* 출금 상태 */
	TOptional<FString> State;
	/* 출금 생성 시간 */
	TOptional<FString> CreatedAt;
	/* 출금 완료 시간 */
	TOptional<FString> DoneAt;
	/* 출금 금액/수량 */
	TOptional<FString> Amount;
	/* 출금 수수료 */
	TOptional<FString> Fee;
	/* 원화 환산 가격 */
	TOptional<FString> KrwAmount;
	/* 출금 유형 - default : 일반출금 - internal : 바로출금  String  */
	TOptional<FString> TransactionType;
};

}