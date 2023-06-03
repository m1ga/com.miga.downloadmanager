# Android DownloadManager support for Titanum 

![preview](dmgr.gif)

Use the Android default DownloadManager to download files in the background. It will open the system download list when you click on the notification.

~~~javascript
const dmg = require("com.miga.downloadmanager");
let url = "https://....file.zip";
let filename = url.substring(url.lastIndexOf('/') + 1);

dmg.startDownload({
    url: url,
    filename: filename,
    success: onDone,
    title: "Download",
    description: "Download " + filename,
    target: "downloads" // podcasts, documents, downloads (default)
});

function onDone(){
	alert("done");
}
~~~
