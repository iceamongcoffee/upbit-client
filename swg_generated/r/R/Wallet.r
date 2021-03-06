# Upbit Open API
#
# ## REST API for Upbit Exchange - Base URL: [https://api.upbit.com] - Official Upbit API Documents: [https://docs.upbit.com] - Official Support email: [open-api@upbit.com] 
#
# OpenAPI spec version: 1.0.0
# Contact: ujhin942@gmail.com
# Generated by: https://github.com/swagger-api/swagger-codegen.git


#' Wallet Class
#'
#' @field currency 
#' @field wallet_state 
#' @field block_state 
#' @field block_height 
#' @field block_updated_at 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
Wallet <- R6::R6Class(
  'Wallet',
  public = list(
    `currency` = NULL,
    `wallet_state` = NULL,
    `block_state` = NULL,
    `block_height` = NULL,
    `block_updated_at` = NULL,
    initialize = function(`currency`, `wallet_state`, `block_state`, `block_height`, `block_updated_at`){
      if (!missing(`currency`)) {
        stopifnot(is.character(`currency`), length(`currency`) == 1)
        self$`currency` <- `currency`
      }
      if (!missing(`wallet_state`)) {
        stopifnot(is.character(`wallet_state`), length(`wallet_state`) == 1)
        self$`wallet_state` <- `wallet_state`
      }
      if (!missing(`block_state`)) {
        stopifnot(is.character(`block_state`), length(`block_state`) == 1)
        self$`block_state` <- `block_state`
      }
      if (!missing(`block_height`)) {
        self$`block_height` <- `block_height`
      }
      if (!missing(`block_updated_at`)) {
        stopifnot(is.character(`block_updated_at`), length(`block_updated_at`) == 1)
        self$`block_updated_at` <- `block_updated_at`
      }
    },
    toJSON = function() {
      WalletObject <- list()
      if (!is.null(self$`currency`)) {
        WalletObject[['currency']] <- self$`currency`
      }
      if (!is.null(self$`wallet_state`)) {
        WalletObject[['wallet_state']] <- self$`wallet_state`
      }
      if (!is.null(self$`block_state`)) {
        WalletObject[['block_state']] <- self$`block_state`
      }
      if (!is.null(self$`block_height`)) {
        WalletObject[['block_height']] <- self$`block_height`
      }
      if (!is.null(self$`block_updated_at`)) {
        WalletObject[['block_updated_at']] <- self$`block_updated_at`
      }

      WalletObject
    },
    fromJSON = function(WalletJson) {
      WalletObject <- jsonlite::fromJSON(WalletJson)
      if (!is.null(WalletObject$`currency`)) {
        self$`currency` <- WalletObject$`currency`
      }
      if (!is.null(WalletObject$`wallet_state`)) {
        self$`wallet_state` <- WalletObject$`wallet_state`
      }
      if (!is.null(WalletObject$`block_state`)) {
        self$`block_state` <- WalletObject$`block_state`
      }
      if (!is.null(WalletObject$`block_height`)) {
        self$`block_height` <- WalletObject$`block_height`
      }
      if (!is.null(WalletObject$`block_updated_at`)) {
        self$`block_updated_at` <- WalletObject$`block_updated_at`
      }
    },
    toJSONString = function() {
       sprintf(
        '{
           "currency": %s,
           "wallet_state": %s,
           "block_state": %s,
           "block_height": %s,
           "block_updated_at": %s
        }',
        self$`currency`,
        self$`wallet_state`,
        self$`block_state`,
        self$`block_height`,
        self$`block_updated_at`
      )
    },
    fromJSONString = function(WalletJson) {
      WalletObject <- jsonlite::fromJSON(WalletJson)
      self$`currency` <- WalletObject$`currency`
      self$`wallet_state` <- WalletObject$`wallet_state`
      self$`block_state` <- WalletObject$`block_state`
      self$`block_height` <- WalletObject$`block_height`
      self$`block_updated_at` <- WalletObject$`block_updated_at`
    }
  )
)
