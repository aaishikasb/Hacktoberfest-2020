 var express=require("express");
var app=express();
 var request=require("request");

app.set("view engine", "ejs");

app.get("/", function(req, res){
	res.render("search");
});


app.get("/results",function(req,res){
	var query=req.query.search;
	var url="http://www.omdbapi.com/?s=" + query;
	request(url,function(error, response, body){
		if(!error && response.statusCode== 200){
			var data = JSON.parse(body);
			res.render("results", {data: data});
		}
	});
});






app.listen(process.env.PORT || 3000, process.env.IP, function(){
	console.log("server listening at port 3000 and movie app has started");
});