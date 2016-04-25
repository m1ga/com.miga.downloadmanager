package com.miga.downloadmanager;

import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.app.DownloadManager;


public class ServiceReceiver extends BroadcastReceiver {
	
	TiDownloadmanagerModule _module = null;
	
	public ServiceReceiver(TiDownloadmanagerModule module) {
		_module = module;
	}

	@Override
	public void onReceive(Context ctxt, Intent intent) {
         String action = intent.getAction();
		if (DownloadManager.ACTION_DOWNLOAD_COMPLETE.equals(action)) {
			_module.done();
		} else if (DownloadManager.ACTION_NOTIFICATION_CLICKED.equals(action)) {
			_module.cancel();
			
		}
    }

}
