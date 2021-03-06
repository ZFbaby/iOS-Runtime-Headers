/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUPlayPauseBarItemsControllerChange : NSObject {
    BOOL  _currentPlaybackTimeDidChange;
    BOOL  _playPauseStateDidChange;
    BOOL  _playbackDurationDidChange;
}

@property (setter=_setCurrentPlaybackTimeDidChange:, nonatomic) BOOL currentPlaybackTimeDidChange;
@property (nonatomic, readonly) BOOL hasChanges;
@property (setter=_setPlayPauseStateDidChange:, nonatomic) BOOL playPauseStateDidChange;
@property (setter=_setPlaybackDurationDidChange:, nonatomic) BOOL playbackDurationDidChange;

- (void)_setCurrentPlaybackTimeDidChange:(BOOL)arg1;
- (void)_setPlayPauseStateDidChange:(BOOL)arg1;
- (void)_setPlaybackDurationDidChange:(BOOL)arg1;
- (BOOL)currentPlaybackTimeDidChange;
- (BOOL)hasChanges;
- (BOOL)playPauseStateDidChange;
- (BOOL)playbackDurationDidChange;

@end
