var dmg = require("com.miga.downloadmanager");

var filename = url.substring(url.lastIndexOf('/') + 1);

dmg.startDownload({
    url: url,
    filename: filename,
    success: onDone,
    title: "Download",
    description: "Download " + filename
});

dmg.getDownloads();

function onDone(){
	alert("done");
}
