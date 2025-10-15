const dmg = require("com.miga.downloadmanager");
let url = "https://ash-speed.hetzner.com/100MB.bin"
let filename = url.substring(url.lastIndexOf('/') + 1);

dmg.startDownload({
	url: url,
	filename: filename,
	success: onDone,
	title: "Download",
	description: "Download " + filename
});

// dmg.getDownloads();

function onDone() {
	console.log("done")
	alert("done");
}
