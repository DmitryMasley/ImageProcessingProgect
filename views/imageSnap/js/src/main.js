import loadGoogleMapsAPI from 'load-google-maps-api';
console.log("Fetch google maps");
loadGoogleMapsAPI({key:"AIzaSyAgkc90jv6IeqH3BD-VXCO3YeNRZifXjD4"}).then((googleMaps) => {
	console.log("Create Map");
	var mapDiv = document.getElementById('map');
	var map = new googleMaps.Map(mapDiv, {
		center: {lat: 44.540, lng: -78.546},
		zoom: 8
	});
	map.addListener("idle", function(){
		console.log("Map loaded");
		setTimeout(()=>{if(window.connector){
				connector.mapInitialized();
			}
		}, 1000);
	});
	if(window.connector){
		connector.setCenterCoordinates.connect(function(lat, lng){
			console.log(`setCenterCoordinates: ${l}, ${h}`);
			map.setCenter(lat, lng);
		});
	}
}).catch((err) => {
  console.error(err);
});
