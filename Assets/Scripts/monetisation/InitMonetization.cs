using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using IronSourceJSON;

public class InitMonetization : MonoBehaviour
{
    readonly string YOUR_APP_KEY = "0ad99890ae51de4729ba1cddf71f0526c7dcbc3c9b7585044387a4ee60a3e4f3";//Ironsource key: 186fb1dad

    void Start()
    {
        IronSource.Agent.validateIntegration();        
        IronSource.Agent.loadBanner(IronSourceBannerSize.BANNER, IronSourceBannerPosition.BOTTOM);
        Debug.Log("Got to money start");
        IronSourceEvents.onBannerAdLoadedEvent += BannerAdLoadedEvent;
        IronSourceEvents.onBannerAdLoadFailedEvent += BannerAdLoadFailedEvent;
        IronSourceEvents.onBannerAdClickedEvent += BannerAdClickedEvent;
        IronSourceEvents.onBannerAdScreenPresentedEvent += BannerAdScreenPresentedEvent;
        IronSourceEvents.onBannerAdScreenDismissedEvent += BannerAdScreenDismissedEvent;
        IronSourceEvents.onBannerAdLeftApplicationEvent += BannerAdLeftApplicationEvent;
        IronSource.Agent.shouldTrackNetworkState(true);


    }

    //Invoked once the banner has loaded
    void BannerAdLoadedEvent()
    {     
    }
    //Invoked when the banner loading process has failed.
    //@param description - string - contains information about the failure.
    void BannerAdLoadFailedEvent(IronSourceError error)
    {        
    }
    // Invoked when end user clicks on the banner ad
    void BannerAdClickedEvent()
    {        
    }
    //Notifies the presentation of a full screen content following user click
    void BannerAdScreenPresentedEvent()
    {
    }
    //Notifies the presented screen has been dismissed
    void BannerAdScreenDismissedEvent()
    {     
    }
    //Invoked when the user leaves the app
    void BannerAdLeftApplicationEvent()
    {
    }

    private void Awake()
    {
        IronSource.Agent.init(YOUR_APP_KEY, IronSourceAdUnits.INTERSTITIAL, IronSourceAdUnits.BANNER);
        Debug.Log("Money awake done");
    }


    void OnApplicationPause(bool isPaused)
    {
        IronSource.Agent.onApplicationPause(isPaused);
        Debug.Log("On application pause, this should never trigger, if you see this RIP");
    }

}
