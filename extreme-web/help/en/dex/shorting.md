# Short Selling SmartAssets

In order to increase your exposure to XTR and offer liquidity to SmartAssets, such
as USD, EUR, GOLD, etc., you can go *borrow* this smartAsset from the network and
*sell it short*. We will here briefly describe the procedure.

## Borrowing

The Extreme network is capable of issuing any amount of any SmartAsset and lend
it out to participants given enough collateral.

 * *settlement price*: The price for 1 XTR as it is traded on external exchanges.
 * *maintenance collateral ratio* (MCR): A ratio defined by the witnesses as minimum required collateral ratio
 * *maximum short squeeze ratio* (MSQR): A ratio defined by the witnesses as to how far shorts are protected against short squeezes
 * *short squeeze protection* (SQP): Defines the most that a margin position will ever be forced to pay to cover 
 * *call price* (CP): The price at which short/borrow positions are margin called

### Margin Call

The Extreme network is capable of margin calling those positions that do not
have enough collateral to back their borrowed smartAssets. A margin call will
occur any time the highest bid is less than the *call price* and greater than
*SQP*.
The margin position will be forced to sell its collateral anytime the highest
offer to buy the collateral is less than the call price (x/XTR).

    SQP        = settlement price / MSQR
    call price = DEBT / COLLATERAL * MCR

The margin call will take the collateral, buy shares of borrowed smartAsset at
market rates up to the SQP and close the position. The remaining XTR of the
collateral are returned to the customer.

### Settlement

Holders of any smartAsset can request a settlement at a *fair price* at any time.
The settlement closes the borrow/short positions with lowest collateral ratio
and sells the collateral for the settlement.

## Selling

After borrowing smartAssets, they can be sold free at any of the corresponding
markets at any price a buyer is willing to pay. With this step, the
short-selling is now complete and you are short that particular smartAsset.

## Updating Collateral Ratio

At any time, the holder of a borrow/short position can modify the collateral
ratio in order to flexibly adjust to market behavior. If the collateral ratio is
increase, an additional amount of XTR is locked as collateral, while reducing
the collateral ratio will require an amount of the corresponding SmartAsset to be
payed back to the network.

## Covering

To close a borrow/short position, one must hold the borrowed amount of that
particular smartAsset to hand it over to the Extreme network. After that, the
SmartAssets are reduced from the corresponding supply and the collateral is
released and given back to its owner.