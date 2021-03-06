/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSObject<OS_dispatch_queue>;

@interface MPPurchasableMediaDownloadOperationQueue : NSOperationQueue {
    NSObject<OS_dispatch_queue> *_accessQueue;
    unsigned int _taskIdentifier;
}

- (void)_removeBackgroundAssertion;
- (void)_takeBackgroundAssertion;
- (void)_update;
- (void)dealloc;
- (id)init;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;

@end
