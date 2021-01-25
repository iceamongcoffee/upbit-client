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
#include "SwaggerErrorInfo.h"

#include "SwaggerModule.h"
#include "SwaggerHelpers.h"

#include "Templates/SharedPointer.h"

namespace Swagger 
{

void SwaggerErrorInfo::WriteJson(JsonWriter& Writer) const
{
	Writer->WriteObjectStart();
	if (Message.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("message")); WriteJsonValue(Writer, Message.GetValue());	
	}
	if (Name.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("name")); WriteJsonValue(Writer, Name.GetValue());	
	}
	Writer->WriteObjectEnd();
}

bool SwaggerErrorInfo::FromJson(const TSharedPtr<FJsonObject>& JsonObject)
{
	bool ParseSuccess = true;

	ParseSuccess &= TryGetJsonValue(JsonObject, TEXT("message"), Message);
	ParseSuccess &= TryGetJsonValue(JsonObject, TEXT("name"), Name);

	return ParseSuccess;
}
}