require("./stylesheets/app.scss");
require("file?name=index.html!./index.html");
require("file?name=dictionary.json!common/dictionary_en.json");
require("babel/polyfill");
require("whatwg-fetch");
require("indexeddbshim");
require("./asset-symbols/symbols.js");
require("./locales/locales.js");
