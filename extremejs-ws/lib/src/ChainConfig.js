var _this;

var ecc_config = {
    address_prefix: process.env.npm_config__extreme_ecc_default_address_prefix || "XTR"
};

module.exports = _this = {
    core_asset: "XTR",
    address_prefix: "XTR",
    expire_in_secs: 15,
    expire_in_secs_proposal: 24 * 60 * 60,
    networks: {
        Extreme: {
            core_asset: "XTR",
            address_prefix: "XTR",
            chain_id: "eee0ce9bbd51ef8e868d5c9e39c73216689893e155f27eb73009e9df59f4e706"
        }
    },

    /** Set a few properties for known chain IDs. */
    setChainId: function(chain_id) {

        var i, len, network, network_name, ref;
        ref = Object.keys(_this.networks);

        for (i = 0, len = ref.length; i < len; i++) {

            network_name = ref[i];
            network = _this.networks[network_name];

            console.log("network.chain_id: ", network.chain_id, "\n");

            if (network.chain_id === chain_id) {

                _this.network_name = network_name;

                if (network.address_prefix) {
                    _this.address_prefix = network.address_prefix;
                    ecc_config.address_prefix = network.address_prefix;
                }

                console.log("INFO    Configured for", network_name, ":", network.core_asset, "\n");

                return {
                    network_name: network_name,
                    network: network
                }
            }
        }

        if (!_this.network_name) {
            console.log("Unknown chain id (this may be a testnet)", chain_id);
        }

    },

    reset: function() {
        _this.core_asset = "XTR";
        _this.address_prefix = "XTR";
        ecc_config.address_prefix = "XTR";
        _this.expire_in_secs = 15;
        _this.expire_in_secs_proposal = 24 * 60 * 60;

        console.log("Chain config reset");
    },

    setPrefix: function(prefix = "XTR") {
        _this.address_prefix = prefix;
        ecc_config.address_prefix = prefix;
    }

}
