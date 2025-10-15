package com.miga.downloadmanager;

import android.app.DownloadManager;
import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;

public class ServiceReceiver extends BroadcastReceiver {

    TiDownloadmanagerModule _module = null;

    public ServiceReceiver(TiDownloadmanagerModule module) {
        _module = module;
    }

    @Override
    public void onReceive(Context _ct, Intent intent) {
        String action = intent.getAction();
        if (DownloadManager.ACTION_DOWNLOAD_COMPLETE.equals(action)) {
            _module.done();
        } else if (DownloadManager.ACTION_NOTIFICATION_CLICKED.equals(action)) {
            _module.cancel();
        }
    }

}
