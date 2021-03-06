/* 
 * Upbit Open API
 *
 * ## REST API for Upbit Exchange - Base URL: [https://api.upbit.com] - Official Upbit API Documents: [https://docs.upbit.com] - Official Support email: [open-api@upbit.com] 
 *
 * OpenAPI spec version: 1.0.0
 * Contact: ujhin942@gmail.com
 * Generated by: https://github.com/swagger-api/swagger-codegen.git
 */

/// AskAccount : 매도 시 사용하는 화폐의 계좌 상태

#[allow(unused_imports)]
use serde_json::Value;

#[derive(Debug, Serialize, Deserialize)]
pub struct AskAccount {
  /// 화폐를 의미하는 영문 대문자 코드
  #[serde(rename = "currency")]
  currency: Option<String>,
  /// 주문가능 금액/수량
  #[serde(rename = "balance")]
  balance: Option<String>,
  /// 주문 중 묶여있는 금액/수량
  #[serde(rename = "locked")]
  locked: Option<String>,
  /// 매수평균가
  #[serde(rename = "avg_buy_price")]
  avg_buy_price: Option<String>,
  /// 매수평균가 수정 여부
  #[serde(rename = "avg_buy_price_modified")]
  avg_buy_price_modified: Option<bool>,
  /// 평단가 기준 화폐
  #[serde(rename = "unit_currency")]
  unit_currency: Option<String>
}

impl AskAccount {
  /// 매도 시 사용하는 화폐의 계좌 상태
  pub fn new() -> AskAccount {
    AskAccount {
      currency: None,
      balance: None,
      locked: None,
      avg_buy_price: None,
      avg_buy_price_modified: None,
      unit_currency: None
    }
  }

  pub fn set_currency(&mut self, currency: String) {
    self.currency = Some(currency);
  }

  pub fn with_currency(mut self, currency: String) -> AskAccount {
    self.currency = Some(currency);
    self
  }

  pub fn currency(&self) -> Option<&String> {
    self.currency.as_ref()
  }

  pub fn reset_currency(&mut self) {
    self.currency = None;
  }

  pub fn set_balance(&mut self, balance: String) {
    self.balance = Some(balance);
  }

  pub fn with_balance(mut self, balance: String) -> AskAccount {
    self.balance = Some(balance);
    self
  }

  pub fn balance(&self) -> Option<&String> {
    self.balance.as_ref()
  }

  pub fn reset_balance(&mut self) {
    self.balance = None;
  }

  pub fn set_locked(&mut self, locked: String) {
    self.locked = Some(locked);
  }

  pub fn with_locked(mut self, locked: String) -> AskAccount {
    self.locked = Some(locked);
    self
  }

  pub fn locked(&self) -> Option<&String> {
    self.locked.as_ref()
  }

  pub fn reset_locked(&mut self) {
    self.locked = None;
  }

  pub fn set_avg_buy_price(&mut self, avg_buy_price: String) {
    self.avg_buy_price = Some(avg_buy_price);
  }

  pub fn with_avg_buy_price(mut self, avg_buy_price: String) -> AskAccount {
    self.avg_buy_price = Some(avg_buy_price);
    self
  }

  pub fn avg_buy_price(&self) -> Option<&String> {
    self.avg_buy_price.as_ref()
  }

  pub fn reset_avg_buy_price(&mut self) {
    self.avg_buy_price = None;
  }

  pub fn set_avg_buy_price_modified(&mut self, avg_buy_price_modified: bool) {
    self.avg_buy_price_modified = Some(avg_buy_price_modified);
  }

  pub fn with_avg_buy_price_modified(mut self, avg_buy_price_modified: bool) -> AskAccount {
    self.avg_buy_price_modified = Some(avg_buy_price_modified);
    self
  }

  pub fn avg_buy_price_modified(&self) -> Option<&bool> {
    self.avg_buy_price_modified.as_ref()
  }

  pub fn reset_avg_buy_price_modified(&mut self) {
    self.avg_buy_price_modified = None;
  }

  pub fn set_unit_currency(&mut self, unit_currency: String) {
    self.unit_currency = Some(unit_currency);
  }

  pub fn with_unit_currency(mut self, unit_currency: String) -> AskAccount {
    self.unit_currency = Some(unit_currency);
    self
  }

  pub fn unit_currency(&self) -> Option<&String> {
    self.unit_currency.as_ref()
  }

  pub fn reset_unit_currency(&mut self) {
    self.unit_currency = None;
  }

}



