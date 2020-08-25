//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CALayer.h"

@class CATextLayer, FFAnchoredSequence, FFBackgroundTask, FFImageLayer, FFMIORADAsset, FFMediaRep, FFMediaRepDownloadController, FigTimeRangeAndObject, NSDate, NSSet, NSString;

__attribute__((visibility("hidden")))
@interface FFOrganizerFilmstripChunkImportProgressLayer : CALayer
{
    int _leftEdgeType;
    int _rightEdgeType;
    FFImageLayer *_progressIndicatorLayer;
    FFImageLayer *_progressIndicatorCELayer;
    CALayer *_cameraIconLayer;
    FFImageLayer *_spannedClipLayer;
    CATextLayer *_clipDurationTextLayer;
    CATextLayer *_clipDurationOutlineTextLayer;
    BOOL _isImporting;
    unsigned long long _progress;
    FFMIORADAsset *_radAsset;
    FFBackgroundTask *_processingTask;
    NSSet *_processingAssets;
    BOOL _hasImportObserver;
    BOOL _inImportWindow;
    unsigned long long _spannedClipGlyphID;
    NSString *_ptpPercentageDonePath;
    NSString *_assetImportPercentageDonePath;
    NSString *_repDLProgressPath;
    FFAnchoredSequence *_cachedAnchoredSequence;
    FigTimeRangeAndObject *_rangeOfMedia;
    FFMediaRep *_webMediaRep;
    NSDate *_creationDate;
    FFMediaRepDownloadController *_dlController;
}

+ (id)layerAsSubLayerOf:(id)arg1 filmstripCell:(id)arg2 rangeOfMedia:(id)arg3;
+ (BOOL)shouldDrawStillAsMovie:(id)arg1;
@property(retain) FFMediaRepDownloadController *dlController; // @synthesize dlController=_dlController;
@property(retain) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(retain) FFMediaRep *webMediaRep; // @synthesize webMediaRep=_webMediaRep;
@property unsigned long long progress; // @synthesize progress=_progress;
@property(retain) FFMIORADAsset *radAsset; // @synthesize radAsset=_radAsset;
- (void)setContentsScale:(double)arg1;
- (id)tooltipStringAtPoint:(struct CGPoint)arg1;
- (id)tooltipRects;
- (void)updateCameraIconLayer;
- (void)updateProgressIndicatorLayer;
- (long long)themeDimension1ForProgress;
- (void)setIsImporting:(BOOL)arg1;
- (void)resetObserverAfterWebMediaAssetRelink;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)prepareWithRangeOfMedia:(id)arg1;
- (id)stringFromDuration:(double)arg1;
- (void)removeObservers;
- (void)addObservers;
- (void)appWillTerminate:(id)arg1;
@property int leftEdgeType;
@property int rightEdgeType;
- (void)dealloc;
- (id)init;

@end

