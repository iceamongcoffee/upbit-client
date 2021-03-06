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

package io.swagger.client.model


case class Orderbook (
  // 마켓 코드
  market: Option[String] = None,
  // 호가 생성 시각
  timestamp: Option[Number] = None,
  // 호가 매도 총 잔량
  totalAskSize: Option[Double] = None,
  // 호가 매수 총량
  totalBidSize: Option[Double] = None,
  // 호가
  orderbookUnits: Option[List[OrderbookUnit]] = None
)

