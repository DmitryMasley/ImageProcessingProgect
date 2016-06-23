"use strict";


var gulp = require("gulp");
var webpackStream = require("webpack-stream");
var webpackConfig = require("./webpack.config.js");

gulp.task("webpack", function(){
    gulp.src(["babel-polyfill", "./js/src/main.js"])
    .pipe(webpackStream(Object.assign({
        devtool: "cheap-inline-module-source-map",
        bail: true,
        debug: true
        },
        webpackConfig)))
    .pipe(gulp.dest("./js/build"));
});
gulp.task("watch", function(){
	 gulp.src(["babel-polyfill", "./js/src/main.js"])
    .pipe(webpackStream(Object.assign({
        devtool: "cheap-inline-module-source-map",
        bail: true,
        debug: true,
        watch:true
        },
        webpackConfig)))
    .pipe(gulp.dest("./js/build"));
});
gulp.task("default", ["webpack"]);
