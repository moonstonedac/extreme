class ExtremeApi {

    constructor(ws_rpc, api_name) {
        this.ws_rpc = ws_rpc;
        this.api_name = api_name;
    }

    init() {
        var self = this
        return this.ws_rpc.call([1, this.api_name, []]).then( response => {
            //console.log("[ExtremeApi.js:11] ----- ExtremeApi.init ----->", this.api_name, response);
            self.api_id = response;
            return self;
        });
    }

    exec(method, params) {
        return this.ws_rpc.call([this.api_id, method, params]).catch(error => {
            console.log("!!! ExtremeApi error: ", method, params, error, JSON.stringify(error));
            throw error;
        });
    }
}

module.exports = ExtremeApi;
