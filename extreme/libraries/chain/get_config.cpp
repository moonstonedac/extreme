/*
 * Copyright (c) 2015 Cryptonomex, Inc., and contributors.
 *
 * The MIT License
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#include <extreme/chain/get_config.hpp>
#include <extreme/chain/config.hpp>
#include <extreme/chain/protocol/types.hpp>

namespace extreme { namespace chain {

fc::variant_object get_config()
{
   fc::mutable_variant_object result;

   result[ "EXTREME_SYMBOL" ] = EXTREME_SYMBOL;
   result[ "EXTREME_ADDRESS_PREFIX" ] = EXTREME_ADDRESS_PREFIX;
   result[ "EXTREME_MIN_ACCOUNT_NAME_LENGTH" ] = EXTREME_MIN_ACCOUNT_NAME_LENGTH;
   result[ "EXTREME_MAX_ACCOUNT_NAME_LENGTH" ] = EXTREME_MAX_ACCOUNT_NAME_LENGTH;
   result[ "EXTREME_MIN_ASSET_SYMBOL_LENGTH" ] = EXTREME_MIN_ASSET_SYMBOL_LENGTH;
   result[ "EXTREME_MAX_ASSET_SYMBOL_LENGTH" ] = EXTREME_MAX_ASSET_SYMBOL_LENGTH;
   result[ "EXTREME_MAX_SHARE_SUPPLY" ] = EXTREME_MAX_SHARE_SUPPLY;
   result[ "EXTREME_MAX_PAY_RATE" ] = EXTREME_MAX_PAY_RATE;
   result[ "EXTREME_MAX_SIG_CHECK_DEPTH" ] = EXTREME_MAX_SIG_CHECK_DEPTH;
   result[ "EXTREME_MIN_TRANSACTION_SIZE_LIMIT" ] = EXTREME_MIN_TRANSACTION_SIZE_LIMIT;
   result[ "EXTREME_MIN_BLOCK_INTERVAL" ] = EXTREME_MIN_BLOCK_INTERVAL;
   result[ "EXTREME_MAX_BLOCK_INTERVAL" ] = EXTREME_MAX_BLOCK_INTERVAL;
   result[ "EXTREME_DEFAULT_BLOCK_INTERVAL" ] = EXTREME_DEFAULT_BLOCK_INTERVAL;
   result[ "EXTREME_DEFAULT_MAX_TRANSACTION_SIZE" ] = EXTREME_DEFAULT_MAX_TRANSACTION_SIZE;
   result[ "EXTREME_DEFAULT_MAX_BLOCK_SIZE" ] = EXTREME_DEFAULT_MAX_BLOCK_SIZE;
   result[ "EXTREME_DEFAULT_MAX_TIME_UNTIL_EXPIRATION" ] = EXTREME_DEFAULT_MAX_TIME_UNTIL_EXPIRATION;
   result[ "EXTREME_DEFAULT_MAINTENANCE_INTERVAL" ] = EXTREME_DEFAULT_MAINTENANCE_INTERVAL;
   result[ "EXTREME_DEFAULT_MAINTENANCE_SKIP_SLOTS" ] = EXTREME_DEFAULT_MAINTENANCE_SKIP_SLOTS;
   result[ "EXTREME_MIN_UNDO_HISTORY" ] = EXTREME_MIN_UNDO_HISTORY;
   result[ "EXTREME_MAX_UNDO_HISTORY" ] = EXTREME_MAX_UNDO_HISTORY;
   result[ "EXTREME_MIN_BLOCK_SIZE_LIMIT" ] = EXTREME_MIN_BLOCK_SIZE_LIMIT;
   result[ "EXTREME_MIN_TRANSACTION_EXPIRATION_LIMIT" ] = EXTREME_MIN_TRANSACTION_EXPIRATION_LIMIT;
   result[ "EXTREME_BLOCKCHAIN_PRECISION" ] = EXTREME_BLOCKCHAIN_PRECISION;
   result[ "EXTREME_BLOCKCHAIN_PRECISION_DIGITS" ] = EXTREME_BLOCKCHAIN_PRECISION_DIGITS;
   result[ "EXTREME_DEFAULT_TRANSFER_FEE" ] = EXTREME_DEFAULT_TRANSFER_FEE;
   result[ "EXTREME_MAX_INSTANCE_ID" ] = EXTREME_MAX_INSTANCE_ID;
   result[ "EXTREME_100_PERCENT" ] = EXTREME_100_PERCENT;
   result[ "EXTREME_1_PERCENT" ] = EXTREME_1_PERCENT;
   result[ "EXTREME_MAX_MARKET_FEE_PERCENT" ] = EXTREME_MAX_MARKET_FEE_PERCENT;
   result[ "EXTREME_DEFAULT_FORCE_SETTLEMENT_DELAY" ] = EXTREME_DEFAULT_FORCE_SETTLEMENT_DELAY;
   result[ "EXTREME_DEFAULT_FORCE_SETTLEMENT_OFFSET" ] = EXTREME_DEFAULT_FORCE_SETTLEMENT_OFFSET;
   result[ "EXTREME_DEFAULT_FORCE_SETTLEMENT_MAX_VOLUME" ] = EXTREME_DEFAULT_FORCE_SETTLEMENT_MAX_VOLUME;
   result[ "EXTREME_DEFAULT_PRICE_FEED_LIFETIME" ] = EXTREME_DEFAULT_PRICE_FEED_LIFETIME;
   result[ "EXTREME_MAX_FEED_PRODUCERS" ] = EXTREME_MAX_FEED_PRODUCERS;
   result[ "EXTREME_DEFAULT_MAX_AUTHORITY_MEMBERSHIP" ] = EXTREME_DEFAULT_MAX_AUTHORITY_MEMBERSHIP;
   result[ "EXTREME_DEFAULT_MAX_ASSET_WHITELIST_AUTHORITIES" ] = EXTREME_DEFAULT_MAX_ASSET_WHITELIST_AUTHORITIES;
   result[ "EXTREME_DEFAULT_MAX_ASSET_FEED_PUBLISHERS" ] = EXTREME_DEFAULT_MAX_ASSET_FEED_PUBLISHERS;
   result[ "EXTREME_COLLATERAL_RATIO_DENOM" ] = EXTREME_COLLATERAL_RATIO_DENOM;
   result[ "EXTREME_MIN_COLLATERAL_RATIO" ] = EXTREME_MIN_COLLATERAL_RATIO;
   result[ "EXTREME_MAX_COLLATERAL_RATIO" ] = EXTREME_MAX_COLLATERAL_RATIO;
   result[ "EXTREME_DEFAULT_MAINTENANCE_COLLATERAL_RATIO" ] = EXTREME_DEFAULT_MAINTENANCE_COLLATERAL_RATIO;
   result[ "EXTREME_DEFAULT_MAX_SHORT_SQUEEZE_RATIO" ] = EXTREME_DEFAULT_MAX_SHORT_SQUEEZE_RATIO;
   result[ "EXTREME_DEFAULT_MARGIN_PERIOD_SEC" ] = EXTREME_DEFAULT_MARGIN_PERIOD_SEC;
   result[ "EXTREME_DEFAULT_MAX_WITNESSES" ] = EXTREME_DEFAULT_MAX_WITNESSES;
   result[ "EXTREME_DEFAULT_MAX_COMMITTEE" ] = EXTREME_DEFAULT_MAX_COMMITTEE;
   result[ "EXTREME_DEFAULT_MAX_PROPOSAL_LIFETIME_SEC" ] = EXTREME_DEFAULT_MAX_PROPOSAL_LIFETIME_SEC;
   result[ "EXTREME_DEFAULT_COMMITTEE_PROPOSAL_REVIEW_PERIOD_SEC" ] = EXTREME_DEFAULT_COMMITTEE_PROPOSAL_REVIEW_PERIOD_SEC;
   result[ "EXTREME_DEFAULT_NETWORK_PERCENT_OF_FEE" ] = EXTREME_DEFAULT_NETWORK_PERCENT_OF_FEE;
   result[ "EXTREME_DEFAULT_LIFETIME_REFERRER_PERCENT_OF_FEE" ] = EXTREME_DEFAULT_LIFETIME_REFERRER_PERCENT_OF_FEE;
   result[ "EXTREME_DEFAULT_MAX_BULK_DISCOUNT_PERCENT" ] = EXTREME_DEFAULT_MAX_BULK_DISCOUNT_PERCENT;
   result[ "EXTREME_DEFAULT_BULK_DISCOUNT_THRESHOLD_MIN" ] = EXTREME_DEFAULT_BULK_DISCOUNT_THRESHOLD_MIN;
   result[ "EXTREME_DEFAULT_BULK_DISCOUNT_THRESHOLD_MAX" ] = EXTREME_DEFAULT_BULK_DISCOUNT_THRESHOLD_MAX;
   result[ "EXTREME_DEFAULT_CASHBACK_VESTING_PERIOD_SEC" ] = EXTREME_DEFAULT_CASHBACK_VESTING_PERIOD_SEC;
   result[ "EXTREME_DEFAULT_CASHBACK_VESTING_THRESHOLD" ] = EXTREME_DEFAULT_CASHBACK_VESTING_THRESHOLD;
   result[ "EXTREME_DEFAULT_BURN_PERCENT_OF_FEE" ] = EXTREME_DEFAULT_BURN_PERCENT_OF_FEE;
   result[ "EXTREME_WITNESS_PAY_PERCENT_PRECISION" ] = EXTREME_WITNESS_PAY_PERCENT_PRECISION;
   result[ "EXTREME_DEFAULT_MAX_ASSERT_OPCODE" ] = EXTREME_DEFAULT_MAX_ASSERT_OPCODE;
   result[ "EXTREME_DEFAULT_FEE_LIQUIDATION_THRESHOLD" ] = EXTREME_DEFAULT_FEE_LIQUIDATION_THRESHOLD;
   result[ "EXTREME_DEFAULT_ACCOUNTS_PER_FEE_SCALE" ] = EXTREME_DEFAULT_ACCOUNTS_PER_FEE_SCALE;
   result[ "EXTREME_DEFAULT_ACCOUNT_FEE_SCALE_BITSHIFTS" ] = EXTREME_DEFAULT_ACCOUNT_FEE_SCALE_BITSHIFTS;
   result[ "EXTREME_MAX_WORKER_NAME_LENGTH" ] = EXTREME_MAX_WORKER_NAME_LENGTH;
   result[ "EXTREME_MAX_URL_LENGTH" ] = EXTREME_MAX_URL_LENGTH;
   result[ "EXTREME_NEAR_SCHEDULE_CTR_IV" ] = EXTREME_NEAR_SCHEDULE_CTR_IV;
   result[ "EXTREME_FAR_SCHEDULE_CTR_IV" ] = EXTREME_FAR_SCHEDULE_CTR_IV;
   result[ "EXTREME_CORE_ASSET_CYCLE_RATE" ] = EXTREME_CORE_ASSET_CYCLE_RATE;
   result[ "EXTREME_CORE_ASSET_CYCLE_RATE_BITS" ] = EXTREME_CORE_ASSET_CYCLE_RATE_BITS;
   result[ "EXTREME_DEFAULT_WITNESS_PAY_PER_BLOCK" ] = EXTREME_DEFAULT_WITNESS_PAY_PER_BLOCK;
   result[ "EXTREME_DEFAULT_WITNESS_PAY_VESTING_SECONDS" ] = EXTREME_DEFAULT_WITNESS_PAY_VESTING_SECONDS;
   result[ "EXTREME_DEFAULT_WORKER_BUDGET_PER_DAY" ] = EXTREME_DEFAULT_WORKER_BUDGET_PER_DAY;
   result[ "EXTREME_MAX_INTEREST_APR" ] = EXTREME_MAX_INTEREST_APR;
   result[ "EXTREME_COMMITTEE_ACCOUNT" ] = EXTREME_COMMITTEE_ACCOUNT;
   result[ "EXTREME_WITNESS_ACCOUNT" ] = EXTREME_WITNESS_ACCOUNT;
   result[ "EXTREME_RELAXED_COMMITTEE_ACCOUNT" ] = EXTREME_RELAXED_COMMITTEE_ACCOUNT;
   result[ "EXTREME_NULL_ACCOUNT" ] = EXTREME_NULL_ACCOUNT;
   result[ "EXTREME_TEMP_ACCOUNT" ] = EXTREME_TEMP_ACCOUNT;

   return result;
}

} } // extreme::chain
