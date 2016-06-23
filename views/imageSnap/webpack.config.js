"use strict";
/* global require*/
var path = require("path");
var webpack = require("webpack");
var argv = require("yargs").argv;
/**
 * Created by dmasley on 6/1/16.
 */
module.exports = {
    entry: [
        "es6-promise",
        "./js/src/main.js"
    ],
    output: {
        filename: "main.bundle.js"
    },
    module: {
        loaders: [
            {
                test: /\.js$/,
                loader: 'babel',
                query: {
                    presets: ['es2015']
                }

            }
        ]
    },
    resolve: {
        extensions: ["", ".js", ".jsx"],
        // where to look from
        root: path.join(__dirname, "javascript", "react"),
        modulesDirectories: ["web_modules", "node_modules", "src"]
    },
    plugins: (
        function() {
            var plugins = [];

            plugins.push(new webpack.optimize.UglifyJsPlugin({
                compress: {
                    warnings: false
                }
            }));
            plugins.push(new webpack.ProvidePlugin({
                'Promise': 'es6-promise',
                'fetch': 'imports?this=>global!exports?global.fetch!whatwg-fetch'
            }));
            return plugins;
        }
    ),
    devtool: "source-map",
    bail: true,
    debug: true
};
